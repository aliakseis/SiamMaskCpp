#include "get_parameters.h"

#include <cctype>
#include <argparse.hpp>

std::tuple<std::string, std::string, std::string> getParameters(int argc, const char* argv[])
{
    argparse::ArgumentParser parser;
    parser.addArgument("-m", "--modeldir", 1, false);
    parser.addArgument("-c", "--config", 1, false);
    parser.addFinalArgument("target");

    parser.parse(argc, argv);

    return {
        parser.retrieve<std::string>("modeldir"),
        parser.retrieve<std::string>("config"),
        parser.retrieve<std::string>("target") };
}
