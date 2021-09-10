#include <stdbool.h>
bool mx_isdigit(int c){
	if (c >= 0 && c <= 9) {
		return true; 
	} else {
		return false;
	}
}

int main(){
	int test1 = mx_isdigit(2);
	int test2 = mx_isdigit(10);
	int test3 = mx_isdigit(9);
	return 0;
}
