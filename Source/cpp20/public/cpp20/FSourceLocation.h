#pragma once

#include <source_location>
#include <string>

class FSourceLocation
{
public:
    static void test();
    
    static void log(const std::string& message, const std::source_location& sourceLocation = std::source_location::current());
};