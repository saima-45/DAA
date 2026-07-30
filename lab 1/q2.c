#include <stdio.h>

int main()
{
    int a[] = {22, 10, 26, 8, 5};
    int n = 5;
    int i, j, key;

    // Insertion Sort
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;

        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = key;
    }

    printf("Sorted array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
