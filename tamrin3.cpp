#include <iostream>
#include <string>

int main()
{
    float shoa;
    std::cout << "Enter shoa: ";
    std::cin >> shoa;
    float masahat = shoa * 3.14 * 2;
    float mohit = shoa * shoa * 3.14;
    
    std::cout << "Masahat: " << masahat<< "\n" << "Mohit: " << mohit;
}
