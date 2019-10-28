#if !defined(MODEL_PERSISTENCE_DAOSCHOOLCLASS)
#define MODEL_PERSISTENCE_DAOSCHOOLCLASS

#include <list>
#include <string>
#include "../../../model/entity/SchoolClass/SchoolClass.hpp"
#include "../../../exception/PersistenceError/PersistenceError.hpp"

namespace model
{
    namespace persistence
    {
        class DAOSchoolClass
        {
        private:
            std::list<model::entity::SchoolClass> persistence;
        public:
            DAOSchoolClass();
            ~DAOSchoolClass();
            void insert(unsigned int code, unsigned int year, std::string teacherCPF);
            entity::SchoolClass & search(unsigned int code);
            std::list<model::entity::SchoolClass>& getAll();

            void insertEnrolledStudent(unsigned int code, std::string enrolledStudentCPF);
        };
        
    } // namespace persistence
    
} // namespace model

#endif // MODEL_PERSISTENCE_DAOSCHOOLCLASS