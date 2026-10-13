#include<stdio.h>

int main(){
    char name[5][30];
    int roll[5];
     int marks[5][5];
    for (int i = 0; i < 5; i++)
    {
      printf("student %d",i+1);
        input_info(name,roll);
    }
    printf(" %s",name);
}
void input_info(char name[],int roll[]){
    for (int i = 0; i <5; i++)
    {("enter the student %d details",i+1);
    printf("enter the name");
    scanf("%d",&name[i]);
    printf("enter the roll number");
    scanf("%d",&roll[i]);
    }
    }


