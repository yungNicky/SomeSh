void mx_printchar(char c);
void mx_printint(int);

void mx_printint(int n) {
	int temp = n ;
	if(temp < 0) {
    temp + temp * -1;
	}

	if(temp > 10) {
		mx_printint(temp / 10);
	}
    mx_printchar((temp % 10) + 48);
}
