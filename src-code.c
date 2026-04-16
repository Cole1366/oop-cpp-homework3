#include <stdio.h>

void main(void) {
    int i, j;
    const int ROW = 3;
    const int COL = 4;
    
    int arr[ROW][COL] = {
        {3, 6, 9, 12},
        {15, 18, 21, 24},
        {27, 30, 33, 36}
    };
    
    printf(">>> *(*(arr+i)+j) <<<\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%4d", *(*(arr + i) + j));
        }
        printf("\n");
    }
    
    printf("\n>>> arr[i][j] <<<\n");
    for(i = 0; i < ROW; i++) {
        for(j = 0; j < COL; j++) {
            printf("%4d", arr[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
