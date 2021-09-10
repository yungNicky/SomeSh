#include "mx_strlen.c"
#include <unistd.h>
void mx_printstr(const char *s);

int main(){ 
  mx_printstr("Sleeeep");
  return 0;
}

void mx_printstr(const char *s) {
  int strlen = mx_strlen(s);
  for (int i = 0; i < strlen; i++) {
    write(1, s, 1);
    s++;
  }
}
