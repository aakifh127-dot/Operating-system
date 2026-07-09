#include <stdio.h>

int main() {
    int bt[3] = {4, 3, 2};
    int wt[3];
    float avg;

    wt[0] = 0;
    wt[1] = bt[0];
    wt[2] = bt[0] + bt[1];

    avg = (wt[0] + wt[1] + wt[2]) / 3.0;

    printf("Average Waiting Time = %.2f", avg);

    return 0;
}
