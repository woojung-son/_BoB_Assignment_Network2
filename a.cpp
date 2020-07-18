#include <stdio.h>
//#include <winsock2.h>
#include <stdint.h>
#include "a.h"

int my_htonl(int n){
    uint16_t n1 = (n & 0xFF000000) >> 24;
    uint16_t n2 = (n & 0x00FF0000) >> 8;
    uint16_t n3 = (n & 0x0000FF00) << 8;
    uint16_t n4 = (n & 0x000000FF) << 16;

    return n1 | n2 | n3 | n4;
}
