#include <stdio.h>

volatile int *stack_function(void){
    int a;

    a = 10;
    return &a;
}

int *stack_function2(void){
	int b = 30;
    int a = 20;
	int c = 40;
    return &a;
}

int main(void) {
    int *a;

    a = stack_function();
    stack_function2();
    printf("%d\n", *a);
    return (0);
}