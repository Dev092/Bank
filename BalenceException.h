#ifndef BALENCEEXCEPTION_H
#define BALENCEEXCEPTION_H
#include<exception>
#include<cstring>
class BalenceException: public std::exception{
   char errormsg[100];
public:
    BalenceException(){}
    BalenceException(const char *m)
    {
        strcpy(errormsg, m);
    }
    const char *what()
    {
        return errormsg;
    }
};
#endif // BALENCEEXCEPTION_H
