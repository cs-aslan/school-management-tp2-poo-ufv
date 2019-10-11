#if !defined(STUDENT_HPP)
#define STUDENT_HPP

using namespace std;
#include <string>

#include "../Person/Person.hpp"

class Student : public Person
{
private:
    unsigned int registrationNumber;

    string fatherName;
    string motherName;
public:
    Student(string name, string cpf, string street, string neighborhood, string city, string CEP, string fatherName, string motherName, unsigned int registrationNumber); // Throws BadArgument
    ~Student();

    unsigned int getRegistrationNumber();
    string getFatherName();
    string getMotherName();
};

#endif // STUDENT_HPP
