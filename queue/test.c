#include <stdio.h>
#include <string.h>
#include "Exercise1.h"
#include "Person.c"

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

    printf("\nCircArr size [%d]", get_queue_length(list));

    /*********************Problem 2
    
    femaleList=get_all_females(list);

    printf("\nfront [%d]\nrear [%d]\n", list.front, list.rear);
    for(i=0; i<MAX; i++){
        printf("\n%2d ",i);
        displayPersonInfo(list.data[i]);
    }

    printf("\n\nFemale List\n");
        display_LL(femaleList);
        printf("\n");

    **********************/

    /*********************Problem 3
     * **********************/
    printf("\nfront [%d]\nrear [%d]\n", list.front, list.rear);
    for(i=0; i<MAX; i++){
        printf("\n%2d ",i);
        displayPersonInfo(list.data[i]);
    }

    maleList=remove_all_males(&list);

    printf("\nfront [%d]\nrear [%d]\n", list.front, list.rear);
    for(i=0; i<MAX; i++){
        printf("\n%2d ",i);
        displayPersonInfo(list.data[i]);
    }

    display_DAL(maleList);
    

    
    

    // LL testing
    // PersonLinkedList tempList;
    // p=createPerson("horeb", 'm', "cebu");
    // insert_first_LL(&tempList, p);

    // p=createPerson("gab", 'f', "danao");
    // insert_first_LL(&tempList, p);

    // p=createPerson("dyedo", 'f', "mandaw");
    // insert_first_LL(&tempList, p);

    // p=createPerson("stan", 'm', "cebu");
    // insert_first_LL(&tempList, p);
    
    // display_LL(tempList);


    return 0;
} 