#include <stdio.h>
//1.Իրականացնել ֆունկցիա, որը սորտավորում է ամբողջ թվով զանգվածի տարրերը։
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() 
{
    const int n = 5;
    int arr[n];
    for(int i = 0; i < n; ++i)
    {
        scanf("%i", &arr[i]);
    }
    for(int i = 0; i < n; ++i) // 1 2 5 3 7
    {
        for(int j = i + 1; j < n; ++j)
        {
            if(arr[i] < arr[j])
            {
              swap(&arr[i], &arr[j]);  
            }
        }
    }
    for(int i = 0; i < n; ++i)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
    return 0;
}