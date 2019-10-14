#if !defined(MODEL_ENTITY_ENROLLEDSTUDENT_HPP)
#define MODEL_ENTITY_ENROLLEDSTUDENT_HPP

#include "../../../exception/BadArgument/BadArgument.hpp"
#include <iostream>
#include <string>
#include <list>
#include <vector>

namespace model
{
    namespace entity
    {
        class EnrolledStudent
        {
        private:
            std::string CPF;
            std::vector<double> grades;
        public:
            EnrolledStudent(std::string CPF);  // Throws BadArgument
            ~EnrolledStudent();

            std::string getCPF();
            std::vector<double>& getGrades();
            
            void setGrade(int position, double grade);
        };
        
    } // namespace entity
    
} // namespace model


#endif // MODEL_ENTITY_ENROLLEDSTUDENT_HPP
