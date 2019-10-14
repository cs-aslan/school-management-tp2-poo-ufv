#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"
#include "model/entity/EnrolledStudent/EnrolledStudent.hpp"
#include "model/persistence/DAOTeacher/DAOTeacher.hpp"
#include "exception/BadArgument/BadArgument.hpp"
#include "exception/PersistenceError/PersistenceError.hpp"
#include "exception/BusinessRule/BusinessRule.hpp"
#include "controller/TeacherController/TeacherController.hpp"
#include "controller/StudentController/StudentController.hpp"
#include "view/TeacherViewer/TeacherViewer.hpp"
#include "view/StudentViewer/StudentViewer.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        model::entity::EnrolledStudent estudante = model::entity::EnrolledStudent("106");
        estudante.setGrade(3, 3.5);
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::PersistenceError& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}