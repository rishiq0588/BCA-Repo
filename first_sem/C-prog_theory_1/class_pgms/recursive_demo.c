#include<stdio.h>
int factorial (int);
int main(void) {
    int n=0;
    printf("enter a number");
    scanf("%d", &n);
    int factorial (n);
    printf("factorial of %d is %d", n, factorial);
}
int factorial(int n){
    if(n==0){
        return  1;
    }
    return n*factorial(n-1);
}


