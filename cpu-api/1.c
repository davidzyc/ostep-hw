#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int main() {

    int x = 100;

    int child_process_id;
    child_process_id = fork();

    if(!child_process_id) {
        x = 102;
        printf("Child Process: %d\n", x);
    }else{
        x = 101;
        printf("Parent Process: %d\n", x);
    }

    return 0;
}