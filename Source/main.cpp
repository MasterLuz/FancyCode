#include "FSpan.h"

#include <string>

int main()
{
    char        x1[] = "12312312312dsada";
    std::string x2   = "ascascasxas";

    FSpan::test(x1);
    FSpan::test(x2);
}