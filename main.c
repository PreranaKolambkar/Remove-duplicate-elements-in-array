#include <stdio.h>

int main() {
    int a[20];
    int n,i, j;
 printf("enter the value of n\n");
 scanf("%d",&n);


    printf("Enter the array elements:\n");
    for (i = 0; i <n; i++) {
        scanf("%d", &a[i]);
    }


    for (i = 0; i < n;i++) {
        for (j = i + 1; j < n;j++ ) {
            if (a[i] == a[j]) {

                a[j] = a[n - 1];
                n--;
            }
        }
    }


    printf("Array with duplicates removed:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
