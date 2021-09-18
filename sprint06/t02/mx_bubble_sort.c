int mx_strcmp (const char *s1, const char *s2);
int mx_bubble_sort(char **, int);

int mx_bubble_sort (char **arr, int size){
	int countOfSwaps = 0;
	char *temp;
	
	for (int i = 0; i < size - 1; i++){ 
        for (int j = i + 1; j < size; j++){ 
            if (mx_strcmp(arr[i], arr[j]) > 0){ 
                temp = arr[i]; 
                arr[i] = arr[j];
                arr[j] = temp; 
                countOfSwaps++;
            }
        }
    }
	return countOfSwaps;
}
