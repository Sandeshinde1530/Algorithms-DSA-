#include<stdio.h>
#include<stdlib.h>


void Accept(int *ptr ,int n)
{
    printf("Enter %d Numbers: \n" , n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&(ptr[i]));
    }
}

void display(int *ptr ,int n)
{
    printf(" Array elements Are  : \t" , n);
    for(int i = 0 ; i < n ; i++)
    {
        printf("%d\t",(ptr[i]));
    }
    printf("\n");

}

void swap(int Arr[] ,int  i , int j)
{
    int temp = Arr[i];
    Arr[i] = Arr[j];
    Arr[j] = temp;
}

int Partition(int Arr[] , int low , int high)
{
    int pivot = Arr[low];
    int i = low , j = high + 1 ; 

    do
    {
        while (i< high && Arr[i]<= pivot)
        {
            i++;
        } 

        while (Arr[j]>pivot && j > low)
        {
            j--;
        }
        
        if(i<j)
        {
            swap(Arr,i,j);
        }
    }while(i < j);

    swap( Arr,low,j);
    return j;
}

void QuickSort(int Arr[] , int l , int h)
{
    int j = 0;
    if(l < h)
    {
        j = Partition(Arr ,l , h);

        QuickSort(Arr , l , j);
        QuickSort(Arr , j+1 , h);
    }
}


int main()
{
    int *Arr = NULL , n = 0;

    printf("How many Numbers you want to store : ");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));

    Accept(Arr , n);
    printf("Unsorted Elements\n");
    display(Arr , n);

    printf("Sorting Array..........\n");
    QuickSort(Arr , 0 , n - 1);
    
    printf("Sorted Array:\n");
    display(Arr , n);

    return 0;
}