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
    Person(string name, string cpf, string street, string neighborhood, string city, string CEP); // Throws BadArgument
    ~Person();

    string getName();
    string getCpf();
    string getStreet();
    string getNeighborhood();
    string getCity();
    string getCEP();
    string toString();

    void setStreet(string street); // Throws BadArgument
    void setNeighborhood(string neighborhood); // Throws BadArgument
    void setCity(string city); // Throws BadArgument
    void setCEP(string CEP); // Throws BadArgument
};

#endif // PERSON_HPP