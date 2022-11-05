#include<stdio.h>
int queue[100], front =-1, rear=-1, n;
void enqueue(){
    if (rear == (n -1)){
        printf("Queue is full");
    }
    else{
        int num;
        printf("Enter element to be pushed\n");
        scanf("%d",&num);         
        if(front==-1 && rear==-1){
            front=0;
            queue[++rear]= num;
            
        }else{
            queue[++rear]=num;
        }
    }
}

void dequeue(){
    if(front==-1 || front>rear){
        printf("Empty queue");
    }else{
        printf("Item popped is %d",queue[front]);
        if(front== rear){
            front=rear=-1;
        }
        else{
            front++;
        }
        
    }
}
void peek(){
    if(front ==rear){
        printf("Empty queue");
    }else{
        printf("Top element is %d",queue[front]);
    }  
}
void display(){
    if(front ==-1){
        printf("Empty queue");
    }else{
        for(int i =front; i<=rear; i++){
            printf("\n%d",queue[i]);
        }
    }
}
void main(){
    printf("Enter size of queue :");
    scanf("%d",&n);
    printf("1.enqueue\n2.dequeue\n3.peek\n4.display\n");
    int a=1, ch;
    while (a) {
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            enqueue();
            break;
            case 2:
            dequeue();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
        }
        int ch2;
        printf("\nDo you want to continue? ");
        scanf("%d",&ch2);
        if(ch2==0){
            break;
        }
    }


}