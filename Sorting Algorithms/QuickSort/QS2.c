//20.13
#include<stdio.h>
#include<stdlib.h>

void Accept(int *Arr , int n)
{
    printf("Enter %d numbers : ",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
}

void Display(int *Arr , int n)
{
    printf("Elements are : ",n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

int partition(int *Arr , int low , int high)
{
    int i = low + 1 , j = high ;
    int pivot = Arr[low] , temp = 0;

    do
    {
        while(i< high && Arr[i]<= pivot)
        {i++;}
        while(j > low && Arr[j]>= pivot)
        {j--;}

        if(i<j)
        {
            temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    } while (i < j);

    Arr[low] = Arr[j];
    Arr[j] = pivot;
    return j;
}

void QuickSort(int *Arr , int low , int high)
{
    int j = 0 ;
    if(low < high)
    {
        j =partition(Arr , low , high);
        QuickSort(Arr, low , j-1);
        QuickSort(Arr , j +1 , high);
    }
}

int main()
{
    int n = 0 ,*Arr = NULL ;

    printf("HOw many elemnets");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));
    Accept(Arr , n);
    printf("Unsorted");
    Display(Arr , n);


    QuickSort(Arr , 0 , n -1);
    printf("Sorted");
    Display(Arr , n);

    return 0;
}