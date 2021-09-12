int mx_sqrt(int);

int mx_sqrt(int n){
	for (int i = 0; i < n; i++){
		if (i * i == n) {
			return i;
		}
	} 
	return 0;
}
