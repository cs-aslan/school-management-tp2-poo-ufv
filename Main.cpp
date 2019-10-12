#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"
#include "model/persistence/DAOTeacher/DAOTeacher.hpp"
#include "exception/BadArgument/BadArgument.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        model::persistence::DAOTeacher professores = model::persistence::DAOTeacher();
        
        professores.insert("Mateus", "654", "rua ad", "centro", "sao jose", "356", "math", 90);
        std::cout << professores.search("654").toString() << "\n";
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}