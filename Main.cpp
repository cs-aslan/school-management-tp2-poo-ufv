using namespace std;
#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"
#include "exception/BadArgument/BadArgument.hpp"

int main(int argc, char const *argv[])
{
    try
    {
        Person pessoa = Teacher("Mateus", "654", "rua ad", "centro", "sao jose", "356", "math", 90);
        cout << pessoa.toString() << endl;
    }
    catch(BadArgument& e)
    {
        std::cerr << e.what() << endl;
    }
    
    return 0;
}