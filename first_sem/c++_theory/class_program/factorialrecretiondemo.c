#include<stdio.h>
int input(){
    int n;
    printf("enter the factorial number ");
    scanf("%d",&n);
    return n;

}
int factorial(int n){
    if (n==0)
    { return 1;

    }
    return n*factorial(n-1);
    


}
int main(){
    int n=input();
    int result=factorial(n);
    printf("%d",result);
}