#if !defined(MODEL_ENTITYSTUDENT_HPP)
#define MODEL_ENTITYSTUDENT_HPP

#include "../../../exception/BadArgument/BadArgument.hpp"
#include <iostream>
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

                bool active;
            public:
                Student(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string fatherName, std::string motherName, unsigned int registrationNumber); // Throws BadArgument
                ~Student();

                unsigned int getRegistrationNumber();
                std::string getFatherName();
                std::string getMotherName();
                std::string toString();

                void setActive(bool active);
            };

    } // namespace entity
    
} // namespace model

#endif // MODEL_ENTITYSTUDENT_HPP
