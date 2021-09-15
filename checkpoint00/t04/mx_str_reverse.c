void mx_str_reverse(char *);

void mx_str_reverse(char *s){
	// Size Of
	int size = 0;
	for (int i = 0; s[i] != '\n'; i++){
		size++;
	}
	//
	int halfSize = size / 2;
	for(int i = 0; i < halfSize; i++){
		char temp = s[i];
		s[i] = s[size-i-1];
		s[size-i-1] = temp;
	}
}
