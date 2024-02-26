#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the Numbers please:\n");
    for (int i = 0; i < n; i++)
    {

        scanf("%d", &arr[i]);
    }
    printf("the array numbers are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", arr[i]);
    }

    int rev[n], j = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rev[j] = arr[i];
        j++;
    }
    printf("the rev array are: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d \n", rev[i]);
    }
}