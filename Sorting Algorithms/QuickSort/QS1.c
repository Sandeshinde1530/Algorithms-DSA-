#include<stdio.h>
#include<stdlib.h>

int swapCount = 0;

void Accept(int Arr[] , int n)
{
    printf("Enter %d Unsorted numbers : ",n);
    for(int i = 0 ; i<n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
}


void Display(int Arr[] , int n)
{
    printf(" Elements are : ");
    for(int i = 0 ; i<n ; i++)
    {
        printf("%d\t",Arr[i]);
    }
    printf("\n");
}

int partition (int Arr[] , int low , int high)
{
    int pivot = Arr[low];
    int i = low , j = high;
    int temp = 0;
    while(i < j)
    {
        while(Arr[i] <= pivot && i < high)
        {
            i++;
        }
        while(Arr[j] > pivot && j > low)
        {
            j--;
        }
        if(i<j)
        {
            temp = Arr[j];
            Arr[j] = Arr[i];
            Arr[i] = temp;
            swapCount++;
        }
    }
    Arr[low] = Arr[j];
    Arr[j] =  pivot;
    swapCount++;
    return j;
}

void QuickSort(int Arr[] , int low , int high)
{
    int j = 0;

    if(low < high)
    {
        j = partition(Arr , low  , high);
        QuickSort(Arr , low ,j-1);
        QuickSort(Arr , j + 1 , high);
    }
}

int main()
{
    int n = 0 ,*Arr = NULL ;

    printf("Enter how many number you want to store :");
    scanf("%d",&n);

    Arr = (int *)malloc(n*sizeof(int));

    Accept(Arr,n);
    printf("Unsorted");
    Display(Arr , n);

    QuickSort(Arr,0,n-1);

    printf("Sorted");
    Display(Arr , n);
    printf("Swapcount is :%d",swapCount);

    return 0;
}