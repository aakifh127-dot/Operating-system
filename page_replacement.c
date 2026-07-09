#include <stdio.h>

int main() {
    int pages[] = {1, 2, 3, 4, 1};
    int frame[3] = {-1, -1, -1};
    int i, j, found;
    int index = 0;

    for(i = 0; i < 5; i++) {
        found = 0;

        
        for(j = 0; j < 3; j++) {
            if(frame[j] == pages[i]) {
                found = 1;
                break;
            }
        }

       
        if(found == 0) {
            frame[index] = pages[i];
            index = (index + 1) % 3;
        }

        
        printf("Frames: ");
        for(j = 0; j < 3; j++) {
            printf("%d ", frame[j]);
        }
        printf("\n");
    }

    return 0;
}
