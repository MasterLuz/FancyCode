#include "FSourceLocation.h"

#include <iostream>

void FSourceLocation::test()
{
    log("Hello World");
}

void FSourceLocation::log(const std::string& message, const std::source_location& sourceLocation)
{
    std::cout << message << "\n";
    std::cout << "column:\t\t" << sourceLocation.column() << "\n";
    std::cout << "file_name:\t" << sourceLocation.file_name() << "\n";
    std::cout << "function_name:\t" << sourceLocation.function_name() << "\n";
    std::cout << "line:\t\t" << sourceLocation.line() << "\n";
}