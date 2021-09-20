#include <stdio.h>
#include <string.h>
#include "Exercise1.c"
#include "Person.c"
#include "CircularArrayQ.c"

int main(void) 
{
    Person p;
    bool ret;
    int i;

    PersonDynamicArrayList maleList;
    PersonLinkedList femaleList;
    CircularArrayQueue list;

    list=create_array_queue();
    init_array_queue(&list);
    
    p=createPerson("horeb", 'm', "cebu");
    ret=enqueue(&list, p);

    p=createPerson("gab", 'f', "danao");
    ret=enqueue(&list, p);

    p=createPerson("dyedo", 'm', "mandaw");
    ret=enqueue(&list, p);

    p=createPerson("daina", 'm', "mandaw");
    ret=enqueue(&list, p);
    
// Problem 1

//     printf("\nCircArr size [%d]", get_queue_length(list));


// Problem 2

    // femaleList=get_all_females(list);

    // printf("\nfront [%d]\nrear [%d]\n", list.front, list.rear);
    // for(i=0; i<MAX; i++){
    //     printf("\n%2d ",i);
    //     displayPersonInfo(list.data[i]);
    // }

    // printf("\n\nFemale List\n");
    //     display_LL(femaleList);
    //     printf("\n");



    
// Problem 3
     
    // maleList=remove_all_males(&list);

    // printf("\nfront [%d]\nrear [%d]\n", list.front, list.rear);
    // for(i=0; i<MAX; i++){
    //     printf("\n%2d ",i);
    //     displayPersonInfo(list.data[i]);
    // }

    // display_DAL(maleList);

  


    return 0;
} 