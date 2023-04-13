#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n ");
}

void insertoinSort(int *A, int n)
{
    int key, j;
    for (int i = 0; i < n - 1; i++)
    {
        key = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}
int main()
{

    int A[] = {12, 2, 32, 11, 54, 32, 45, 67, 89};
    int n = 9;
    printf("Before sorting\n");
    printArray(A, n);
    insertoinSort(A, n);
    printf("After sorting \n");
    printArray(A, n);

    return 0;
}