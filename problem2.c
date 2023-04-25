#include <stdio.h>

int main(){
    unsigned first = 0;
    unsigned int second = 0;
    unsigned int ans = 0;
    printf("Enter the first number:");
    scanf("%d", &first);
    printf("Enter the second number:");
    scanf("%d", &second);
    

    int carry;
    while (second != 0) {
        carry = first & second;
        first = first ^ second;
        second = carry << 1;
    }
    ans = first;

    
    printf("%d", ans);
}
