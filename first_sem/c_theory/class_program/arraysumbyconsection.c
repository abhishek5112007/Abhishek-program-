#include<stdio.h>
int get_array_sum(int number[],int n){
    if (n==0)
    {
        return 0;
    }
    
    
    return number[n-1]+get_array_sum(number,n-1);

}
int display(int num[],int sum){
    printf ("the sum of array  is%d",sum);
}

int main(){
    int n=5;
    int mynumber[n];
    for (int i = 0; i < 5; i++)
    {printf("enter the %d number",i+1);
        scanf("%d",&mynumber[i]);
    }
    int sum=get_array_sum(mynumber,n);
    display(mynumber,sum);
}