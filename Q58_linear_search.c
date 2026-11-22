#include <stdio.h>

int main()
{
    int a[100], n, i, num, found = 0;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &num);

    for(i = 0; i < n; i++)
    {
        if(a[i] == num)
        {
            printf("Element found at position %d", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
}