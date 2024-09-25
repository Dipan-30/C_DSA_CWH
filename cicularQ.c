#include <stdio.h>
#include <stdlib.h>
struct circularQueue{
    int size;
    int f;
    int r;
    int* arr;  
};

int isEmpty(struct circularQueue *q){
    if(q->r==q->f){
        return 1;
    }
    else{ 
        return 0;
    }
}
int isFull(struct circularQueue *q){
    if((q->r+1)%q->size==q->f){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->r=(q->r+1)%q->size;
        q->arr[q->r]=val;
    }
}

int dequeue(struct circularQueue *q){   
if(isEmpty(q)){
    printf("This Queue is Empty");
}
else{
    q->f = (q->f+1)%q->size;
    return q->arr[q->f];
}
} 
int main() {
    struct circularQueue *q = (struct circularQueue *) malloc(sizeof(struct circularQueue));
    q->size=3;
    q->f=q->r=0;
    q->arr = (int *) malloc(q->size*sizeof(int));
    enqueue(q, 10);
    enqueue(q, 11);
    dequeue(q);
    dequeue(q);
    enqueue(q, 20);
    enqueue(q, 30);

    
    return 0;
}
