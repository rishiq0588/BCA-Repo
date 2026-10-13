#include<stdio.h>
int rollno,maths_marks,eng_marks,sum;
float average,CGPA;
void getstudentdata(){
    printf("enter rollnumber");
    scanf("%d",&rollno);
}
void getTotal(){
    sum=maths_marks+eng_marks;
}
void getaverage(){
    average=sum/2;
}
void displayStudentDetails(){
    printf("rollno: %d",rollno);
}

int main(){
    int getstudentdata;
    float getTotal;
    float getaverage;
    float CGPA;
    printf("enter the total marks: ");
    scanf("%f",&getTotal);
    getaverage = getTotal / getstudentdata;
    CGPA = getaverage / 10;
    printf("the CGPA is: %.2f",CGPA);
    return 0;
}