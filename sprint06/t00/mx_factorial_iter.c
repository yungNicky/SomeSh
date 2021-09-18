int mx_factorial_iter(int);

int mx_factorial_iter(int n){
	int temp = n;
	int flag = 1;

	if (temp >= 12 || temp <= 0) {
		return 0;
	} else {
		for (int i = 1; i <= temp; i++){
			flag *= i;
		}
	}
	return flag;
}
