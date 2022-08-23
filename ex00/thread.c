#include <pthread.h>
#include <stdio.h>
#include <unistd.h>

// void *thread_function(void *a);

int main(void){
    pthread_t th;
    int a;

    pthread_create(&th, NULL, thread_function, &a);

    sleep(5);

    return (0);
}

void *thread_function(void *a){
    (void)a;
    while (1)
    {
        printf("threaddddd\n");
        sleep(2);
    }
}