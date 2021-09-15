#include <unistd.h>

void mx_printstr(const char *s){
	int len = 0;
	for (int i = 0; i < 9999; i++){
		if (s[i] == '\0') {
			break;
		} else {
			len++;
		}
	}
	
    write(1, s, len);
}
