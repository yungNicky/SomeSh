int mx_strlen(const char *);
void mx_swap_char(char *, char *);
void mx_str_reverse(char *);

void mx_str_reverse(char *s){
	int size = mx_strlen(s);
	int halfSize = size / 2;
	for(int i = 0; i < halfSize; i++){
		mx_swap_char(&s[i], &s[size-i-1]);
	}
}
