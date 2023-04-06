/**
    Exercice - 3: Basic Data Types
    Sample Input

    3 12345678912345 a 334.23 14049.30493
    Sample Output

    3
    12345678912345
    a
    334.230
    14049.304930000
    
    Cassio Cioni Carmo - 04/06/2023
**/

#include <iostream>
#include <cstdio>

int main() 
{
    int variableInt;
    long variableLong;
    char variableChar;
    float variableFloat;
    double variableDouble;
    
    scanf("%d %ld %c %f %lf", &variableInt, &variableLong, &variableChar, &variableFloat, &variableDouble);
    printf("%d  \n", variableInt);
    printf("%ld \n", variableLong);
    printf("%c  \n", variableChar);
    printf("%f  \n", variableFloat);
    printf("%lf \n", variableDouble);

    return 0;
}