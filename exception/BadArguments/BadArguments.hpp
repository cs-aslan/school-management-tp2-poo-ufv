#if !defined(BADARGUMENTS_HPP)
#define BADARGUMENTS_HPP

using namespace std;
#include <string>

class BadArguments
{
private:
    string errorMessage;
public:
    BadArguments(string errorMessage);
    ~BadArguments();
    string what();
};

#endif // BADARGUMENTS_HPP