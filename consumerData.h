#include <string.h>

struct consumerData{
    char name[20];
    char contact[20];
    char password[20];
    struct consumerData *loc;
};

extern struct consumerData *head;