#include <stdio.h>
int remDup(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i - 1] != arr[i])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;
}
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    getchar();
    int res = remDup(arr, n);
    for (int i = 0; i < res; i++)
        printf("%d ", arr[i]);
    return 0;
}