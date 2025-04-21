#include <iostream>
#include <fmt/core.h>

int main() {
    // Using fmt library from vcpkg
    fmt::print("Hello, {}!\n", "vcpkg");
    
    std::cout << "This is a minimal example using vcpkg with GitHub Packages as binary cache." << std::endl;
    
    return 0;
}