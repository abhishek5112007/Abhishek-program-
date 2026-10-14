#include <stdio.h>
int main()
{
    int num,rn,category, nn = 100, nm = 200,ab;
    char class;
    printf("enter the numberb of students");
    scanf("%d", &num);
    for (size_t i = 1; i <= num; i++)
    {
        printf("\n-----student%d----", i);
        printf("\nenter the rool number");
        scanf("%d", &rn);
        printf("enter the category(regular=1,backlogs=2)");
        scanf("%d", &category);
        ab = rn%2;
        if (rn==0)
        {printf("a");
        }
        else
        {
            printf("b");
        }
        

    
    
    
    }}