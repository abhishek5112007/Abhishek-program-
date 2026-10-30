//input student details 
#include<stdio.h>
struct record
{ int id;
    char name[10];
    int marks[3];
    int total; // to store total mark 
    float  avg;
    float per;
    // all this are structure member 
};
struct record student_list[2];
void inputdata(){
    for (size_t i = 0; i < 2; i++)
    { 
    printf("enter %d student data ",i+1);
    printf("enter the role number");
    scanf("%d",&student_list[i].id);
    printf("enter the student name:");
    scanf("%s",&student_list[i].name);
    for (size_t j = 0; j < 3; j++)
    { printf("enter sub %d marks",j+1);
        scanf("%d",&student_list[i].marks[j]);
    }
    } 

}
void grtotal(){
    for (size_t i = 0; i < 2; i++)
    { student_list[i].total=student_list[i].marks[0]+student_list[i].marks[1]+student_list[i].marks[2];
    }
}
void getavg(){
    for (size_t i = 0; i < 2; i++)
    {student_list[i].avg=student_list[i].total/3;
    }
}
void per(){
    for (size_t i = 0; i < 2; i++)
    {student_list[i].per=student_list[i].total*300/100;
    }

}
void display(){
    printf("\n----------------------------------------------------------------------------------------|");
    printf("\nROLL NO\tNAME\tSUB_MARK1\tSUB_MARK2\tSUB_MARK3\ttotal\tavg\tper");
    printf("\n----------------------------------------------------------------------------------------|");
    for (int i = 0; i < 2; i++)

    {
        printf("\n%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f\t%.2f",student_list[i].id,student_list[i].name,student_list[i].marks[0],student_list[i].marks[1],student_list[i].marks[2],student_list[i].total,student_list[i].avg,student_list[i].per);
        printf("\n----------------------------------------------------------------------------------------|");
    }
    
}
int main(){
     //array of structure
    inputdata();
    grtotal();
    getavg();
    per();
    display();    


    


}