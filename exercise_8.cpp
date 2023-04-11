/**
    Exercise - 8: Pointer 

    Sample Input

    4
    5
    Sample Output

    9
    1

    Cassio Cioni Carmo - 04/09/2023
**/

#include <stdio.h>

void update(int *t_numbera,int *t_numberb) {
    int number1 = *t_numbera;
    int number2 = *t_numberb;
    (*t_numbera) = (*t_numbera) + (*t_numberb);
    
    if (number1 > number2) {
        (*t_numberb) = number1 - number2;  
    }else {
        (*t_numberb) = number2 - number1;  
    }
    
}

int main() {
    int numbera, numberb;
    int *p_numbera = &numbera, *p_numberb = &numberb;
    
    scanf("%d %d", &numbera, &numberb);
    update(p_numbera, p_numberb);
    printf("%d\n%d", numbera, numberb);

    return 0;
}
