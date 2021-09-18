int mx_strlen(const char *s);

int mx_insertion_sort(char **arr, int size){
    int count = 0;
    for (int i = 1; i < size; i++){ 
        char *temp = arr[i]; 
        int j = i - 1; 
        while ((mx_strlen(temp) < mx_strlen(arr[j])) && (j >= 0)) { 
            arr[j + 1] = arr[j]; 
            j--; 
            count++;
        } 
        arr[j + 1] = temp; 
    } 
    return count;
}
