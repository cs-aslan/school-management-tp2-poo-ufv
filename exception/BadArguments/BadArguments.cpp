#include "BadArguments.hpp"

BadArguments::BadArguments(string errorMessage)
{
    this->errorMessage = errorMessage;
}

BadArguments::~BadArguments()
{
}

string BadArguments::what(){
    return this->errorMessage;
}