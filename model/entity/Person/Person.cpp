// using namespace std;

#include <iostream>
#include <string>
#include "Person.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

model::entity::Person::Person(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP) // Throws exception::BadArgument
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

model::entity::Person::~Person()
{
}

std::string model::entity::Person::getName()
{
    return this->name;
}

std::string model::entity::Person::getCpf()
{
    return this->cpf;
}

std::string model::entity::Person::getStreet()
{
    return this->street;
}

std::string model::entity::Person::getNeighborhood()
{
    return this->neighborhood;
}

std::string model::entity::Person::getCity()
{
    return this->city;
}

std::string model::entity::Person::getCEP()
{
    return this->CEP;
}

std::string model::entity::Person::toString(){
    return "Nome: " + this->name + "\n" +
            "CPF: " + this->cpf + "\n" +
            "Rua: " + this->street + "\n" +
            "Bairro: " + this->neighborhood + "\n" +
            "Cidade: " + this->city + "\n" +
            "CEP: " + this->CEP;
}


void model::entity::Person::setStreet(std::string street) // Throws exception::BadArgument
{
    if(street.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");
        
    this->street = street;
}

void model::entity::Person::setNeighborhood(std::string neighborhood) // Throws exception::BadArgument
{
    if(neighborhood.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");
        
    this->neighborhood = neighborhood;
}

void model::entity::Person::setCity(std::string city) // Throws exception::BadArgument
{
    if(city.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");

    this->city = city;
}

void model::entity::Person::setCEP(std::string CEP) // Throws exception::BadArgument
{
    if(CEP.empty())
        throw exception::BadArgument("O parametro não pode ser vazio!");

    this->CEP = CEP;
}
