#include <stdio.h>

#define N 10

void insertionSort(float bucket[], int n)
{
    int i, j;
    float key;

    for (i = 1; i < n; i++)
    {
        key = bucket[i];
        j = i - 1;

        while (j >= 0 && bucket[j] > key)
        {
            bucket[j + 1] = bucket[j];
            j--;
        }

        bucket[j + 1] = key;
    }
}

void bucketSort(float arr[], int n)
{
    float buckets[N][N];
    int bucketCount[N] = {0};

    for (int i = 0; i < n; i++)
    {
        int index = (int)(arr[i] * N);

        if (index == N)
            index = N - 1;

        buckets[index][bucketCount[index]] = arr[i];
        bucketCount[index]++;
    }

    for (int i = 0; i < N; i++)
    {
        insertionSort(buckets[i], bucketCount[i]);
    }

    int k = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < bucketCount[i]; j++)
        {
            arr[k] = buckets[i][j];
            k++;
        }
    }
}

int main()
{
    float arr[N] = {
        0.78, 0.17, 0.39, 0.26, 0.72,
        0.94, 0.21, 0.12, 0.22, 0.68
    };

    printf("Original array:\n");

    for (int i = 0; i < N; i++)
    {
        printf("%.2f ", arr[i]);
    }

    bucketSort(arr, N);

    printf("\n\nSorted array:\n");

    for (int i = 0; i < N; i++)
    {
        printf("%.2f ", arr[i]);
    }

    return 0;
}
