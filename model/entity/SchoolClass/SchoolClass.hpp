#if !defined(SCHOLLCLASS_HPP)
#define SCHOLLCLASS_HPP

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
        };
        
    } // namespace entity
    
} // namespace model


#endif // SCHOLLCLASS_HPP