#include "PersistenceError.hpp"

exception::PersistenceError::PersistenceError(std::string errorMessage)
{
    this->errorMessage = errorMessage;
}

exception::PersistenceError::~PersistenceError()
{
}

std::string exception::PersistenceError::what(){
    return this->errorMessage;
}