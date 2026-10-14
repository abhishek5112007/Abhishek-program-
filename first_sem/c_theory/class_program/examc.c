#include <stdio.h>
int main()
{
    int num,rn,category, nn = 100, nm = 200;
    int ab;
    printf("enter the numberb of students");
    scanf("%d",&num);
    for (size_t i = 1; i <= num; i++)
    {
        printf("\n-----student%d----", i);
        printf("\nenter the rool number");
        scanf("%d", &rn);
        printf("enter the category(regular=1,backlogs=2)");
        scanf("%d", &category);
        ab=rn%2;
        if (category == 1)
        {
            nn = nn + 1;
            if (ab==0)
            {
            printf("Roll No:%d, Category: %d, Seat No:%d, Hall: B", rn, category, nn);
            }
            else
            
            {
            printf("Roll No:%d, Category: %d, Seat No:%d, Hall: A", rn, category, nn);
            }
        }
        else
        {
            nm = nm + 1;
            if (ab==0)
            {
            printf("Roll No:%d, Category: %d, Seat No:%d, Hall: B", rn, category, nm);
            }
            else
            {
            printf("Roll No:%d, Category: %d, Seat No:%d, Hall: A", rn, category, nm);
            }
        }
    }
}