void mx_printchar(char c);
#include "unistd.h"

void mx_only_printable(void){ 
  for(int i = 126; i != 32; i--){ 
    char flag = i;
    write (1, &flag, 1);
  }
  write(1, "\n", 1);
}
