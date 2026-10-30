int stack[5];
int top=-1;
void push(newdata){
    if (top==5-1)
    {printf("overflow your stack is full");
    }
    else
    { top++;
        newdata=stack[top];
    }
    
    
}
void pop(){
    if (top==-1)
    {printf("underfloe your stack is empty");
    }
    else
    {scanf("%d",&stack[top]);
        top--;
    }

}
void display(){
    printf("your stack is ",stack);

}
int main(){
    int choice=0;
    while (choice<=4)
    {printf("enter ur choice\n1.push\n2.pop\n3.display\n4.exit");
        scanf("%d\n",&choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        
        case 2:
        pop();
            break;
        case 3:
        display;
            break;    
        }
    } 
    


}