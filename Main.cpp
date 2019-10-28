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
#include "controller/SchoolClassController/SchoolClassController.hpp"
#include "view/TeacherViewer/TeacherViewer.hpp"
#include "view/StudentViewer/StudentViewer.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        controller::SchoolClassController schoolClassController = controller::SchoolClassController();
        controller::TeacherController teacherController = controller::TeacherController();
        controller::StudentController studentController = controller::StudentController();

        teacherController.insert("Mateus", "10631890637", "rua das palmeiras", "centro", "para de minas", "35694000", "mat", 999);
        schoolClassController.insert(2019, "10631890637", teacherController);

        studentController.insert("Joaozin", "40210316691", "Rua dos bobos", "centro", "arrocha", "35694000", "feijao", "arroz");

        schoolClassController.insertEnrolledStudent(0, "40210316691", studentController);

        schoolClassController.setGradeEnrolledStudent(0, "40210316691", 99, 2);
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