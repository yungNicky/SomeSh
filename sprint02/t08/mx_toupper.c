int mx_toupper(int c) {
	if (c >= 'a' && c <= 'z') {
		c += 'A' - 'a'; 
	}
	return c;
}

int main (){
	char a = mx_toupper('a');
	char b = mx_toupper('B');
	char c = mx_toupper('c');
	return 0;
}
