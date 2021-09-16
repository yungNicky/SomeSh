void mx_printchar(char c);
void mx_printstr(const char *s);
char *mx_strchr(const char *s, int c);
int mx_strlen(const char *s);

int main(int argc, char *argv[]){
	char *fileN = argv[0];
	int cnter = 0;
	
	if (fileN[0] == '/') { 
		fileN--;
	}
	for (int i = 0; fileN[i]; i++) {
		if (fileN[i] == '/') {
			cnter++;
		}
	}
	
	for (int i = 0; i < cnter; i++) {
		fileN = mx_strchr(fileN, '/');
	}
	if (fileN[0] == '/') {
		fileN = mx_strchr(fileN, fileN[1]);
	}
	
	mx_printstr(fileN);
	mx_printchar('\n');
	return 0;
}
