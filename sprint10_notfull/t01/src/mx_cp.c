#include "header.h"

int main(int argc, char *argv[]) {
	if (argc != 3){
		mx_printerr("usage: ./mx_cp [source_file] [destination_file]\n");
		return -1;
	}
	
	int fdInput = open(argv[1], O_RDONLY);
	if (fdInput == -1){
		mx_printerr("mx_cp: ");
		mx_printerr("argv[1]");
		mx_printerr(": No such file or directory\n");
		return -1;
	}
	
	int fdOutput = open(argv[2], O_CREAT | O_EXCL | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fdOutput == -1){
		mx_printerr("error\n");
		return -1;
	}
	char sym;
	while (read(fdInput, &sym,1)){
		write(fdOutput, &sym, 1);
	}
	close(fdInput);
	close(fdOutput);
	return 0;
}
