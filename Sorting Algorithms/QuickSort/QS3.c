//20.27 Mins 
#include<stdio.h>
#include<stdlib.h>

void Accept(int *Arr  , int n)
{
    printf("Enter %d numbers :\n",n);

    for(int i = 0 ; i < n; i++)
    {scanf("%d",&Arr[i]);}
}

void Display(int *Arr  , int n)
{
    printf("Elements are : \n");

    for(int i = 0 ; i < n; i++)
    {printf("%d\t",Arr[i]);}
    printf("\n\n");

}

int Partition(int *Arr , int low ,int  high)
{
    int pivot = Arr[low] , i = low + 1 , j = high , temp = 0;

    do
    {
        while (Arr[i] <= pivot && i < high)
        {
            i++;
        }

        while (Arr[j]>= pivot && j > low)
        {
            j--;
        } 

        if(i < j)
        {
            temp = Arr[i];
            Arr[i] = Arr[j];
            Arr[j] = temp;
        }
    }while(i < j);

    Arr[low] = Arr[j];
    Arr[j] = pivot;

    return j;
}

void QuickSort(int *Arr , int low , int high)
{
    int j = 0;
    if(low < high)
    {
        j = Partition(Arr,low , high);

        QuickSort(Arr , low , j-1);
        QuickSort(Arr , j + 1 , high);
    }
}

int main()
{
    int n = 0 , *Arr = NULL ;

    printf("Enter How many Numers : ");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));
    Accept(Arr,n);
    printf("Unsorted");
    Display(Arr,n);

    QuickSort(Arr , 0 , n-1);
    printf("Sorted");
    Display(Arr , n);

    return 0;
}