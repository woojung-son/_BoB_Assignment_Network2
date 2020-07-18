#include <stdio.h>
#include <stdint.h>

#include <stdlib.h>
#include <math.h>
#include <string.h>
#include "a.h"

/*
int my_htonl(int n){
    uint16_t n1 = (n & 0xFF000000) >> 24;
    uint16_t n2 = (n & 0x00FF0000) >> 8;
    uint16_t n3 = (n & 0x0000FF00) << 8;
    uint16_t n4 = (n & 0x000000FF) << 16;

    return n1 | n2 | n3 | n4;
}
*/

int main(int argc, char* argv[]){

	if ( argc < 3 ) {
		printf("Usage : %s <filename1> <filename2>\n", argv[0]);
		printf("or\nUsage : %s <filename1> <filename2> ... <directory name>\n", argv[0]);
		return 0;
	}

	FILE *fd, *dest;
	int n, m;
	int nn, mm;
    char c1[10], c2[10];
	int len;

	fd = fopen(argv[1], "rb");
	dest = fopen(argv[2], "rb");

	fread(&n, sizeof(n), 1, fd);
	fread(&m, sizeof(m), 1, dest);

	nn = my_htonl(n);
	mm = my_htonl(m);

    printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", nn, nn, mm, mm, nn+mm, nn+mm);

	fclose(fd);
	return 0;
}
