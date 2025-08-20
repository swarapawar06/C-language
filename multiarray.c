#include <stdio.h>

int main() {
    int arr[2][2][2] = {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
    };

    int sum = 0;
    int x = 2, y = 2, z = 2;

    // Loop through the 3D array and sum all elements
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < z; k++) {
                sum += arr[i][j][k];
            }
        }
    }

    printf("Sum of all elements in 3D array = %d\n", sum);

    return 0;
}

