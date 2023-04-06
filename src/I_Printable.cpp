#include "I_Printable.h"

// when the insertion operator is used on obj (derived from I_Printable), it will call it's own to_print function and return the correct stream
ostream &operator<<(ostream &os, I_Printable &obj)
{
    return obj.to_print(os);
}