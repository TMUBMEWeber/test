#include <stdio.h>

int main(){
    int a = -1, b = -1, c = -1; //initialize the value
    printf("Input three side of triangle: ");// print message
    scanf("%d %d %d", &a, &b, &c);//read input
    if (a+b>c && b+c > a && c+a >b){ //if a triangle
        if (a == b && b == c && c == a) printf("This is an equilateral triangle.\n"); //The side are among the same
        else if (a != b && b != c && c != a) printf("This is an scalene triangle.\n");//Each one is unique
        else printf("This is an isosceles triangle.\n");//Each two side are equal and not all the same
    }
    else printf("This is not a triangle\n"); // print message
    return 0; // main return
}