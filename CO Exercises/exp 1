#include <stdio.h>
#include <unistd.h>

int main() {
    pid_t pid1, pid2;

    
    pid1 = fork();

    if (pid1 == 0) {
        printf("First Child Process\n");
        printf("Child PID: %d\n", getpid());
        printf("Parent PID: %d\n", getppid());
    }
    else {
       
        pid2 = fork();

        if (pid2 == 0) {
            printf("Second Child Process\n");
            printf("Child PID: %d\n", getpid());
            printf("Parent PID: %d\n", getppid());
        }
        else {
            printf("Parent Process\n");
            printf("Parent PID: %d\n", getpid());
        }
    }

    return 0;
}
