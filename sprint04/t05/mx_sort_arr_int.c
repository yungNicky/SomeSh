void mx_sort_arr_int(int *, int);

void mx_sort_arr_int(int *arr, int size) {
	for(int i = 0; i < size; i++) { 
		for(int j = 0; j < size; j++) {  
			if(arr[j] > arr[i]) {            
				  int tmp = arr[i];
				  arr[i] = arr[j] ;
				  arr[j] = tmp; 
			}
		}
	}
}
