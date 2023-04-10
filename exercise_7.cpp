/**
    Exercice - 7: Arrays 
    Print the N integers of the array in the reverse order, space-separated on a single line.

  Sample Input

    4
    1 4 3 2
    Sample Output

    2 3 4 1

    Cassio Cioni Carmo - 04/09/2023
**/


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

int main() {
    int arrayLengh;
    scanf("%d", &arrayLengh);
    
    int arrayNumber[arrayLengh];
    
    for (int i = 0; i < arrayLengh; i++) 
    {
        scanf("%d",&arrayNumber[i]);
    }
    
    for (int i = arrayLengh-1; i >= 0; i--) 
    {
        printf("%d ",arrayNumber[i]);
    }
    
    return 0;
}
