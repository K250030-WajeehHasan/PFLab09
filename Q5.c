#include <stdio.h>

void analyzeData(int *arr, int n, int *max, int *min, float *avg) {
    *max = arr[0];
    *min = arr[0];
    int sum = 0, i;

    for (i = 0; i < n; i++) {
        if (arr[i] > *max) *max = arr[i];
        if (arr[i] < *min) *min = arr[i];
        sum += arr[i];
    }
    *avg = (float)sum / n;
}

int main() {
    int data[] = {60, 80, 40, 70, 55};
    int max, min;
    float avg;

    analyzeData(data, 5, &max, &min, &avg);

    printf("Maximum = %d\n", max);
    printf("Minimum = %d\n", min);
    printf("Average = %.2f\n", avg);

    return 0;
}

