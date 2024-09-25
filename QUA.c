#include <stdio.h>
#include <stdlib.h>
struct queue{
    int size;
    int f;
    int r;
    int* arr;
};

int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    else{ 
        return 0;
    }
}
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r++;
        q->arr[q->r]=val;
    }
}

int dequeue(struct queue *q){   
if(isEmpty(q)){
    printf("This Queue is Empty");
}
else{
    q->f++;
    return q->arr[q->f];
}
} 
int main() {
    struct queue *q = (struct queue *) malloc(sizeof(struct queue));
    q->size=100;
    q->f=q->r=-1;
    q->arr = (int *) malloc(q->size*sizeof(int));
    enqueue(q, 10);
    enqueue(q, 20);
    printf("%d\n", dequeue(q));
    return 0;
}
