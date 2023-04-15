/**
    Exercise - 13: Strings

    Sample Input

    abcd
    ef
    Sample Output

    4 2
    abcdef
    ebcd af

    Cassio Cioni Carmo - 04/15/2023
**/
#include <iostream>
#include <string>

int main() {
    std::string firstString;
    std::string secondString;
	std::cin >> firstString >> secondString;
    
    int firstLen = firstString.size();
    int secondLen = secondString.size();
    
    std::cout << firstLen << " " << secondLen << "\n";
    std::cout << firstString+secondString << "\n";
    
    char   firstFirstElement = firstString[0];
    char   secondFirstElement = secondString[0];
    
    firstString[0] = secondFirstElement;
    secondString[0] = firstFirstElement;
    
    std::cout << firstString << " " << secondString;
  
    return 0;
}