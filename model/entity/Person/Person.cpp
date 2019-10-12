// using namespace std;

#include <iostream>
#include <string>
#include "Person.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

Person::Person(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP) // Throws exception::BadArgument
{
    if(name.empty() || cpf.empty() || street.empty() || neighborhood.empty() || city.empty() || CEP.empty())
        throw exception::BadArgument("Todos os parametros devem ser preenchidos!");

    this-> name = name;
    this-> cpf = cpf;
    this-> street = street;
    this-> neighborhood = neighborhood;
    this-> city = city;
    this-> CEP = CEP;
}

Person::~Person()
{
}

std::string Person::getName()
{
    return this->name;
}

std::string Person::getCpf()
{
    return this->cpf;
}

std::string Person::getStreet()
{
    return this->street;
}

std::string Person::getNeighborhood()
{
    return this->neighborhood;
}

std::string Person::getCity()
{
    return this->city;
}

std::string Person::getCEP()
{
    return this->CEP;
}

std::string Person::toString(){
    return "Nome: " + this->name + "\n" +
            "CPF: " + this->cpf + "\n" +
            "Rua: " + this->street + "\n" +
            "Bairro: " + this->neighborhood + "\n" +
            "Cidade: " + this->city + "\n" +
            "CEP: " + this->CEP;
}


void Person::setStreet(std::string street) // Throws exception::BadArgument
{
    if(street.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");
        
    this->street = street;
}

void Person::setNeighborhood(std::string neighborhood) // Throws exception::BadArgument
{
    if(neighborhood.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");
        
    this->neighborhood = neighborhood;
}

void Person::setCity(std::string city) // Throws exception::BadArgument
{
    if(city.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");

    this->city = city;
}

void Person::setCEP(std::string CEP) // Throws exception::BadArgument
{
    if(CEP.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");

    this->CEP = CEP;
}
