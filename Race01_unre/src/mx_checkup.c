#include "header.h"

void mx_checkup(char *argv[], char *operand1, char *operation, char *operand2, char *result) {

    if (mx_strlen(operand1) < 1) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[1]);
        mx_printerr("\n");
        exit(1);
    }

    if (mx_strlen(operation) != 1) {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(1);
    }

    if (mx_strlen(operand2) < 1) {
        mx_printerr("Invalid operand: ");
        mx_printerr(argv[3]);
        mx_printerr("\n");
        exit(1);
    }

    if (mx_strlen(result) < 1) {
        mx_printerr("Invalid result: ");
        mx_printerr(argv[4]);
        mx_printerr("\n");
        exit(1);
    }

    for (int i = 0; i < mx_strlen(operand1); i++) {
        if (i == 0 && operand1[i] == '-') {
            continue;
        }
        if (operand1[i] != '?' && !mx_isdigit(operand1[i])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[1]);
            mx_printerr("\n");
            exit(1);
        }
    }


    if (*operation != '?' && *operation != '+' && *operation != '-' && *operation != '*' && *operation != '/') {
        mx_printerr("Invalid operation: ");
        mx_printerr(argv[2]);
        mx_printerr("\n");
        exit(1);
    }

    for (int y = 0; y < mx_strlen(operand2) ; y++) {
        if (y == 0 && operand2[y] == '-') {
            continue;
        }
        if (operand2[y] != '?' && !mx_isdigit(operand2[y])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[3]);
            mx_printerr("\n");
            exit(1);
        }
    }

    for (int j = 0; j < mx_strlen(result) ; j++) {
        if (j == 0 && result[j] == '-') {
            continue;
        }
        if (result[j] != '?' && !mx_isdigit(result[j])) {
            mx_printerr("Invalid operand: ");
            mx_printerr(argv[4]);
            mx_printerr("\n");
            exit(1);
        }
    }
}
