#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include "reg.h"
#include "consumerData.h"

void reg() {
    struct consumerData *p = (struct consumerData *)malloc(sizeof(struct consumerData));
    printf("\nEnter Name : ");
    scanf("%s",&p->name);
    printf("Enter Conatct: ");
    scanf("%s",&p->contact);
    printf("Enter Password: ");
    scanf("%s",&p->password);

    if(head == NULL){
        head = p;
        p -> loc = NULL;
    }
    else{
        struct consumerData *temp = head;
        while(temp->loc != NULL){
            temp = temp->loc;
        }
        temp->loc = p;
        p->loc = NULL;
    }
    printf("\nRegistered Successfully !\n");
}