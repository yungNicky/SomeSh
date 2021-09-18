#include <stdio.h>
#include <unistd.h>

int mx_strlen(const char *);

int mx_strlen(const char *s){
    int strlen;
    for (strlen = 0; s[strlen] != '\0'; strlen++);
    return strlen;
}

