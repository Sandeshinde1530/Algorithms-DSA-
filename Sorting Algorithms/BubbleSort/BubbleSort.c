#include<stdio.h>
#include<stdlib.h>

void Accept(int *Arr , int n)
{
    printf("Enter %d Numbers ",n);

    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr , int n)
{
    printf("Array elements are :  ");

    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

void BubbleSort(int *Arr , int n)
{
    int i = 0 , j = 0  , temp = 0;

    for( i = 1 ; i < n ; i++)
    {
        for(j = 0 ; j < n-i ; j++)
        {
            if(Arr[j] > Arr[j + 1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j+1] = temp;
            }
        }
        Display(Arr , n);
    }
}

int main()
{
    int n  = 0 , *Arr = NULL ;

    printf("Enter How many Number you want to store : ");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));
    Accept(Arr , n);
    printf("\nUnsorted Elements : \n");
    Display(Arr , n);

    BubbleSort(Arr, n);
    printf("\nSorted Elements : \n");
    Display(Arr , n);

    return 0;
}