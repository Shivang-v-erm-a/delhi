#include "del.h"
#include "consumerData.h"

#include <string.h>

void del(char delConsumer[]){
    struct consumerData *temp = head;
    struct consumerData *prev = NULL;

    while(temp!=NULL && strcmp(temp->name,delConsumer)!=0){
        prev = temp;
        temp = temp->loc;
    }

    if(temp==NULL){
        printf("\nConsumer not Found\n");
        return;
    }
    if(prev==NULL){
        head = temp->loc;
    }
    else{
        prev->loc = temp->loc;
    }
    free(temp);
    printf("\nConsumer %s is Deleted Successfully !\n",delConsumer);
}