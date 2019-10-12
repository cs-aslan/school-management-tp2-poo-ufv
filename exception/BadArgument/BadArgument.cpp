#include "BadArgument.hpp"

exception::BadArgument::BadArgument(std::string errorMessage)
{
    this->errorMessage = errorMessage;
}

exception::BadArgument::~BadArgument()
{
}

std::string exception::BadArgument::what(){
    return this->errorMessage;
}