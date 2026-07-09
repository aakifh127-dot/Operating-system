#include <stdio.h>

int main() {
    int process[5] = {1, 2, 3, 4, 5};
    int i;

    printf("Simple Process Scheduler\n");

    for(i = 0; i < 5; i++) {
        printf("Executing Process P%d\n", process[i]);
    }

    printf("All processes executed.\n");

    return 0;
}
