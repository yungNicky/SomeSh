#include <stdio.h>
int mx_strlen(const char *s);

int main(){
  const char message[50] = "Sleep";
  int flagSize = mx_strlen(message);
  printf("Message: %s , len: %d", message, flagSize);
  return 0;
}

int mx_strlen(const char *s) {
  int i;
  for (i = 0; s[i] !=  '\0'; i++);
  return i;
}
