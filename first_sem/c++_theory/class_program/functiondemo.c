#include<stdio.h> 
int roolnumber,sub1,sub2,sub3,sub4,sub5,total;
float avg,gpa;

void get_total(){
    total=sub1+sub2+sub3+sub4+sub5;
}
void data(){
    printf("enter the rool number");
    scanf("%d",&roolnumber);
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
void get_avg(){
    avg=total/5;

}
void get_cgpa(){
    gpa=avg/9.5;
}
void get_out(){
    printf("your rr no%d \n",roolnumber);
    printf("your total mark%d \n",total);
    printf("your avg % .2f \n",avg);
    printf("your gpa% .2f",gpa);
}
int main(){
    data();
    get_total();
    get_avg();
    get_cgpa();
    get_out();

    
}
