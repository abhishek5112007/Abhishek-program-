#include<stdio.h>
int main(){
    int x=10; // interger variable x which stores the value 10 
    int *p; //declares a pointer of data type interger 
    p=&x; // inicials the adress of variable x

    printf("%d",x); //prints the value of x
    printf("\n%p",&x); //print the adress of x
    printf("\n%p",p); //print the content of p 


}