#include <stdio.h>
#include <math.h>
int expo(double x);
int loga1(double x);
int loga2(double x);//function declare

int main(){
    double x = 0.0;
    printf("Please enter a value: "); //print and read
    scanf("%lf", &x);
    int logarithm_function = 0; // declare value
    int exponential_function = expo(x);
    if (x == 1) logarithm_function = loga2(x);// cause ln(0) is undefined
    else {logarithm_function = loga1(x);}//other can use ln(1-x) to approximate
    printf("The value of the n of the exponential is %d\n", exponential_function); //print value
    printf("The value of n of natural logarithm is %d\n", logarithm_function);
    return 0; //return value
}
int expo(double x){ 
    double accuracy = exp(x); //the real value
    double appro = 1;//the first term of the approximate
    int counter = 1; //counter
    int fact = 1; //factorial

    while (accuracy - appro>0.00001 || appro - accuracy > 0.00001) //compare the real value and the value from appro
    {
        fact = 1; //initialize the factorial
        for(int i = 1; i <= counter; i++) {fact *= i;}//do factorial
        appro += pow(x, counter)/fact; // Taylor expansion
        counter++;//to next term and keep looping
    }
    return --counter; //eliminate the last loop
}

int loga1(double x){
    double accuracy = log(1-x); // the real value
    double appro = 0; // the first of the Taylor series
    int counter = 1; //counter
    while (accuracy - appro>0.00001 || appro - accuracy > 0.00001) //compare the real value and the value from appro
    {
        appro = appro - (pow(x, counter)/counter); //do Taylor expansion
        counter++;//to next term and keep looping
    }
    return --counter; // eliminate the last redundant n
}

int loga2(double x){
    double accuracy = log(1+x);// the real value
    double appro = 0;// the first of the Taylor series
    int counter = 1;//counter
    while (accuracy - appro>0.00001 || appro - accuracy > 0.00001)//compare the real value and the value from appro
    {
        appro = appro + (pow(x, counter)/counter)*pow(-1, counter+1);//do Taylor expansion
        counter++;//to next term and keep looping
    }
    return --counter;// eliminate the last redundant n
}

