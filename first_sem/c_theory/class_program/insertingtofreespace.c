#include<stdio.h>
int main(){
    int n,new,in,a=5;
    printf("enter the array size");
    scanf("%d",&n);
    int arr[n];
    for (size_t i = 0; i < 4;i++)
    { printf("enter the elment%d",i+1);
        scanf("%d",&arr[i]);
        

      }
      printf("enter the new element");
      scanf("%d",&new);
      printf("enter the index");
      scanf("%d",&in);
    while (in==a)
    { arr[a]=arr[a-1];
        a=a-1;
    }
    arr[in]=new;
    for (size_t j = 0; j <n; j++)
    {printf("%d\n",arr[j]);
    }
    
    
}

