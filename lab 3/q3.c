#include <stdio.h>

int binarySearch(int arr[], int n, int key)
{
    int low = 0, high = n - 1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 5, 6, 7, 9, 12, 14, 15, 17, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;

    int result = binarySearch(arr, n, key);

    if (result != -1)
        printf("Key %d found at index %d.\n", key, result);
    else
        printf("Key not found.\n");

    return 0;
}
