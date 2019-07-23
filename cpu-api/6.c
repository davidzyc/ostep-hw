#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/wait.h>

int main() {

    pid_t parent_pid = getpid();
    int child_pid = fork();

    if(child_pid < 0) {
        return 0;
    } else if (child_pid == 0) {
        // child
        printf("This is child (pid:%d)\n", (int) getpid());
    } else {
        //parent
        int parent_pid_wait = (int) waitpid(-1, NULL, 0);
        printf("Parent of pid %d\n", parent_pid_wait);
    }

    return 0;
}