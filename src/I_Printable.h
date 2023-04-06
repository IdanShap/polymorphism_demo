#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

#include <iostream>

using std::ostream;

class I_Printable
{
    //overloding the insertion operator
    friend ostream &operator<<(ostream &os, I_Printable &obj);

public:
    // each derived clas will implement this function tp achive desired print 
    virtual ostream &to_print(ostream &os) = 0 ;
};

#endif