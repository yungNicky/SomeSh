int mx_strlen(const char *s);
char *mx_strcat(char *, const char *);

char *mx_strcat(char *s1, const char *s2){
	char *temp = s1 + mx_strlen(s2);
	while (*s2 != '\0') {
		*temp++ = *s2++;
	}
	*temp = '\0';
	return s1;
}
