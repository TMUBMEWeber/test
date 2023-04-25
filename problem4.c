#include <stdio.h>
void check_palindromic(int n, int remain, int reverse); //function declare

int main(){ 
    int n = -1, remain=0, reverse = 0; //declare variable
    int num = 0; 
    while (1) { //while loop of the palindromic algo
        printf("Enter any number: "); //print and read message
        scanf("%d", &n);
        if (n == 0) break; //if read 0 => break while
        check_palindromic(n, remain, reverse);//call function
        printf("Process exited with return value 0\n"); //print message
        printf("Press any key to continue...\n");
        
        scanf("%d", &num);//if read 0 break
        
        if (num == 0) {
            break;
        }
    }
    return 0;//main return
}

void check_palindromic(int n, int remain, int reverse){
    int temp = n; //temp for store n
    while (n > 0){ //gen palindromic number
        remain = n % 10;
        reverse = reverse * 10 + remain;
        n /= 10;
    }
    if (reverse == temp) printf("Given number is a palindromic number\n"); //if initial is equal to revised value print message
    else printf("Given number is NOT a palindromic number\n");// else 
    printf("-----------------------------------------\n");
    return;//void function return nothing
}
