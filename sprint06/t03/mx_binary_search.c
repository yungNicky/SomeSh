int mx_strcmp (const char *s1, const char *s2);


int mx_binary_search(char **arr, int size, const char *s , int *count){
	int var = size - 1;
	int temp = 0;
	int counter = 0;
	
	while (counter <= var){
		counter++;
		*count = counter;
		
		int index = temp + (var - 1) / 2;
		int check = 1;
		
		if (mx_strcmp(s, arr[index]) == 0){
			check = 0;
		}
		if (check == 0) {
			return index;
		}
		if (mx_strcmp(s, arr[index] > 0){
			temp = index + 1;
		}
	}
	*count = 0;
	return -1;
}
