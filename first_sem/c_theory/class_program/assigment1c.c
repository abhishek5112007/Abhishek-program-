#include<stdio.h>
int main(){
    int n,catagory,regular=0,primeum=0,recliner=0,price=0,finalprice; 
    printf(" enter the number of tickets:");
    scanf("%d",&n);
    for (size_t i = 1; i <= n; i++)
    { printf("Enter category for ticket %d (1/2/3)",i);
        scanf("%d",&catagory);
        if (catagory==1)
        { price=price+150;
            regular++;
        }
        else if (catagory==2)
        {price=price+250;
            primeum++;
            
        }
        else if (catagory==3)
        {price=price+400;
            recliner++;
            
        }
        else
        {
            printf("invalid category\n");
        }
        
    }
    printf("-------final bill------\n");
    printf("regular ticket:%d\n",regular);
    printf("premium tickets:%d\n",primeum);
    printf("recliner tickrets:%d\n",recliner);
    printf("final bill(before discount) =%d\n",price);
    finalprice=price;
    if (n>=5)
    { printf("discount applied=yes\n");
        printf("final amount=%d",finalprice-price*10/100);
    }
    else
    {printf("discount applied=no\n");
        printf("final amount=%d",price);
    
    }
    
    
}