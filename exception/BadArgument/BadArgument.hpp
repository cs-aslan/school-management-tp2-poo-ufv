#if !defined(BADARGUMENT_HPP)
#define BADARGUMENTS_HPP

using namespace std;
#include <string>

class BadArgument
{
private:
    string errorMessage;
public:
    BadArgument(string errorMessage);
    ~BadArgument();
    string what();
};

#endif // BADARGUMENT_HPP