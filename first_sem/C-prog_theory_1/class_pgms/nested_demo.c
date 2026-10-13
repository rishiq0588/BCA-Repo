#include<stdio.h>
int main(){
    int number;
    int sum;
    printf("enter the number");
    scanf("%d",&number);
    sum = 0;
    for(int i = 1; i <= number; i++){
        sum += i;
    }
    printf("the sum is %d",sum);
}