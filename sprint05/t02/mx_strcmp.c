int mx_strcmp (const char *s1, const char *s2);

int mx_strcmp (const char *s1, const char *s2){
	const char *param1 = s1;
	const char *param2 = s2;
	char str1;
	char str2;
	do {
		str1 = *param1++;
		str2 = *param2++;
		if (str1 == '\0') {
			return str1 - str2;
		}
	} while (str1 == str2);
	return str1 - str2;
	
}
