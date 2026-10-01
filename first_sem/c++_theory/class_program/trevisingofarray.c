#include<stdio.h>
int read_array_size(){
    int size;
    printf("enter the size of array");
    scanf("%d",&size);
    return size;
}
int checking(size){
    int n;
    if (size>4)
    {return 1;
    }
    return 0;
}
void input_arr(size){
    int arr[size];
    for (size_t i = 0; i < size-1; i++)
    { printf("enter arr %d  value",i+1);
        scanf("%d",&arr[i]);

    }    
    for (size_t i = 0; i < size; i++)
    {printf("your arr %d is %d",i,arr[i]);
    }
    
}

int main(){
int n;
for (size_t i = 0; i < n; i++)
    {read_array_size();
    int m=checking(read_array_size());
    if (m=0)
    {printf("array size if not valued");
    
     }
     else
     {
        break;
     }
     }
inputar(read_array_size());
}
