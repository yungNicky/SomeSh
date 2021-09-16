#include <stdbool.h>
bool mx_isspace(char c);
bool mx_isdigit(int c);
int mx_atoi(const char *);

int mx_atoi(const char *str) {
    int dig = 0;
    int flag = 0;
    for (unsigned int i = 0; str[i]; ++i) {
        if (!mx_isspace(str[i])) {
            if (mx_isdigit(str[i])) {
                dig = dig * 10 + (str[i] - '0');
            } else if (mx_isspace(str[i + 1]) && str[i] == '-') {
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
