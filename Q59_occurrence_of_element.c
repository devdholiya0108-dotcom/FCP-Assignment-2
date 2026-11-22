#include <stdio.h>
int main()
{
    int a[100], n, i, num, count = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to find occurrence: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            count++;
        }
    }

    printf("Occurrence of %d = %d", num, count);

    return 0;
}