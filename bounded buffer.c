#include <stdio.h>

int main() {
    int buffer[5] = {10, 20, 30};
    int front = 0, rear = 2, i;

    printf("Buffer: ");
    for(i = front; i <= rear; i++)
        printf("%d ", buffer[i]);

    printf("\nConsumed: %d\n", buffer[front]);
    front++;

    printf("Buffer after consume: ");
    for(i = front; i <= rear; i++)
        printf("%d ", buffer[i]);

    return 0;
}
