#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>
#include <sys/wait.h>

int main() {

    int child_pid;
    child_pid = fork();

    if (child_pid < 0) {
        // fork failed
        return 0;
    } else if (child_pid == 0) {
        // child
        char *myargs[2];
        myargs[0] = strdup("/bin/ls");
        myargs[1] = NULL;
        execvp(myargs[0], myargs);
    } else {
        // parent
        printf("Child process calling ls\n");
    }

    return 0;
}