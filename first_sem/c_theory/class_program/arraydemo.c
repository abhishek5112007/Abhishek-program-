#include<stdio.h>
int main(){
    int sub_marks[5];
    int my_mark[12];//this stament declares array with subject  with size " of "int "type
    // storeing data/array name [index]=data/value
    sub_marks[0]=80;
    sub_marks[1]=78;
    sub_marks[2]=68;
    sub_marks[3]=58;
    sub_marks[4]=88;
    printf("FIRST SUBJEST MARK\t|%d \nSECOND SUBJEST MARK\t|%d \nTHIRD SUBJEST MARK\t|%d\nFORTH SUBJECT MARK\t|%d\nfifth subjest mark\t|%d",sub_marks[0],sub_marks[1],sub_marks[2],sub_marks[3],sub_marks[4]);
 for (size_t i = 0; i < 10 ; i++)
 {printf("enter the %d subject marks:[inr data]",i+1);
    scanf("%d",&my_mark[i]);//stored in first loction 
    my_mark[11]+=my_mark[i];

    
 }

printf("FIRST SUBJEST MARK\t|%d \nSECOND SUBJEST MARK\t|%d \nTHIRD SUBJEST MARK\t|%d\nFORTH SUBJECT MARK\t|%d\nfifth subjest mark\t|%d",my_mark[0],my_mark[1],my_mark[2],my_mark[3],my_mark[4]);
printf("total is %d",my_mark[11]);
}
 
