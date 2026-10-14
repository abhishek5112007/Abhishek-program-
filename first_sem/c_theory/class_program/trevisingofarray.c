#include<stdio.h>
int read_array_size(){
    int size;
    printf("\nenter the size of array");
    scanf("%d",&size);
    return size;
}
int checking(int size){
    if (size<=4)
    {return 1;
    }
    if (size>4)
    {
        return 0;
    }
    
}
int input_arr(int size){
    int arr[size];
    for (size_t i = 0; i < size; i++)
    { printf("enter arr %d  value",i+1);
        scanf("%d",&arr[i]);

    } 
       
    for (size_t i = 0; i <size; i++)
    {printf("\nyour arr %d is %d",i+1,arr[i]);
    }
}
int display();
int main(){
for (size_t i = 0; i < i+1; i++)
    {

        int size=read_array_size();
        int m=checking(size);
       if (m==0)
       {input_arr(size);
        break;

        
       }
       printf("your array size is in valuedpls try again\n");

}}
