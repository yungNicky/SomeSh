#include <stdbool.h>
bool mx_isspace(char c){
	if (c == ' ' || c == '\n' || c == '\t' || c == '\v' || c == '\f' || c == '\r') {
		return true; 
	} else {
		return false;
	}
}

int main(){
	int test1 = mx_isspace('s');
	int test2 = mx_isspace(' ');
	int test3 = mx_isspace('\n');
	return 0;
}

