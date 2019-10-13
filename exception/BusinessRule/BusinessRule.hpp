#if !defined(EXCEPTION_BUSINESSRULE_HPP)
#define EXCEPTION_BUSINESSRULE_HPP

#include <string>

namespace exception{

    class BusinessRule
    {
    private:
        std::string errorMessage;
    public:
        BusinessRule(std::string errorMessage);
        ~BusinessRule();
        std::string what();
    };

}

#endif // EXCEPTION_BUSINESSRULE_HPP