void mx_printchar(char c);

void mx_cube(int n){
	if (n > 1) {
		 // Upper start
		for (int i = 0; i < (n/2)+1; i++){
			mx_printchar(' ');
		}
		mx_printchar('+');
		for (int i = 0; i < 2*n; i++){
			mx_printchar('-');
		}
		mx_printchar('+');
		mx_printchar('\n');
	
		// 
		int tmp = n/2;
		int le = 0;
		for(int a = 0; a < n/2; a++)
        {
            for(int b = 0; b < tmp; b++){
                mx_printchar(' ');
			}
            mx_printchar('/');
            for(int c = 0; c < n*2; c++){
                mx_printchar(' ');
			}
            mx_printchar('/');
            for(int d = 0; d < le; d++){
                mx_printchar(' ');
            }
            tmp--; 
            le++;
            mx_printchar('|');
            mx_printchar('\n');
        }
        //
        mx_printchar('+');
        for (int i = 0; i < 2*n; i++){
			mx_printchar('-');
		}
        mx_printchar('+');
        for (int i = 0; i < le; i++){
			mx_printchar(' ');
		}
		mx_printchar('|');
		mx_printchar('\n');
		// 
		int flag = n;
		if ((n % 2) == 0) {
			flag -= 1;
		}
		for (int i = 0; i < flag/2; i++) {
			mx_printchar('|');
			for (int j = 0; j < n*2; j++){
				mx_printchar(' ');
			}
			mx_printchar('|');
			for (int i = 0; i < le; i++){
			mx_printchar(' ');
			}
			mx_printchar('|');
			mx_printchar('\n');
		}
		//
			mx_printchar('|');
			for (int j = 0; j < n*2; j++){
				mx_printchar(' ');
			}
			mx_printchar('|');
			for (int i = 0; i < le; i++){
			mx_printchar(' ');
			}
			mx_printchar('+');
			mx_printchar('\n');
		// down**
		for (int i = 0; i < n/2; i++){
			mx_printchar('|');
			for(int j = 0; j < n*2; j++){
				mx_printchar(' ');
			}
			mx_printchar('|');
			for (int k = le-1; k > 0; k--){
				mx_printchar(' ');
			}
			mx_printchar('/');
			mx_printchar('\n');
			le--;
		}
		// down down
		mx_printchar('+');
		for (int i = 0; i < n*2; i++){
			mx_printchar('-');
		}
        mx_printchar('+');
        mx_printchar('\n');
	}
}
