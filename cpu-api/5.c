#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int main() {

    int child_pid = fork();

    if(child_pid < 0) {
        return 0;
    } else if (child_pid == 0) {
        // child
        int child_pid_wait = wait(NULL);
        printf("IN CHILD: Parent of PID: %d\n", child_pid_wait);
        printf("CHILD PID: %d\n", (int) getpid());
    } else {
        //parent
        // int child_pid_wait = wait(NULL);
        // printf("Parent of PID: %d", child_pid_wait);
    }

    return 0;
}