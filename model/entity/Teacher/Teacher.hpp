#if !defined(TEACHER_HPP)
#define TEACHER_HPP

using namespace std;
#include <string>
#include "../Person/Person.hpp"

class Teacher : public Person
{
private:
    string area;
    double salaryPerHour;
public:
    Teacher(string name, string cpf, string street, string neighborhood, string city, string CEP, string area, double SalaryPerHour);
    ~Teacher();
};

#endif // TEACHER_HPP
