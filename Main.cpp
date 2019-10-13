#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"
#include "model/persistence/DAOTeacher/DAOTeacher.hpp"
#include "exception/BadArgument/BadArgument.hpp"
#include "exception/PersistenceError/PersistenceError.hpp"
#include "exception/BusinessRule/BusinessRule.hpp"
#include "controller/TeacherController/TeacherController.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        controller::TeacherController professores = controller::TeacherController();
        
        professores.insert("Mateus", "654", "rua ad", "centro", "sao jose", "356", "math", 90);
        professores.insert("Mateus", "654", "rua ad", "centro", "sao jose", "356", "math", 90);
       // std::cout << professores.search("654").toString() << "\n";
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}