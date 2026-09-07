#include <stdio.h>

void merge(int a[], int left, int mid, int right)
{
    int i = left, j = mid + 1, k = 0;
    int temp[right - left + 1];

    while (i <= mid && j <= right)
    {
        if (a[i] <= a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }

    while (i <= mid)
        temp[k++] = a[i++];

    while (j <= right)
        temp[k++] = a[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        a[i] = temp[k];
}

void mergeSort(int a[], int left, int right)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(a, left, mid);
        mergeSort(a, mid + 1, right);
        merge(a, left, mid, right);
    }
}

int main()
{
    int n1, n2, i;
    int a[100], b[100], c[200];

    printf("Enter size of first list: ");
    scanf("%d", &n1);

    printf("Enter elements of first list:\n");
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second list: ");
    scanf("%d", &n2);

    printf("Enter elements of second list:\n");
    for (i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    mergeSort(a, 0, n1 - 1);
    mergeSort(b, 0, n2 - 1);

    /* Merge the two sorted lists */
    int x = 0, y = 0, z = 0;

    while (x < n1 && y < n2)
    {
        if (a[x] <= b[y])
            c[z++] = a[x++];
        else
            c[z++] = b[y++];
    }

    while (x < n1)
        c[z++] = a[x++];

    while (y < n2)
        c[z++] = b[y++];

    printf("\nSorted merged list:\n");
    for (i = 0; i < z; i++)
        printf("%d ", c[i]);

    return 0;
}
