void mx_printchar(char c);
void mx_printstr(const char *s);
int mx_strcmp (const char *s1, const char *s2);
int mx_strlen(const char *s);

int main(int argc, char *argv[]){
	if (argc > 1) {
		for(int i = 0; i < argc; i++){
			for(int j = (i + 1); j < argc; j++){
				if ((mx_strcmp(argv[i], argv[j]) > 0)){
					char *temp = argv[i];
					argv[i] = argv[j];
					argv[j] = temp;
				}
			}
		}
	}
	
	for (int k = 0; k < argc; k++){
		mx_printstr(argv[k]);
		mx_printchar('\n');
	}
	
	return 0;
}
