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
};

#endif // PERSON_HPP