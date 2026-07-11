#include <stdlib.h>
#include <stdbool.h>

#define SIZE 100
typedef struct 
{
    int data[SIZE];
    int front;
    int rear;
    int count;
    
} MyQueue;


MyQueue* myQueueCreate() 
{
    MyQueue* obj = malloc(sizeof(MyQueue));
    if(obj==NULL)
    {
        return NULL;
    }

    obj->front = 0;
    obj->rear = -1;
    obj->count = 0;

    return obj;
}

void myQueuePush(MyQueue* obj, int x) 
{
    if(obj->count==SIZE)
    return;

    obj->rear=(obj->rear+1) % SIZE;

    obj->data[obj->rear] = x;
    
    obj->count++;
}

int myQueuePop(MyQueue* obj) 
{
    if(obj->count == 0)
        return -1;

    int val = obj->data[obj->front];

    obj->front = (obj->front + 1) % SIZE;

    obj->count--;

    return val;
    
}

int myQueuePeek(MyQueue* obj) 
{
    if(obj->count == 0)
        return -1;

    return obj->data[obj->front];
    
}

bool myQueueEmpty(MyQueue* obj) 
{
    return (obj->count==0);
}

void myQueueFree(MyQueue* obj) 
{
    free(obj);
    
}

/**
 * Your MyQueue struct will be instantiated and called as such:
 * MyQueue* obj = myQueueCreate();
 * myQueuePush(obj, x);
 
 * int param_2 = myQueuePop(obj);
 
 * int param_3 = myQueuePeek(obj);
 
 * bool param_4 = myQueueEmpty(obj);
 
 * myQueueFree(obj);
*/