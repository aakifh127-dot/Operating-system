#include <stdio.h>

int main() {
    int memory[5];
    int i;a

  
    for(i = 0; i < 5; i++) {
        memory[i] = 100;  
    }

   
    printf("Memory Blocks:\n");
    for(i = 0; i < 5; i++) {
        printf("Block %d = %d\n", i + 1, memory[i]);
    }

    return 0;
}
