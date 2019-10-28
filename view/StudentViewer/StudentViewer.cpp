#include "StudentViewer.hpp"

std::string view::student::menu(){
    return view::aux::separator() +
    "1- Inserir novo aluno\n" +
    "2- Listar todos os alunos\n" +
    "3- Mudar rua de algum aluno\n" +
    "4- Mudar bairro de algum aluno\n" +
    "5- Mudar cidade de algum aluno\n" +
    "6- Mudar CEP de algum aluno\n" +
    "9- Voltar ao menu principal\n" +
    view::aux::separator();
}


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

        controller.insert(name, cpf, street, neighborhood, city, CEP, fatherName, motherName);
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

void view::student::setStreet(controller::StudentController & controller)
{
    try
    {
    std::cout << view::aux::separator();
    std::cout << "Insira o cpf: ";
    std::string cpf;
    getline(std::cin, cpf, '\n');

    std::cout << "Insira a rua: ";
    std::string street;
    getline(std::cin, street, '\n');

    controller.search(cpf).setStreet(street);

    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void view::student::setNeighborhood(controller::StudentController & controller)
{
    try
    {
    std::cout << view::aux::separator();
    std::cout << "Insira o cpf: ";
    std::string cpf;
    getline(std::cin, cpf, '\n');

    std::cout << "Insira o bairro: ";
    std::string neighborhood;
    getline(std::cin, neighborhood, '\n');

    controller.search(cpf).setNeighborhood(neighborhood);
    
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void view::student::setCity(controller::StudentController & controller)
{
    try
    {
    std::cout << view::aux::separator();
    std::cout << "Insira o cpf: ";
    std::string cpf;
    getline(std::cin, cpf, '\n');

    std::cout << "Insira a cidade: ";
    std::string city;
    getline(std::cin, city, '\n');

    controller.search(cpf).setCity(city);
    
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}

void view::student::setCEP(controller::StudentController & controller)
{
    try
    {
    std::cout << view::aux::separator();
    std::cout << "Insira o CPF: ";
    std::string CPF;
    getline(std::cin, CPF, '\n');

    std::cout << "Insira o CEP: ";
    std::string CEP;
    getline(std::cin, CEP, '\n');

    controller.search(CPF).setCEP(CEP);
    
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
}