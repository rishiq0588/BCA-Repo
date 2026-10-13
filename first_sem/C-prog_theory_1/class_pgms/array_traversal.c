#include<stdio.h>
int main(){ 
    int isValid=1;
    int validated;
 //calling method &stores returned value
//passing 'arraysize';int array_size=arraysize
while (isValid==1);
{
   printf("array size should be more than 4\n");
   int arraysize = read_array_size(); 
   int isValid=validate_array_size(arraysize);
   if(validated ==0){


   }
   printf("Pls try again..");

   }
}

//read array SIZE from KB
int read_array_size(){
    int size;  //local variable
    printf("Enter the array size[>4]");
    scanf("%d",&size);
    return size;
}

int validate_array_size(int array_size){
    if(array_size>4){
        return 1;

    }
    return 0;
    
}