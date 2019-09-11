#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    int ival = 42;
    int *pival = &ival;
    std::cout << pival << "\t"  << *pival << "\t" << &pival;
    return 0;

}