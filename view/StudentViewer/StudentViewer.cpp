#include "StudentViewer.hpp"

void view::student::print(controller::StudentController & controller)
{
    std::list<model::entity::Student> list = controller.getAll();

    std::list<model::entity::Student>::iterator it;

    for (it = list.begin(); it != list.end(); it++)
    {
        std::cout << it->toString() << "\n" << view::aux::separator();
    
    }
}
    
void view::student::insert(controller::StudentController & controller)
{
    try
    {
        std::string registrationNumberSwap;

        std::cout << view::aux::separator();

        std::cout << "Insira o nome do aluno: ";
        std::string name;
        getline(std::cin, name, '\n');

        std::cout << "Insira o cpf: ";
        std::string cpf;
        getline(std::cin, cpf, '\n');

        std::cout << "Insira a rua: ";
        std::string street;
        getline(std::cin, street, '\n');

        std::cout << "Insira o bairro: ";
        std::string neighborhood;
        getline(std::cin, neighborhood, '\n');

        std::cout << "Insira a cidade: ";
        std::string city;
        getline(std::cin, city, '\n');

        std::cout << "Insira o CEP: ";
        std::string CEP;
        getline(std::cin, CEP, '\n');

        std::cout << "Insira o nome do pai: ";
        std::string fatherName;
        getline(std::cin, fatherName, '\n');

        std::cout << "Insira o nome da mae: ";
        std::string motherName;
        getline(std::cin, motherName, '\n');

        std::cout << "Insira o numero de matricula: ";
        getline(std::cin, registrationNumberSwap, '\n');
        int registrationNumber = std::stoi(registrationNumberSwap);

        controller.insert(name, cpf, street, neighborhood, city, CEP, fatherName, motherName, registrationNumber);
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << view::aux::separator();
}