#include <stdio.h>

int main() {
    int queue[5];
    int front = 0, rear = -1;
    int i;

    
    queue[++rear] = 1;
    queue[++rear] = 2;
    queue[++rear] = 3;

    printf("Ready Queue: ");
    for(i = front; i <= rear; i++) {
        printf("P%d ", queue[i]);
    }

    
    printf("\n\nProcess P%d executed.\n", queue[front]);
    front++;

    printf("Ready Queue after execution: ");
    for(i = front; i <= rear; i++) {
        printf("P%d ", queue[i]);
    }

    return 0;
}
