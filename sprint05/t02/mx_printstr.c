#include <stdio.h>
#include <unistd.h>

void mx_printstr(const char *s){
    int i = mx_strlen(s);
    write(1, s, i);
}
