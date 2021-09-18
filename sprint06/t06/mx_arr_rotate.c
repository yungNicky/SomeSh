void mx_arr_rotate(int *, int, int);

void mx_arr_rotate(int *arr, int size, int shift){
    if(shift == 0){ 
		break;
	}
    if(shift < 0){
        shift = -shift;  
        for(int i = 0; i < shift; i++){
            int start = arr[0];
            for(int j = 0; j < size - 1; j++)   
                arr[j] = arr[j + 1];    
				arr[j] = start;   
        }
    } else { 
        for(int i = 0; i < shift; i++){
            int finish = arr[size - 1];
            for(int j = size - 1; j > 0; j--)
                arr[j] = arr[j - 1];    
				arr[0] = finih;    
        }    
    }
}
