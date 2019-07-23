#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {

    int child_pid;
    child_pid = fork();

    if(child_pid < 0) {
        // Fork failed
        return 0;
    } else if (child_pid == 0) {
        printf("hello\n");
    } else {
        // int child_pid_wait = wait(NULL);
        long long t = 0;
        for(int i=0; i<100000000; i++) t += (long long)1;
        printf("goodbye\n");
    }

    return 0;
}