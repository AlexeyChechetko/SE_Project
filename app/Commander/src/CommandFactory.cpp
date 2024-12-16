#include "CommandFactory.hpp"

#include "CommandDelete.hpp"
#include "CommandShow.hpp"
#include "CommandPrint.hpp"
#include "CommandLoad.hpp"
#include "CommandOption.hpp"

Command* CommandFactory::create_command(std::string command)
{
    if (command == "delete")
    {
        return new CommandDelete("");
    }
    else if (command == "show")
    {
        return new CommandShow("");
    }
    else if (command == "print")
    {
        return new CommandPrint("");
    }
    else if (command == "load")
    {
        return new CommandLoad("");
    }
    else
    {
        return new CommandOption("");
    }
}