#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <signal.h>
#include <fcntl.h>
#include <stdlib.h>

static void sighandler(int signo){
  if (signo == SIGINT){ //2
    printf("exiting...");
    exit(0);
  }
  if (signo == SIGUSR1){ //30,10,16
    printf("Recieved SIGUSR1\nPID: %d\n",getpid());
  }
}

int main(){
  signal(SIGINT, sighandler);
  signal(SIGUSR1, sighandler);
  
  while(1){
    printf("HAI I AM %d\n", getpid());
    sleep(1);
  }

  return 0;
}
