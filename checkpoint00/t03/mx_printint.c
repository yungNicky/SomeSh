#include "unistd.h"
void mx_printint(int);

void mx_printint(int n) {
	char temp[12]={0x0};
	sprintf(temp,"%11d", n);
	write(1, temp, sizeof(temp));
}
