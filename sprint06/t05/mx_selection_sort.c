int mx_strcmp (const char *s1, const char *s2);
int mx_strlen(const char *s);

int mx_selection_sort(char **arr, int size){  
    int count = 0;
    for (int i = 0; i < size - 1; i++) {  
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (mx_strlen(arr[j]) < mx_strlen(arr[minIndex])){  
                minIndex = j;  
            } else if (mx_strlen(arr[j]) == mx_strlen(arr[minIndex])) {
                if (mx_strcmp(arr[j], arr[minIndex]) < 0){
                    minIndex = j;
				}
            }
        } 
        if (minIndex  != i){
            char *temp = arr[minIndex]; 
            arr[minIndex] = arr[i]; 
            arr[i] = temp; 
            count++;
        }
    }

    return count;
}
