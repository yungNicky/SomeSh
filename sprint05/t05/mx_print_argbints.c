#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *);
void mx_printchar(char c);
void mx_printint(int n);

int main(int argc, char *argv[]){
	if (argc > 0) {
		for (int i = 1; i < argc; i++){
			int flag = mx_atoi(argv[i]);
			
			for (int j = 31; j >= 0; j--){
				int val = flag >> i;
				if (val & 1) {
					mx_printint(1);
				} else {
					mx_printint(0);
				}
			}
			mx_printchar('\n');
		}
	} 
	return 0;
}
