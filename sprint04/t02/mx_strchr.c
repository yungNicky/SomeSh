// char *mx_strchr(const char *, int);
char *mx_strchr(const char *s, int c){
		// where *s - string .. c - symbol
		do {
			if (*s == c) {
				return (char*)s;
			}
		} while (*s++);
	return 0; 
}
