
#include "CircularArrayQ.h"

CircularArrayQueue create_array_queue(){
    CircularArrayQueue arrQ;
    arrQ.front=-1;
    arrQ.rear=-1;
    return arrQ;
}

void init_array_queue(CircularArrayQueue *list){
    list->front=1;
    list->rear=0;
}

bool enqueue(CircularArrayQueue *list, Type p){
    bool ret=false;
    if(is_full(*list)==false){
        list->rear=(list->rear+1)%MAX;
        list->data[list->rear]=p;
        ret=true;
    }
    return ret;
}

bool dequeue(CircularArrayQueue *list){
    bool ret=false;
    if(is_empty(*list)==false){
        list->front = (list->front+1)%MAX;
        ret=true;
    }
    return ret;
}

bool is_empty(CircularArrayQueue list){
    bool ret=false;
    if((list.rear+1)%MAX == list.front){
        ret=true;
    }
    return ret;
}

bool is_full(CircularArrayQueue list){
    bool ret=false;
    if((list.rear+2)%MAX == list.front){
        ret=true;
    }
    return ret;
}

Type front(CircularArrayQueue list){
    Type ret=list.data[list.front];
    return ret;
}