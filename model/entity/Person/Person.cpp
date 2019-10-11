using namespace std;

#include <iostream>
#include <string>
#include "Person.hpp"
#include "../../../exception/BadArguments/BadArguments.hpp"

Person::Person(string name, string cpf, string street, string neighborhood, string city, string CEP)
{
    throw BadArguments("CPF inválido!");
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

string Person::getName()
{
    return this->name;
}

string Person::getCpf()
{
    return this->cpf;
}

string Person::getStreet()
{
    return this->street;
}

string Person::getNeighborhood()
{
    return this->neighborhood;
}

string Person::getCity()
{
    return this->city;
}

string Person::getCEP()
{
    return this->CEP;
}


void Person::setStreet(string street)
{
    this->street = street;
}

void Person::setNeighborhood(string neighborhood)
{
    this->neighborhood = neighborhood;
}

void Person::setCity(string city)
{
    this->city = city;
}

void Person::setCEP(string CEP)
{
    this->CEP = CEP;
}
