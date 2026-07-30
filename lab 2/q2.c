#include <stdio.h>

int main()
{
    int a[] = {3,2,0,5,3,7,9,2,1,1,3};
    int n = 11;
    int count[10] = {0};
    int i, j;

    // Count frequency
    for(i = 0; i < n; i++)
        count[a[i]]++;

    printf("Sorted Array: ");
    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < count[i]; j++)
            printf("%d ", i);
    }

    return 0;
}
