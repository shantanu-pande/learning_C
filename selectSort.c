#include <stdio.h>

int main()
{
    int i, j, min, n;

    printf("Enter No if elements: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter Elements: \n");
    for (int a=0; a<n; a++) scanf("%d", &   arr[a]);

    for (i = 0; i < n - 1; i++)
    {
        min = i;
        for (j = i + 1; j < n; j++) if (arr[j] < arr[min]) min = j;
        if (min != i)
        {
            int temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }
    printf("Sorted array: \n");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");

    return 0;
}