#include <stdio.h>

int main(void){
    float f = 0.1;
    
    f *= 2;

    if (f == 0.2) {
        printf("f == 0.2");
    }
    printf("f != 0.2\n");
    return (0);
}