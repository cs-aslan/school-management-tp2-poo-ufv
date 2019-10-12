#if !defined(STUDENT_HPP)
#define STUDENT_HPP

// using namespace std;
#include <string>

#include "../Person/Person.hpp"

namespace model{
    namespace entity{

        class Student : public Person
            {
            private:
                unsigned int registrationNumber;

                std::string fatherName;
                std::string motherName;
            public:
                Student(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber); // Throws BadArgument
                ~Student();

                unsigned int getRegistrationNumber();
                std::string getFatherName();
                std::string getMotherName();
            };
            
    }
}

#endif // STUDENT_HPP
