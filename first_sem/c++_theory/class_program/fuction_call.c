#include<stdio.h>

int sub1,sub2,sub3,sub4,sub5,total;
float avg,gpa;

int get_total(){
    total=sub1+sub2+sub3+sub4+sub5;
    return total;
}

void data(){

    printf("enter 1 marks");
    scanf("%d",&sub1);
    printf("enter 2 marks");
    scanf("%d",&sub2);
    printf("enter 3 marks");
    scanf("%d",&sub3);
    printf("enter 4 marks");
    scanf("%d",&sub4);
    printf("enter 5 marks");
    scanf("%d",&sub5);
}
float get_avg(){
    avg=total/5;
    return avg;

}
float get_cgpa(){
    gpa=avg/9.5;
    return gpa;
}
int main(){
    data();
    int total=get_total();
    float avg=get_avg();
    float gpa=get_cgpa();
    printf("your total mark%d \n",total);
    printf("your avg % .2f \n",avg);
    printf("your gpa% .2f",gpa);

    
}
