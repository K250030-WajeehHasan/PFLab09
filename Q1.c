#include <stdio.h>

void inputData(int arr[], int n) {
	int i;
    for (i = 0; i < n; i++) {
        printf("Enter patients for Day %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
float averagePatients(int arr[], int n) {
    int sum = 0, i;
    for (i = 0; i < n; i++)
        sum = sum + arr[i];
    return (float)sum / n;
}
int busiestDay(int arr[], int n) {
    int max = arr[0], idx = 0, i;
    for (i = 1; i < n; i++)
        if (arr[i] > max) {
            max = arr[i];
            idx = i;
        }
    return idx;
}
int slowestDay(int arr[], int n) {
    int min = arr[0], idx = 0, i;
    for (i = 1; i < n; i++)
        if (arr[i] < min) {
            min = arr[i];
            idx = i;
        }
    return idx;
}

int main() {
    int patients[7];
    int i;
    inputData(patients, 7);

    float avg = averagePatients(patients, 7);
    int maxDay = busiestDay(patients, 7);
    int minDay = slowestDay(patients, 7);

    printf("\nAverage Patients per Day: %.2f\n", avg);
    printf("Busiest Day: Day %d (%d patients)\n", maxDay + 1, patients[maxDay]);
    printf("Slowest Day: Day %d (%d patients)\n", minDay + 1, patients[minDay]);

    return 0;
}
