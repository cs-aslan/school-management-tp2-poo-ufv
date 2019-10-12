#include "BadArgument.hpp"

// using namespace std;

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