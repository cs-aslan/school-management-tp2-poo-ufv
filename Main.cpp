using namespace std;
#include <iostream>
#include <string>

#include "model/entity/Person/Person.hpp"
#include "model/entity/Teacher/Teacher.hpp"

int main(int argc, char const *argv[])
{
    Person pessoa = Teacher("Mateus", "654", "rua ad", "centro", "sao jose", "356");
    return 0;
}