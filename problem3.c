#include <stdio.h>

int main(){
    printf("Please enter the lower, upper and step value sequencely\n"); // print message
    float lower = 0, upper = 0, step = 0; //declare variable
    scanf("%f%f%f", &lower, &upper, &step); //read input
    printf("Celsius     |   Fahrenheit\n"); // print message
    printf("------------------------------------------\n");
    float f = 0; //declare variable
    while (lower <= upper)
    {
        printf("%.2f", lower); //.2 is to print to 2 of numbers after decimal point
        printf("         |");
        f = 9.0/5.0 *(lower) + 32; // arithmetic
        printf("%8.2f \n",f); // 8 is to align the word
        lower += step; //to the next step 
    }

    return 0;//main return
}