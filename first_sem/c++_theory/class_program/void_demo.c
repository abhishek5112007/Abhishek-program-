#include <stdio.h>

void addition(int first,int second){
    int sum;
    sum=first+second;
    printf("sum is %d",sum);
}
int main(){
    addition(50,120);
    addition(500,455);
    return 0;
}