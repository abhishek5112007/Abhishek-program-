#include<stdio.h>
#include<string.h>
int main(){
    char hi[9]="ABHISHEK";
    char na[10];
    char str[50];
    printf("enter a sentence");
    fgets(str,sizeof(str),stdin);
    printf("yOUR NAME: [%s]",str);
    printf("enter your nme");
    scanf(" %9s",&na);
    printf(" %s\n",hi);
    printf(" %5s\n",na);
    for (int i = 0; i < 9; i++){
        if (hi[i]==' ')
        {
        }
        
        printf(" %c\n",hi[i]);

    }
    char  word[]="ABHISHEK IS GOOD BOY";

    for (int i = 0; word[i] != '\0'; i++)
    { 
    
        printf("word[%d]= %c\n",i+1,word[i]);
    }
    
    
}