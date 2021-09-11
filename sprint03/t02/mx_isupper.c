#include <stdbool.h>
bool mx_isupper(char c){
	if (c >= 'A' && c <= 'Z') {
		return true; 
	} else {
		return false;
	}
}

int main(){
	int test1 = mx_isupper('A');
	int test2 = mx_isupper('z');
	int test3 = mx_isupper('c');
	return 0;
}


