//chatgpt
#include<stdio.h>
#include<time.h>
#include<stdlib.h>  // for rand()
#include<conio.h>   // for getch() in Windows

void selectionsort(int arr[], int n) {
    int i, j, minindex, temp;
    for (i = 0; i < n - 1; i++) {
        minindex = i;
        for (j = i + 1; j < n; j++) {  // Corrected j < n instead of i++
            if (arr[j] < arr[minindex]) {
                minindex = j;
            }
        }
        temp = arr[minindex];
        arr[minindex] = arr[i];
        arr[i] = temp;
    }
}

int main() {
    int n, i, arr[10000];
    clock_t st, et;
    double ts;

    printf("\nEnter How many Numbers: ");
    scanf("%d", &n);

    printf("\nThe Random Numbers are:\n");
    for (i = 0; i < n; i++) {  // Start i from 0, not 1
        arr[i] = rand();
        printf("%d\t", arr[i]);
    }

    st = clock();
    selectionsort(arr, n);
    et = clock();

    ts = (double)(et - st) / CLOCKS_PER_SEC;

    printf("\nSorted Numbers are:\n");
    for (i = 0; i < n; i++) {  // Start i from 0, not 1
        printf("%d\t", arr[i]);
    }

    printf("\nThe time taken is %f seconds\n", ts);

    getch();  // Wait for a key press before exiting

    return 0;
}
