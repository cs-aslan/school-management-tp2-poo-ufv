#if !defined(MODEL_ENTITY_ENROLLEDSTUDENT_HPP)
#define MODEL_ENTITY_ENROLLEDSTUDENT_HPP

#include "../../../exception/BadArgument/BadArgument.hpp"
#include <iostream>
#include <string>
#include <list>

namespace model
{
    namespace entity
    {
        class EnrolledStudent
        {
        private:
            std::string CPF;
            std::list<double> grades;
        public:
            EnrolledStudent(std::string CPF);  // Throws BadArgument
            ~EnrolledStudent();
        };
        
    } // namespace entity
    
} // namespace model


#endif // MODEL_ENTITY_ENROLLEDSTUDENT_HPP
