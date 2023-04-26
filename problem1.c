#include <stdio.h> // include header file
#include <math.h>
#define pi acos(-1) // define pi

int main(){ // main
    double radius = 0.0; //initialize radius
    printf("Please enter the input value > 0: "); // print 
    scanf("%lf", &radius); // read value
    while (radius <= 0) //while when wrong enter value
    {
        printf("Please enter the input value > 0: ");
        scanf("%lf", &radius);
    }
    
    double diameter = radius * 2.0; // calculate diameter
    double circumference = 2 * pi * radius; // calculate circumference
    double area = pi * radius * radius; //calculate area
    printf("Diameter = %lf units\nCircumference = %lf units\nArea = %lf sq. units", diameter, circumference, area); //print
    return 0; //main return
}