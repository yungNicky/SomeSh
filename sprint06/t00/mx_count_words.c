int mx_count_words(const char *, char);
int mx_count_words(const char *str, char delimiter) {
    int checkdel = 0;
    int state = 0;
    unsigned db = 0;
    while (*str) {
        if (*str == delimiter && checkdel == 0) {
            checkdel = 1;
        }
        if (*str == delimiter || *str == '\n' || *str == '\t'){
            state = 0;
        } else if (state == 0) {
            state = 1;
            ++db;
        }
        ++str;
    }
    if (checkdel > 0) {
        return db;
    }
    return 0;
}
