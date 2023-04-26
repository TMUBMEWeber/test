#include <stdio.h> // header file

int main(){
    double weight = 0; //initialize variables
    double height = 0;
    printf("Enter your weight in kilogram: ");//print
    scanf("%lf", &weight); //read value
    printf("Enter you height in meters: ");//print
    scanf("%lf", &height);//read value
    double BMI = weight / (height*height); // calculate BMI
    printf("Your BMI is: %lf \n", BMI);// print
    if (BMI < 18.5) printf("You are underweight. "); // flow control
    else if (BMI >= 18.5 && BMI < 25 ) printf("You are normal weight.");
    else if (BMI >= 25 && BMI < 30 ) printf("You are overweight.");
    else printf("You are obese");
    return 0; //main return
}