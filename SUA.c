#include <stdio.h>
#include <stdlib.h>

struct stack{
    int top;
    int size;
    int *arr;
};
//isEmpty
int isEmpty(struct stack *ptr){
    if(ptr->top==-1){
        return 1;
    }
    else{
        return 0;
    }
}
//isFull
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1){
        return 1;
    }
    else{
        return 0;
    }
}
//push
void push(struct stack *sp, int val){
    if(isFull(sp)){
        printf("stack overflow\n");
    }
    else{
        sp->top++;
        sp->arr[sp->top]=val;
    }
}
//pop
int pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("stack underflow");
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i){
    int arrayInd = sp->top-i+1;
    if(arrayInd<0){
        printf("not a valid positin for the stac");
    }
    else{
        return sp->arr[arrayInd];
    }
}

int main() {
    struct stack *sp = (struct stack *) malloc(sizeof(struct stack));
    sp->size=10;
    sp->top=-1;
    sp->arr = (int *) malloc(sp->size * sizeof(int));

    push(sp, 10);
    push(sp, 20);
    push(sp, 30); 
    //printf("popped %d from the stack\n", pop(sp));
    for(int i=1;i<=sp->top+1;i++){
        printf("%d\n", peek(sp, i));
    } 
    return 0;
}
