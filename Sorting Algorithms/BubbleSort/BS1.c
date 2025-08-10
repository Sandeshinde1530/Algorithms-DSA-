#include<stdio.h>
#include<stdlib.h>

void Accept(int *Arr , int n)
{
    printf("Enter %d Numbers : \n",n);

    for(int i= 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr , int n)
{
    printf(" Elements are : \n");

    for(int i= 0 ; i < n ; i++)
    {
        printf("%d\t",Arr[i]);
    }

    printf("\n\n");
}

void BubbleSort(int *Arr , int n)
{
    int temp = 0 , i = 0 , j = 0;
    for( i = 0 ; i<n; i++)
    {
        for( j = 0 ; j < n - i - 1;j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j + 1];
                Arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    int n = 0 , *Arr = NULL;

    printf("How many Elements : ");
    scanf("%d",&n);

    Arr = malloc(n * sizeof(int ));

    Accept(Arr , n);
    printf("Unsorted ");
    Display(Arr , n);
    
    BubbleSort(Arr , n);
    printf("Sorted ");
    Display(Arr , n);
    return 0;
}
