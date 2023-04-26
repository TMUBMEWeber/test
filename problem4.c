#include <stdio.h> // header file

int main(){ // main
    int ans = 0; // initialize value
    for (int i = 1; i <= 50; i++) //for loop
    {
        ans += i * (101); //prevent using nest loop to avoid O(n^2)
                          //using math to solve
    }
    printf("%d", ans); //print ans
    return 0;
}