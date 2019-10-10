#if !defined(PERSON_HPP)
#define PERSON_HPP

using namespace std;
#include <iostream>
#include <string>

class Person
{
private:
    string name;
    string cpf;

    string street;
    string neighborhood;
    string city;
    string CEP;

    // Birth date
    
public:
    Person(string name, string cpf, string street, string neighborhood, string city, string CEP);
    ~Person();

    string getName();
    string getCpf();
    string getStreet();
    string getNeighborhood();
    string getCity();
    string getCEP();

    void setStreet(string street);
    void setNeighborhood(string neighborhood);
    void setCity(string city);
    void setCEP(string CEP);
};

#endif // PERSON_HPP