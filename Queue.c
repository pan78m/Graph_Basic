#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define max 5
int front=-1;
int rear=-1;
int q[max];
void isFull(){
 if (rear==max-1){
       printf("\nQ is full\n");
    }
}
void isEmpty(){

}
void enQ(){
    if (rear==max-1)
    {
       printf("\nQ is full\n");
    }
    else{
        // if (front==rear+1)
        // {
        //           printf("\nQ is full\n"); 
        // }
        // else{
        //     front=0;
        // }
        if (front==-1)
         front=0;
         int v;
         printf("\nwhich value added in Q:\n");
         scanf("%d",&v);
         rear=rear+1; 
         q[rear]=v;
         printf("value add %d->",q[rear]);
        
    }
    
}
void deQ(){
    if (front==-1||front>rear)
    {
       printf("\nQ is Empty");
    }
    else{
       
        printf("deq %d->",q[front]);
        front++; 
    }
    
}
void display(){
    if (rear==-1)
    {
        printf("\nQ if Empty\n");
    }
    else{
        for (int i = front; i <=rear; i++)
        {
            printf("%d->",q[i]);
        }
        printf("\n");
    }
    
}


int main(){
    int n;
    while(1){
        printf("\n1.EnQ\n2.DeQ\n3.Display\n0.Exit\n");
        printf("\nChoice any item:\n");
        scanf("%d",&n);
        switch (n )
        {
        case 1:
             enQ();
            break;
            case 2:
             deQ();
            break;
            case 3:
             display();
            break;
            case 0:
             exit(0);
            break;
        default:
        printf("\nInvalid Choice Again Choice\n");
            break;
        }
    }
}