#pragma once

#include <string>
#include <tuple>

std::tuple<std::string, std::string, std::string> getParameters(int argc, const char* argv[]);
