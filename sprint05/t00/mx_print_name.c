void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
int mx_strlen(const char *s);

int main(int argc, char *argv[]) {
	mx_printstr(argv[0]);
	mx_printchar('\n');
	mx_printstr(argc);
	mx_printchar('\n');
	return 0;
}
