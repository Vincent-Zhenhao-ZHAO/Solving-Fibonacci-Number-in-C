#include <stdio.h>
#include <stdlib.h>

#include "perimeter.h"

int main(int argc, char** argv){
    // Read in command line argument (expects 1)
    if(argc !=2){
        printf("Wrong number of arguments, expects 1 int specifying the number of rectangles\n");
        return 0;
    }
    int n = atoi(argv[1]);
    printf("The perimeter of %i rectangles is %llu\n", n, perimeter(n));
    return 1;
}
