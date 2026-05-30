#include<stdio.h>
#define max 5

int stack[max];
int top=-1;

void push(int value){
    if(top==max-1){
        printf("Stack overflow");
    }
    else{
        top++;
        stack[top]=value;
        printf("%d is pushed into the stack ",value);

    }
}

void pop(){
    if(top==-1){
        printf("Stack underflow");
    }
    else{
        printf("%d popped from the stack ",stack[top]);
        top--;
    }
}

void peek(){
    if(top==-1){
        printf("Stack is empty ");
    }
    else{
        printf("%d is the peek value ", stack[top]);
    }
}

void display(){
    if(top==-1){
        printf("Stack is empty ");
    }
    else{
        printf("Stack elements are: ");
        for(int i=top;i>=0;i--){
            printf("%d ",stack[i]);
        }
    }
}

int main(){
    int choice,value;

    while(1){

    printf("\n\nSTACK MENU.\n ");

    printf("1. push\n");
    printf("2. pop\n");
    printf("3. peek\n");
    printf("4. display\n");
    printf("5. Exit\n");



    printf("Enter your choice: ");
    scanf("%d",&choice);


    switch (choice)
    {
    case 1:
    printf("enter the value to push ");
    scanf("%d",&value);
    push(value);
    break;

    case 2: pop();
    break;

    case 3: peek();
    break;

    case 4: display();
    break;


    case 5: 
    printf("Exiting the program ");
    return 0;
    break;
    
    default:
        break;
    }
}
return 0;
}
