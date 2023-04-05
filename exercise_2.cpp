/**
    Exercice - 2: Input and Output
    Reading input from stdin and printing output to stdout
    
    Cassio Cioni Carmo - 04/04/2023
**/

#include <iostream>
#include <cstdio>

int main() 
{
    int firstInput, secondInput, thirdInput;
    
    std::cin >> firstInput >> secondInput >> thirdInput;
    
    std::cout << firstInput + secondInput + thirdInput << std::endl;

    return 0;
}
