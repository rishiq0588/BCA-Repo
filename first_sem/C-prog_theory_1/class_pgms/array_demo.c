//Pgm to store and display 5 subject mark
#include<stdio.h>
int main(){
    int my_marks[5];
    int sub_marks[5]; //declares an array 'sub_marks' 
    //with SIZE 5 of 'int' type
    //Storing data/Array initialization - array_name[index]=data/value;
    sub_marks[0]=80; //stores'80' in an array position whose index is '0'
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;  //static array initialization
    // Fetch first array element from 'sub_marks'
    printf("First  subject mark: %d\n",sub_marks[0]);
    printf("second subject mark: %d\n",sub_marks[1]);
    printf("third  subject mark: %d\n",sub_marks[2]);
    printf("fourth subject mark: %d\n",sub_marks[3]);
    printf("fifth  subject mark: %d\n",sub_marks[4]);
    //dynamic initialization of 'my_marks'
    for(int i=0;i<5;i++){
    printf("Enter %d subject marks:[int data]",i+1);
    scanf("%d",&my_marks[i]);  //stored in 1st location
    
    printf("Enter second subject marks:[int data]");
    scanf("%d",&my_marks[1]);  //stored in 2nd location
     
    printf("Enter third subject marks:[int data]");
    scanf("%d",&my_marks[2]);  //stored in 3rd location
    
    printf("Enter fourth subject marks:[int data]");
    scanf("%d",&my_marks[3]);  //stored in 4th location
    printf("Enter fifth subject marks:[int data]");
    scanf("%d",&my_marks[4]);  //stored in 5th location
    }
    printf("My sub1 mark: %d\n",my_marks[0]);
    printf("My sub2 mark: %d\n",my_marks[1]);
    printf("My sub3 mark: %d\n",my_marks[2]);
    printf("My sub4 mark: %d\n",my_marks[3]);
    printf("My sub5 mark: %d\n",my_marks[4]);
    

    return 0;
    
}