#include <stdio.h>
#define max 3
// queue
int queue[max];
int f=-1, r=-1;
// stack
int stack[max];
int top =-1;
// enqueue
void enqueue(int value)
{
    if ( r == max-1)
    {
        printf("overflw and exist");
        return;
    }
    else 
    {
        if ( f == -1)
        {
            f =0;
        }
        r++ ;
        queue[r] = value;
    }
}
// dequeue
int dequeue(int value)
{
    if ( f== -1 && r== -1)
    {
        printf(" underflw and exist");
        returnn -1;
    }
    value = queue[f];

    if ( f== r)
        {
            f =-1;
             r=-1;

        }
        else{
            f++ ;
        }
        
        
        return value;
    }


// push
void push(int value)
{
    if ( top == max -1)
    {
        printf (" stcak is full");
        return;

    }
    else 
    {
        top ++ ;
        stack[top] = value;
    }
}
// pop
int pop()
{
    if ( top == -1)
    {
        printf(" stcak is empty");
        return -1;
    }
    return stack[top--];
}
// reverse
void reverse()
{
    int value;
     // q<- s
     while( f!= -1)
     {
        value = dequeue();
        push(value);
     }
     // s<- q
     while(top != -1)
     {
        value = pop();
        enqueue(value);
     }
}
// display
void display()
{
    int i ;
    if ( f == -1)
    {
        printf("stcak is empty");
        return ;

    }
    else{
        for( i =f ; i<=r ; i++)
        {
            printf("%d",  queue[i]);
        }
        printf("\n");

    }
}
// main
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    printf("originl queue");
    display();
    reverse();
    printf(" reversed queue");
    display();
    return 0;
}