#if !defined(EXCEPTION_PERSISTENCEERROR_HPP)
#define EXCEPTION_PERSISTENCEERROR_HPP

#include <string>

namespace exception
{
    class PersistenceError
    {
    private:
        std::string errorMessage;
    public:
        PersistenceError(std::string errorMessage);
        ~PersistenceError();
        std::string what();
    };
    
} // namespace exception


#endif // EXCEPTION_PERSISTENCEERROR_HPP