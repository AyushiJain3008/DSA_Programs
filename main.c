#include<stdio.h>
#include<stdbool.h>
int top=-1;
void push(int element,int stack[],int n)
{
    if(top==n-1)
    {
        printf("STACK OVERFLOW\n");
        return;
    }
    top=top+1;
    stack[top]=element;
}
int pop(int stack[])
{
    if(top==-1)
    {
        printf("STACK UNDERFLOW\n");
        return -1;
    }
    int val=stack[top];
    top--;
    return val;
}
bool isEmpty(int stack[])
{
    if(top==-1)
        return true;
    else
        return false;
}
int size(int stack[])
{
    return top+1;
}
void print(int stack[])
{
    for(int i=0;i<=top;i++)
        printf("%d ",stack[i]);
}
int main(void)
{
    int n,ch,ele,ans;
    bool a;
    printf("Enter size\n");
    scanf("%d",&n);
    int *stack=(int *)malloc(*sizeof(int));
    printf("Press:\n0.To Exit\n1.To Push\n2.To Pop\n3.To Check stack is Empty\n4.To Check size of stack\n5.To Print\n");
    printf("Enter the choice\n");
    scanf("%d",&ch);
    while(ch!=0)
    {
        
        switch(ch)
        {
            case 1:
                printf("ENTER THE ELEMENT TO PUSH\n");
                scanf("%d",&ele);
                push(ele,stack,n);
                break;
            case 2:
                ans=pop(stack);
                if(ans!=-1)
                printf("Popped value is: %d\n",ans);
                break;
            case 3:
                a=isEmpty(stack);
                if(a==true)
                    printf("TRUE\n");
                else
                    printf("FALSE\n");
                break;
            case 4:
                printf("The size of Stack is: %d\n",size(stack));
                break;
            case 5:
                print(stack);
                printf("\n");
                break;
            default:
                printf("Invalid choice\n");
                
        }
        printf("Enter the choice\n");
        scanf("%d",&ch);
    }
}
