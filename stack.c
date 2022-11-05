#include<stdio.h>
int stack[100], top =-1, n;
void push(){
    if (top == (n -1)){
        printf("Stack overflow");
    }
    else{
        int num;
        printf("Enter element to be pushed\n");
        scanf("%d",&num);
        stack[++top]= num;   
    }
}

void pop(){
    if(top == -1){
        printf("Empty stack");
    }else{
        printf("Item popped is %d",stack[top]);
        top--;
    }
}
void peek(){
    if(top == -1){
        printf("Empty stack");
    }else{
        printf("Top element is %d",stack[top]);
    }  
}
void display(){
    if(top ==-1){
        printf("Empty stack");
    }else{
        for(int i =0; i<=top; i++){
            printf("\n%d",stack[i]);
        }
    }
}
void main(){
    printf("Enter size of stack :");
    scanf("%d",&n);
    printf("1.push\n2.pop\n3.peek\n4.display\n");
    int a=1, ch;
    while (a) {
        printf("Enter choice\n");
        scanf("%d",&ch);
        switch(ch){
            case 1:
            push();
            break;
            case 2:
            pop();
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