#include <stdio.h>

void input_info(char name[][20], int roll[], int marks[][5],int n);
int total(int marks[],int n);
float percentage(int total);
int result(int marks[]);
void display(char name[][20], int roll[], int marks[][5],int n);

int main()
{
    int n;
    printf("enter number of students");
    scanf("%d",&n);
    char name[n][20];
    int roll[n];
    int marks[n][5];

    input_info(name, roll, marks,n);
    display(name, roll, marks,n);

    return 0;
}

void input_info(char name[][20], int roll[], int marks[][5],int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter Student %d Details\n", i + 1);

        printf("Enter Name: ");
        scanf("%s", name[i]);

        printf("Enter Roll Number: ");
        scanf("%d", &roll[i]);

        printf("Enter 5 Subject Marks:\n");

        for(int j = 0; j < 5; j++)
        {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
}

int total(int marks[],int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += marks[i];
    }

    return sum;
}

float percentage(int total)
{
    return total / 5.0;
}

int result(int marks[])
{
    for(int i = 0; i < 5; i++)
    {
        if(marks[i] < 35)
        {
            return 0;   // Fail
        }
    }

    return 1;   // Pass
}

void display(char name[][20], int roll[], int marks[][5],int n)
{
    printf("\n\n----- STUDENT REPORT -----\n");

    for(int i = 0; i < n; i++)
    {
        int t = total(marks[i],n);
        float p = percentage(t);
        int r=result(marks[i]);

        printf("\nStudent %d\n", i + 1);
        printf("Name : %s\n", name[i]);
        printf("Roll No : %d\n", roll[i]);
        printf("Total : %d\n", t);
        printf("Percentage : %.2f\n", p);

        if(r==1){
            printf("Result : PASS\n");
        }
        else{
            printf("Result : FAIL\n");
    }
}}