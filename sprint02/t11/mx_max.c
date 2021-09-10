int mx_max(int a, int b, int c) {
	int max = 0;
	if(a > b && a > c){ 
		max = a;
	}
	if(b > a && b > c){ 
		max = b;
	}
	if(c > a && c > b){ 
		max = c;
	}
	return max;
}

int main(){
	int test1 = mx_max(-1, 0, 1);
	int test2 = mx_max(1, 6, 3);
	int test3 = mx_max(3, 1, 2);
	int test4 = mx_max(4, 1, 7);
	
	return 0;
}
