int_mx_gcd(int, int);

int mx_gcd(int a, int b){
    if (a == 0 || b == 0){
        return 0;
    }
    if (a < 0){ 
        a = -a;
    }
    if (b < 0) {
        b = -b;
    }

    else if (a == b) {
        return a;
    }
    else if (a > b){
        return mx_gcd(a - b, b);
    } else return mx_gcd(a, b - a);
}
