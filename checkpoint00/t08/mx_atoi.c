#include <stdbool.h>
int mx_atoi(const char *);

int mx_atoi(const char *str) {
    int dig = 0;
    int flag = 0;
    for (unsigned int i = 0; str[i]; ++i) {
        if (!(str[i] == ' ' || str[i] == '\n' || str[i] == '\t' || str[i] == '\v' || str[i] == '\f' || str[i] == '\r')) {
            if ((str[i] >= 48 && str[i] <= 57)) {
                dig = dig * 10 + (str[i] - '0');
            } else if ((str[i+1] == ' ' || str[i+1] == '\n' || str[i+1] == '\t' || str[i+1] == '\v' || str[i+1] == '\f' || str[i+1] == '\r') && str[i+1] == '-') {
                return 0;
            } else {
                if (str[i] == '-') {
                    if (flag == 0) { 
                        flag = 1; }
                    else { return (flag == 1 ? -dig : dig); };
                }
                else { return (flag == 1 ? -dig : dig); }
            }
        }
    }

    return (flag == 1 ? -dig : dig);
}

int main(){
	char str = "asd";
	int bebra = mx_atoi(str);
}
