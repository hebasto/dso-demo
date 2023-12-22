#include <test_lib.h>

#include <iostream>
#include <string>

namespace {
int InternalFn() {
    std::string s{"A string."};
    return s.size();
}
}

void Greet()
{
    std::cout << "Hello from the shared library!\n";
}

int ProcessStdString()
{
    return InternalFn();
}
