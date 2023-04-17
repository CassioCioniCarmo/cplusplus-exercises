/**
    Exercise - 15: Vector-Sort

    Sample Input
    5
    1 6 10 8 4

    Sample Output
    1 4 6 8 10

    Cassio Cioni Carmo - 04/17/2023
**/
#include <sstream>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int vectorSize;
    int element;
    std::cin >> vectorSize;
    std::vector<int> inputVector;

    for(int i = 0; i < vectorSize; i++) {
        std::cin >> element;
        inputVector.push_back(element);
    }

    std::sort(inputVector.begin(), inputVector.end());

    for (auto x : inputVector){
        std::cout << x << " ";
    }
    
    return 0;
}