#if !defined(MODEL_ENTITY_SCHOLLCLASS_HPP)
#define MODEL_ENTITY_SCHOLLCLASS_HPP

#include "../../../exception/BadArgument/BadArgument.hpp"
#include "../EnrolledStudent/EnrolledStudent.hpp"
#include <iostream>
#include <string>
#include <list>

namespace model
{
    namespace entity
    {
        class SchoolClass
        {
        private:
            unsigned int code;
            std::string teacherCPF;
            unsigned int year;
            std::list<EnrolledStudent> enrolledStudent;
        public:
            SchoolClass(unsigned int code, unsigned int year, std::string teacherCPF);  // Throws BadArgument
            ~SchoolClass();

            unsigned int getCode();
        };
        
    } // namespace entity
    
} // namespace model


#endif // MODEL_ENTITY_SCHOLLCLASS_HPP