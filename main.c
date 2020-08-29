#include <stdio.h>
#define N 5
int queue[N];
int front=-1;
int rear=-1;

void enqueue(){
        int x,i=0;
        while(i<N){
        printf("Enter no");
        scanf("%d",&x);
        if(rear == N-1){
                printf("Overflow");
        }
        else if(front == -1 && rear == -1){
                front=rear=0;
                queue[rear]=x;
        }
        else{
             rear++;
             queue[rear]=x;   
        }
        i++;
        }
}
void dequeue(){
        if(front==-1 && rear==-1){
                printf("Underflow");
        }
        else if(front==rear){
                front=rear=-1;
        }
        else{
                front++;
        }
}
void show(){
        printf("front=%d rear=%d",front,rear);
        if(front==-1 && rear==-1){
                printf("empty");
        }
        int i=0;
        for(i=front;i<rear+1;i++){
                printf("\ni=%d\n",i);
                printf("%d",queue[i]);
                
        }
}

void peek(){
    if(front==-1 && rear==-1){
                printf("empty");
        }
else{
        printf("%d",queue[front]);
}    
}
int main() {
  enqueue();
  dequeue();
  printf("After deleting");
  show();
  return 0;
}