#ifndef EXERCISE1_H
#define EXERCISE1_H

#include <stdlib.h>
#include "CircularArrayQ.h"

/** \fn int get_queue_length(CircularArrayQueue list);
 *  \brief Get the number of elements in the current queue.
 *  \param list The current queue.
*/
int get_queue_length(CircularArrayQueue list);

int get_queue_length(CircularArrayQueue list){
    int size;
    return size = (list.rear>list.front)? (list.rear-list.front)+1 : MAX+1-(list.front-list.rear);
}

/** \fn PersonLinkedList get_all_females(CircularArrayQueue list);
 *  \brief Returns all females as a linked list using the current list without removing them in the current list.
 *  \param list The current queue.
 *  Note: Use the queue basic operations (enqueue, dequeue, front)
*/
PersonLinkedList get_all_females(CircularArrayQueue list);

PersonLinkedList get_all_females(CircularArrayQueue list){
    PersonLinkedList femaleList=NULL, tempPersonNode;
    Person frontSaved;
    int temp=list.rear;
    printf("\ntemp = %d",temp);
    while(list.front!=temp){
        frontSaved=front(list);
        if(frontSaved.sex=='f'){
            tempPersonNode=malloc(sizeof(PersonNode));
            if(tempPersonNode!=NULL){
                tempPersonNode->elem=frontSaved;
                tempPersonNode->next=femaleList;
                femaleList=tempPersonNode;
            }
        }
        dequeue(&list);
        enqueue(&list, frontSaved);
    }
    return femaleList;
}

/** \fn PersonDynamicArrayList remove_all_males(CircularArrayQueue *list);
 *  \brief Remove all males in the current list and returns the removed males as a dynamic array list.
 *  \param list The current queue.
 *  Note: Use the concept of queue with out using the basic operations.
*/


PersonDynamicArrayList remove_all_males(CircularArrayQueue *list);



PersonDynamicArrayList remove_all_males(CircularArrayQueue *list){
    Person frontSaved;
    int i=0;
    PersonDynamicArrayList newMaleList;
    init_DAL(&newMaleList);
    int temp=list->rear;
    while((list->front+1)%MAX!=temp){
        frontSaved=list->data[list->front];//save front
        printf("\n%d %d\n",list->front, list->rear);
        if(frontSaved.sex=='m'){
            newMaleList.data[i]=frontSaved;
            i++;
            
        }else{
            list->rear=(list->rear+1)%MAX;//move rear
            list->data[list->rear]=frontSaved;//copy saved to rear
        }
        list->front=(list->front+1)%MAX;//move front
    }
    return newMaleList;
}

#endif 