#include <stdio.h>

int main()
{
    int a[] = {55, 20, 3, 66, 77};
    int n = 5, i, j, temp, choice;

    printf("Enter 1 for Ascending or 2 for Descending: ");
    scanf("%d", &choice);

    for(i = 0; i < n - 1; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if((choice == 1 && a[i] > a[j]) ||
               (choice == 2 && a[i] < a[j]))
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Sorted List: ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}
