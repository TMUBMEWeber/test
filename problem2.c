#include <stdio.h>

int main(){
    int a = 0, b = 0; //declare variable
    scanf("%d %d", &a, &b); // read input
    printf("X       Y       X+Y     X-Y     X*Y\n"); //print message
    printf("------------------------------------\n");
    int add, sub, mul; //declare variable
    for (int count = 0; count < 5; count++) //for loop from x to x+4
    {   
        a += count; //arithmetic
        b += count;
        add = a + b;
        sub = a - b;
        mul = a * b;
        printf("%-8d%-8d%-8d%-8d%-8d\n", a, b, add, sub, mul); //print value and negative sign is to align the word
        a -= count;
        b -= count;
    }
    return 0; // main return
}