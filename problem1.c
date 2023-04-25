#include <stdio.h>
double ctof(double c);

int  main(){
    double low = 0.0;
    printf("Please give the lower limit, limit>=0: ");
    scanf("%lf", &low);
    
    while (low < 0){
        printf("Please give the lower limit, limit>=0: ");
        scanf("%lf", &low);
    };
    double high = 0;
    do
    {
        printf("Please give the higher limit, %lf<limit<=50000: ", low);
        scanf("%lf", &high);
    } while (high > 50000 || high < 10);
    double step = 0;
    do
    {
        printf("Please give the step, %lf<limit<=%lf: ", low, high);
        scanf("%lf", &step);
    } while ( step > high || step < low);
    printf("Celsius              Fahrenheit\n");
    printf("----------------------------------\n");
    for(double i= low; i<high; i=i+step){
        printf("%lf                    %lf",i, ctof(i));
    }

    return 0;

}

double ctof(double c){
    return 9/5*(c)+32;
}