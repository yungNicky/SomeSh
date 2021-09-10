int mx_tolower(int c) {
	if (c >= 'A' && c <= 'Z') {
		c += 'a' - 'A'; 
	}
	return c;
}

int main (){
	char a = mx_tolower('A');
	char b = mx_tolower('b');
	char c = mx_tolower('C');
	return 0;
}
