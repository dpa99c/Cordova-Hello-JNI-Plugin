//
//  mylib.c
//  Cross-platform C library
//

#include "mylib.h"
#include "mycomponent.h"
#include "mypart.h"
#include <stdlib.h>

int main(){
    return 0;
}

int calculate(int y, int z) {
    return multiply(sum(y,z),z);
}
