#include<stdio.h>
int get_array_sum(int number[]){
    int sum;
    for (size_t i = 0; i < 5; i++)
    {sum+=number[i];

    }
    return sum; 

}
int display(int num[],int sum){
    printf ("the sum of array  is%d",sum);
}

int main(){
    int mynumber[5];
    for (int i = 0; i < 5; i++)
    {printf("enter the %d number",i+1);
        scanf("%d",&mynumber[i]);
    }
    int sum=get_array_sum(mynumber);
    display(mynumber,sum);
}