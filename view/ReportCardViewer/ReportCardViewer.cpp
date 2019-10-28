#include "ReportCardViewer.hpp"

std::string view::reportCard::createReportCard(controller::SchoolClassController & schoolClassController, controller::StudentController & studentClassController){
    std::string toBeReturned = "";
    
    try
    {
        controller::ReportCardController reportCard = controller::ReportCardController();

        std::cout << "Insira o codigo da turma: ";
        std::string classCodeAux;
        getline(std::cin, classCodeAux, '\n');
        unsigned int classCode = std::stoi(classCodeAux);

        toBeReturned = reportCard.createReportCard(classCode, schoolClassController, studentClassController);
    }
    catch(exception::BusinessRule& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::BadArgument& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(exception::PersistenceError& e)
    {
        std::cerr << e.what() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return toBeReturned;
    
}