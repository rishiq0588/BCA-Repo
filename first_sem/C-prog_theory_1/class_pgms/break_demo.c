#include<stdio.h>
int main(){
    for(int j=0;j<=2;j++){
        printf("Loop started");
        for(int i=0;i<5;i++){
        printf("Inner loop started");
        break;
        printf("From inner loop");

        }
        printf("From outer loop");
        break;
   }

   printf("Program terminated..");
}