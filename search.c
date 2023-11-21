#include <stdio.h>
#include <stdlib.h>

#include "search.h"
#include "consumerData.h"
#include "home.h"

#include <string.h>

void search(char name[], char password[]){
    struct consumerData *temp = head;
    while(temp != NULL){
        if(strcmp(name,temp->name)==0 && strcmp(password,temp->password)==0){
            break;
        }
        else{
            temp = temp->loc;
        }
    }
    if(temp == NULL){
        printf("\nYou Need to Register!\n");
    }
    else{
        printf("\nLogin Successfully!\n");
        home();
    }   
}