#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    double arg1, arg2;
    
    if ( argc != 4 ){
        printf("Use only 2 numbers");
        exit(EXIT_FAILURE);
    }
    arg1 = atof(argv[1]);
    arg2 = atof(argv[3]);
    switch( argv[2][0] ){
        case '+' :
            printf("%f\n", arg1 + arg2);
            break;
        case '-' :
            printf("%f\n", arg1 - arg2);
            break;
        case '*' :
            printf("%f\n", arg1 * arg2);
            break;
        case '/' :
            if ( arg2 == 0.0 ){
                printf("Devidion by 0.\n");
                exit(EXIT_FAILURE);
            }
            printf("%f\n", arg1 / arg2);
            break;
    }
    
    exit(EXIT_SUCCESS);
}
