// WAP to find smallest number in an array.
#include <stdio.h>
void main()
{
    int arr[10], i, n, smallNum;
    printf("Enter the size of Array : ");
    scanf("%d", &n);
    printf("Enter elements into your array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    smallNum = arr[0];
    for (int i = 0; i < n; i++)
    {
        if ((smallNum) > arr[i]){
            smallNum = arr[i];
        }
    }
    printf("The Smallest Number is %d ", smallNum);
}