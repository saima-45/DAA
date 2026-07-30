#include <stdio.h>

int main()
{
    int a[] = {3,1,8,0,9,5,2};
    int n = 7;
    int i, min, max;

    min = max = a[0];

    for(i = 1; i < n; i++)
    {
        if(a[i] < min)
            min = a[i];

        if(a[i] > max)
            max = a[i];
    }

    printf("Minimum = %d\n", min);
    printf("Maximum = %d\n", max);

    return 0;
}
