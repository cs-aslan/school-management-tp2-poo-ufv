using namespace std;

#include <iostream>
#include <string>
#include "Person.hpp"

Person::Person(string name, string cpf, string street, string neighborhood, string city, string CEP)
{
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