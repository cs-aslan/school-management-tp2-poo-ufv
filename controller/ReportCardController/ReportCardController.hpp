#if !defined(CONTROLLER_REPORTCARDCONTROLLER)
#define CONTROLLER_REPORTCARDCONTROLLER

#include <string>
#include <list>

#include "../StudentController/StudentController.hpp"
#include "../SchoolClassController/SchoolClassController.hpp"

namespace controller
{
    class ReportCardController
    {
    private:
        
    public:
        ReportCardController();
        ~ReportCardController();
        std::string createReportCard(unsigned int classCode, SchoolClassController & schoolClassController, StudentController & studentController);
    };
    
} // namespace controller


#endif // CONTROLLER_REPORTCARDCONTROLLER