#include<stdio.h>
int main(){
    int n,ns,num,sum,summ;
    printf("enter the value for n");
    scanf("%d",&n);
    if (n>5)
    { for (int i = 5; i< n; i++)
    {  ns=i-1;
        num=ns+i;
    }printf("%d",num);
    }
    else
    {
        printf("not valued number");
    }
    
    
    
    
}