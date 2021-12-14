#include <stdio.h>
#include <stdlib.h>

//stack definition
typedef struct{
    int pointer;
    int size;
    int * num;
}Stack;

//function to initialize a stack
void stackInit(Stack * s1,int capacity) {
    s1->pointer = -1;
    s1->size = capacity;
    s1->num = (int *) malloc(capacity * sizeof(int));
}

//function to check wheather the stack is empty or not
int isEmpty(Stack * s1) {
    if(s1->pointer == -1)
        return 1;
    else
        return 0;
}

//function to check if the stack is full or not
int isFull(Stack * s1) {
    if(s1->pointer == s1->size-1)
        return 1;
    else
        return 0;
}

//function to push an item onto the stack
void push(Stack * s1,int item) {
    if(isFull(s1)) {
        printf("Stack Overflow\n");
    }
    else {
        s1->pointer++;
        s1->num[s1->pointer] = item;
    }
}

//function to pop an item of the stack
int pop(Stack * s1) {
    if(isEmpty(s1)) {
        printf("Stack underflow\n");
        return 0;
    }
    else {
        int temp = s1->num[s1->pointer];
        s1->pointer--;
        return temp;
    }
}

//function to free the memory occupied by the stack in storing values
void stackFree(Stack * s1) {
    free(s1->num);
}

void printStack(Stack * s1) {
    for(int i=0;i <= s1->pointer;i++) {
        printf("%d ",s1->num[i]);
    }
    printf("\n");
}

//sample stack
int main() {
    Stack s1;
    Stack * s1Pointer = &s1;
    int size;
    printf("ENTER THE SIZE OF THE STACK\n");
    scanf("%d",&size);
    stackInit(s1Pointer,size);
    push(s1Pointer,1);
    push(s1Pointer,2);
    printStack(s1Pointer);
    pop(s1Pointer);
    printStack(s1Pointer);
    return 0;
}