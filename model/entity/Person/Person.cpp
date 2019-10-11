using namespace std;

#include <iostream>
#include <string>
#include "Person.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

Person::Person(string name, string cpf, string street, string neighborhood, string city, string CEP) // Throws BadArgument
{
    if(name.empty() || cpf.empty() || street.empty() || neighborhood.empty() || city.empty() || CEP.empty())
        throw BadArgument("Todos os parametros devem ser preenchidos!");

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

string Person::toString(){
    return "Nome: " + this->name + "\n" +
            "CPF: " + this->cpf + "\n" +
            "Rua: " + this->street + "\n" +
            "Bairro: " + this->neighborhood + "\n" +
            "Cidade: " + this->city + "\n" +
            "CEP: " + this->CEP;
}


void Person::setStreet(string street) // Throws BadArgument
{
    if(street.empty())
        throw BadArgument("O parametro não pode ser vazio!");
        
    this->street = street;
}

void Person::setNeighborhood(string neighborhood) // Throws BadArgument
{
    if(neighborhood.empty())
        throw BadArgument("O parametro não pode ser vazio!");
        
    this->neighborhood = neighborhood;
}

void Person::setCity(string city) // Throws BadArgument
{
    if(city.empty())
        throw BadArgument("O parametro não pode ser vazio!");

    this->city = city;
}

void Person::setCEP(string CEP) // Throws BadArgument
{
    if(CEP.empty())
        throw BadArgument("O parametro não pode ser vazio!");

    this->CEP = CEP;
}
