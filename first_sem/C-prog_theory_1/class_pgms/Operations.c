#include<stdio.h>
int main(){
    int choice,firstnumber,secondnumber;
    do {
    printf("\n----Welcome to my calculator-----\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice\n");
    scanf("%d",&choice);
    if(choice== 1){
        //addition
        printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        int sum=firstnumber + secondnumber;
        printf("The sum is : %d",sum);
    }
    if(choice== 2){
        //Subtraction
        printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        int difference=firstnumber - secondnumber;
        printf("The difference is : %d",difference);
    }
    if(choice== 3){
        //Multiplication
         printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        int multiplication=firstnumber * secondnumber;
        printf("The product is : %d",multiplication);
    }
    if(choice== 4){
        //Division
         printf("Enter the first number:");
        scanf("%d",&firstnumber);
        printf("Enter the second number :");
        scanf("%d",&secondnumber);
        int division=firstnumber / secondnumber;
        printf("The division is : %d",division);

    }
    if (choice==5){
        printf("invalid");
    }
    }while (choice!=5);    
      return 0;  /* code */
    
}
