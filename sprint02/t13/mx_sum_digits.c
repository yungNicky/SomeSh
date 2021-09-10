int mx_sum_digits(int num){
	int firstNum = num / 100;
	int secondNum = num / 10 % 10;
	int thirdNum = num % 10;
	
	int sum = firstNum + secondNum + thirdNum;
	return sum;
}

int main(){
	int check1 = mx_sum_digits(111); 
	int check2 = mx_sum_digits(222);
	int check3 = mx_sum_digits(333);
	return 0;
}
