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

void merge(int Arr[] , int low , int mid , int high)
{
    int i = low  , j = mid + 1 , k=0 , Brr[20];

    while((i <= mid) && (j <= high) )
    {
        if(Arr[i] < Arr[j])
        {
            Brr[k++] = Arr[i++];
        }
        else
        {
            Brr[k++] = Arr[j++];
        }
    }

    //remaning elements for i
    while (i<=mid)
    {
        Brr[k++] = Arr[i++];
    }
    
    //remaning elements for i
    while(j<=high)
    {
        Brr[k++] = Arr[j++];
    }

    //copying Brr to Arr replacing;
    for(i = low , k = 0;i<=high; i++ , k++)
    {
        Arr[i] = Brr[k];
    }
}

void MergeSort(int Arr[] , int low ,  int high)
{
    int mid;

    if(low < high)
    {
        mid = (low + high )/2;

        MergeSort(Arr , low , mid);
        MergeSort(Arr , mid + 1 , high);
        merge(Arr , low ,mid ,high);
    }

}

int main()
{
    int *Arr = NULL , n = 0;

    printf("How many Numbers you want to store : ");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));

    Accept(Arr , n);
    display(Arr , n);

    printf("Sorting Array..........\n");
    MergeSort(Arr , 0 , n - 1);
    
    printf("Sorted Array:\n");
    display(Arr , n);

    return 0;
}

