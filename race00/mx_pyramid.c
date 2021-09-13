void mx_printchar(char c);

void mx_pyramid(int n){
	if ((n > 1) && ((n % 2) == 0)) {
		// Start
		for (int i = 0; i < n - 1; i++){
			mx_printchar(' ');
		}
		mx_printchar('/');
		mx_printchar('\\');
		mx_printchar('\n');
		
		// new line
		int condition = n/2;
		int flag = 1;
		int l = 1;
		while (l < condition) {
			for (int i = 0; i < n - 1 - l; i++){
				mx_printchar(' ');
			}
			mx_printchar('/');
			
			for (int j = 0; j < flag; j++){
				mx_printchar(' ');
			}
			mx_printchar('\\');
			
			for (int k = 0; k < l; k++){
				mx_printchar(' ');
			}
			mx_printchar('\\');
			mx_printchar('\n');
			l++;
			flag += 2;
		}
		// new
		int temp = 1;
		while (temp < condition) {
			for (int i = 0; i < n - 1 - l; i++){
				mx_printchar(' ');
			}
			mx_printchar('/');
			
			for (int j = 0; j < flag; j++){
				mx_printchar(' ');
			}
			mx_printchar('\\');
			
			for (int k = 0; k < n - 1 - l; k++){
				mx_printchar(' ');
			}
			mx_printchar('|');
			mx_printchar('\n');
			
			flag += 2;
			l++;
			temp++;
		}
		
		
		// end
		int endLines = 2 * n - 3;
		mx_printchar('/');
		for (int i = 0; i < endLines; i++) {
			mx_printchar('_');
		}
		mx_printchar('\\');
		mx_printchar('|');
		mx_printchar('\n');
	}
}	
