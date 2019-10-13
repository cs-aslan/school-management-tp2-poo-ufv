#include "BusinessRule.hpp"

exception::BusinessRule::BusinessRule(std::string errorMessage)
{
    this->errorMessage = errorMessage;
}

exception::BusinessRule::~BusinessRule()
{
}

std::string exception::BusinessRule::what(){
    return this->errorMessage;
}