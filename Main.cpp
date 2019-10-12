#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"
#include "exception/BadArgument/BadArgument.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        model::entity::Teacher pessoa = model::entity::Teacher("Mateus", "654", "rua ad", "centro", "sao jose", "356", "math", 90);
        std::cout << pessoa.toString() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
    return 0;
}