#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void do_child(void) {
  while (1) {
    printf("[%d] %s", getpid(), "Brrrraaaaiiinnnzzz...\n");
    // write(1, "Child Speaking\n", 15);
    sleep(2);
  }
}

int main(void) {

  pid_t pid;

  pid = fork();

  if (!pid) {
    do_child();
  } else {
    waitpid(-1, NULL, WNOHANG);
  }
  printf("[%d] GoodBye! I'm Running! -by main \n", getpid());
  //   write(1, "[]main() end\n", 11);
  return 0;
}