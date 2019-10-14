#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"
#include "model/persistence/DAOTeacher/DAOTeacher.hpp"
#include "exception/BadArgument/BadArgument.hpp"
#include "exception/PersistenceError/PersistenceError.hpp"
#include "exception/BusinessRule/BusinessRule.hpp"
#include "controller/TeacherController/TeacherController.hpp"
#include "View/TeacherViewer/TeacherViewer.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        controller::TeacherController professores = controller::TeacherController();
        
        view::teacher::insert(professores);
        professores.setNeighborhood("1","Centro");
        view::teacher::print(professores);
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