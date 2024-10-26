#include <stdio.h>

int main() {
    
    int a,b,c;
	int arr[2][3][3] = {
        {
            {12, 16, 13},
            {35, 76,45},
            {22, 23, 34}
        },
        {
            {12, 11, 12},
            {13,24, 45},
            {12,13, 48}
        }
    };

    
    for (a = 0;a < 2; a++) {
        for (b = 0; b < 3; b++) {
            for (c = 0; c < 3; c++) {
                printf("Element at arr[%d][%d][%d]: %d\n", a, b, c, arr[a][b][c]);
            }
        }
    }

    return 0;
}

