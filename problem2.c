#include <stdio.h> // header file
double expo(double base, int exp_num, double ans); //function define

int main(){ //main
    double base = 0.0; // initialize variable
    int exp_num = 0;
    printf("Input base number: "); //print
    scanf("%lf", &base);//read value
    printf("Input exponent(integer): "); // print
    scanf("%d", &exp_num); //print value
    int ans = 1; // initialize the ans variable
    printf("%lf^%d = %lf", base, exp_num, expo(base, exp_num, ans)); // print ans
}

double expo(double base, int exp_num, double ans){ //expo recursive
    if (exp_num == 0){
        return ans; //when pow == 0, return ans
    }
    else{
        ans *= base; //when pow != 0, base mul with ans
        exp_num--; //adjust pow 
        return expo(base, exp_num, ans); // return new value
    }
}