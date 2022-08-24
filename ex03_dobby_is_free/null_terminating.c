#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    char *str;

    str = malloc(200);
    memset(str, 'c', 200);
    printf("%p\n", str);
    free(str);

    str = malloc(sizeof(char) * 8);
    printf("%p\n", str);
    memset(str, 'c', 8);
    strncpy(str, "eduthon", strlen("eduthon"));

    printf("%s\n", str);

    return (0);
}