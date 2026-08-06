#include<stdio.h>

int main()
{
    int a[] = {2, 5, 8, 12};
    int b[] = {1, 3, 6, 9, 10, 15};

    int n1 = 4,n2 = 6;
    int c[10];

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];

    }

    while (i < n1)
        c[k++] = a[i++];

    while (j < n2)
        c[k++] = b[j++];

    printf("Merged Sorted List:\n");
    for (i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;

}
