/**
    Exercise - 6: Functions

    Sample Input
    3
    4
    6
    5

    Sample Output
    6

    Cassio Cioni Carmo - 04/06/2023
**/


#include <iostream>
#include <cstdio>
using namespace std;


int max_of_four(int t_numberA, int t_numberB, int t_numberC, int t_numberD)
{
    int numberMax = t_numberA;
    if (numberMax < t_numberC) {
        numberMax = t_numberB;
    }
    
    if (numberMax < t_numberC) {
        numberMax = t_numberC;
    }
    
    if (numberMax < t_numberD) {
        numberMax = t_numberD;
    }
    
    return numberMax;
}


int main() {
    int numberA, numberB, numberC, numberD;
    scanf("%d %d %d %d", &numberA, &numberB, &numberC, &numberD);
    int ans = max_of_four(numberA, numberB, numberC, numberD);
    printf("%d", ans);
    
    return 0;
}