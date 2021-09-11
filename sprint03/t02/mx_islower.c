#include <stdbool.h>
bool mx_islower(char c){
	if (c >= 'a' && c <= 'z') {
		return true; 
	} else {
		return false;
	}
}

int main(){
	int test1 = mx_islower('A');
	int test2 = mx_islower('z');
	int test3 = mx_islower('c');
	return 0;
}


