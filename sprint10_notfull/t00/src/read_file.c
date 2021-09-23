#include "header.h"

int main(int argc, char *argv[]) {
	if (argc != 2){
		write (2, "usage: ./read_file [file_path]\n", 31);
		return -1;
	}
	
	int fd = open(argv[1], O_RDONLY);
	if (fd == -1) {
		write (2, "error\n", 6);
		return -1;
	}
	char sym;
	ssize_t bebra;
	while ((bebra = read(fd, &sym, 1)) > 0) {
		write (1, &sym, 1);
		if (bebra == -1) {
			write(2, "error\n", 6);
			return -1;
		}
	}
	close(fd);
	return 0;
}
