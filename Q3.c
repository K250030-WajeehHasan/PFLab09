#include <stdio.h>

void findTwoRoads(int arr[], int n, int target, int *r1, int *r2) {
	int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                *r1 = i;
                *r2 = j;
                return;
            }
        }
    }
}
int main() {
    int n, target, i;

    printf("Enter number of roads: ");
    scanf("%d", &n);

    int vehicles[n];
    for (i = 0; i < n; i++) {
        printf("Enter vehicles on road %d: ", i + 1);
        scanf("%d", &vehicles[i]);
    }

    printf("Enter target vehicle count: ");
    scanf("%d", &target);

    int road1, road2;
    findTwoRoads(vehicles, n, target, &road1, &road2);

    printf("Road %d and Road %d combine to reach the target.\n", road1 + 1, road2 + 1);
    return 0;
}
