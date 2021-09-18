double mx_pow_rec(double, unsigned int);

double mx_pow_rec(double n, unsigned int pow) {
	if (pow == 0) { 
		return 1;
	}
	return n * mx_pow_rec(n, pow - 1);
}
