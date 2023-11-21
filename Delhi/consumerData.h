#include <string.h>

extern struct consumerData{
    char name[20];
    char contact[11];
    char password[20];
    struct consumerData *loc;
};

extern struct consumerData *head;