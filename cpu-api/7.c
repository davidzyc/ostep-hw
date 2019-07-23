#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {

    int child_pid = fork();

    if(child_pid < 0) {
        return 0;
    }

    if (child_pid == 0) {
        // child
        close(STDERR_FILENO);
        printf("CHILD\n");
    } else {
        // parent
        printf("Parent\n");
    }


    return 0;
}