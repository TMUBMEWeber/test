//
//  main.c
//  PL
//
//  Created by 陳椲博 on 2023/4/1.
//

#include <stdio.h>
void check_palindromic(int n, int remain, int reverse);

int main(){
    int n = -1, remain=0, reverse = 0; // initialize the number keyed by the user
    int c = 0;
    while (1) {
        printf("Enter any number: ");
        scanf("%d", &n);
        if (n == 0) break;
        check_palindromic(n, remain, reverse);
        printf("Process exited with return value 0\n");
        printf("Press any key and enter to continue...\n");
        fflush(stdin);
        c = getchar();
        if (c == '0') break;
    }
    return 0;
}

void check_palindromic(int n, int remain, int reverse){
    int temp = n;
    while (n > 0){
        remain = n % 10;
        reverse = reverse * 10 + remain;
        n /= 10;
    }
    if (reverse == temp) printf("Given number is a palindromic number\n");
    else printf("Given number is NOT a palindromic number\n");
    printf("-----------------------------------------\n");
    return;
}
