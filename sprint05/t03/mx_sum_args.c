#include "stdbool.h"

bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *);
void mx_printchar(char c);
void mx_printint(int);

int main(int argc, char *argv[]){
	if (argc > 2) {
		int flag = 0;
		int sum = 0;
		for (int i = 0; i < argc; i++){
			for (int j = 0; argv[i][j]; j++) {
				if ((!mx_isdigit(argv[i][j])) && argv[i][j] != '+' && argv[i][j] != '-') {
					flag = 1;
				}
			}
			if (flag = 1) {
				continue;
			}
			sum += mx_atoi(argv[i]);
		}
		mx_printint(sum);
		mx_printchar('\n');
	} else {
		return 0;
	}
	
	return 0;
}
