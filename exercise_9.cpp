/**
    Exercise - 7: Variable Sized Arrays 
    Consider an n-element array, a, where each index i in the array contains a reference to an array of k integers (where the value of k varies from array to array). 

    Sample Input

    2 2
    3 1 5 4
    5 1 2 8 9 3
    0 1
    1 3
    Sample Output

    5
    9

    Cassio Cioni Carmo - 04/11/2023
**/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <vector>

int main() 
{
    int arrayNumber;
    int queryNumber;
    int lineLengh;
    int vectorElement;
    int iElement;
    int jElement;

    scanf("%d", &arrayNumber);
    scanf("%d", &queryNumber);

    std::vector< std::vector <int > > arr;
    std::vector<int> sub;
    

    for (int i = 0; i < queryNumber; i++) 
    {
        scanf("%d", &lineLengh);
        
        for (int i = 0; i < lineLengh; i++) 
        {
            scanf("%d",&vectorElement);
            sub.push_back(vectorElement);
        }
        arr.push_back(sub);
        sub.clear();
    }
    
    for (int i = 0; i < queryNumber; i++) 
        {
            scanf("%d",&iElement);
            scanf("%d",&jElement);
            printf("%i \n",arr[iElement][jElement]);
        }
    
    return 0;
}