#include<stdio.h>
int rollno,maths_marks,eng_marks,python_marks,c_marks,french_marks,sum;
float average,CGPA;
void getstudentdata(){
    printf("enter rollnumber");
    scanf("%d",&rollno);
}
void getTotal(){
    sum=maths_marks+eng_marks+python_marks,c_marks,french_marks;
    printf("enter maths marks:");
    scanf("%d",maths_marks);
    printf("enter eng_marks:");
    scanf("%d",eng_marks);
    printf("enter python marks: ");
    scanf("%d",python_marks);
    printf("enter c_marks:");
    scanf("%d",c_marks);
    printf("enter french marks: ");
    scanf("%d",french_marks);
    return sum;
}
void getaverage(){
    average=sum/2;
    printf("average is %.2f",average);
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