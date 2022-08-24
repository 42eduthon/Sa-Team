#include <stdio.h>

void *function(char c) {
    return (&c + 0x29);
}

int main(void) {
    int i = 20;

    printf("function addr: %p\n", &i);
    printf("function addr: %p\n", function(i));
    printf("function addr: %d\n", *(int *)(function(i)));
    return (0);
}