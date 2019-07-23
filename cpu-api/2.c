#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#include<assert.h>
#include<sys/wait.h>

int main() {

    close(STDOUT_FILENO);
    open("2.out", O_CREAT|O_WRONLY|O_TRUNC, S_IRWXU);

    int child_process_id;
    child_process_id = fork();

    if(child_process_id < 0) {
        printf("Fork Failed.\n");
        return 0;
    } else if(child_process_id == 0) {
        printf("Child Process (pid:%d)\n", (int) getpid());
        for(int i=0; i<100; i++) printf("child\n");
    } else {
        printf("Parent Process (pid:%d) with Child Process (pid:%d)\n", (int) getpid(), child_process_id);
        for(int i=0; i<100; i++) printf("parent\n");
    }


    return 0;
}