#include "BadArgument.hpp"

BadArgument::BadArgument(string errorMessage)
{
    this->errorMessage = errorMessage;
}

BadArgument::~BadArgument()
{
}

string BadArgument::what(){
    return this->errorMessage;
}