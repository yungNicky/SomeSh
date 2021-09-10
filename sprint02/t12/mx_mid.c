int mx_mid(int a, int b, int c) {
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
	int min = 0;
	if(a < b && a < c){ 
		min = a;
	}
	if(b < a && b < c){ 
		min = b;
	}
	if(c < a && c < b){ 
		min = c;
	}
	int temp = a + b + c;
	int mid = temp - max - min;
	
	return mid;
}

int main(){
	int test1 = mx_mid(-1, 0, 1);
	int test2 = mx_mid(1, 6, 3);
	int test3 = mx_mid(3, 1, 2);
	int test4 = mx_mid(4, 1, 7);
	
	return 0;
}

