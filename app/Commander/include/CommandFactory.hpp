#pragma once

#include "Command.hpp"
#include <string>

class CommandFactory
{
public:
    Command* create_command(std::string command);
};