#include "header.h"

int mx_strlen(const char *s){
    int strlen;
    for (strlen = 0; s[strlen] != '\0'; strlen++);
    return strlen;
}

