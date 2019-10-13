#if !defined(TEACHER_HPP)
#define TEACHER_HPP

#include <string>
#include "../Person/Person.hpp"
#include "../../../exception/BadArgument/BadArgument.hpp"

namespace model {
    namespace entity{

        class Teacher : public Person
            {
            private:
                std::string area;
                double salaryPerHour;
                bool active;
            public:
                Teacher(std::string name, std::string cpf, std::string street, std::string neighborhood, std::string city, std::string CEP, std::string area, double SalaryPerHour); // Throws BadArgument
                ~Teacher();

                std::string getArea();
                double getSalaryPerHour();
                std::string toString();

                void setArea(std::string area); // Throws BadArgument
                void setSalaryPerHour(double salaryPerHour); // Throws BadArgument
            };

    } // namespace entity
    
} // namespace model

#endif // TEACHER_HPP
