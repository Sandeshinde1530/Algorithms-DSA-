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

void CountingSort(int Arr[] , int n , int k)
{
    int Brr[20] = {0} ,  Count[20] = { 0};

    for(int i = 0 ; i< n ; i++)
    {
        Count[Arr[i]] += 1;
    }

    for(int i = 1 ; i <= k  ; i++)
    {
        Count[i] = Count[i] + Count[i-1];
    }

    for(int i = n - 1; i >= 0 ; i--)
    {
        Brr[Count[Arr[i]] - 1] = Arr[i];

        Count[Arr[i]] -= 1;
    }

    Display(Brr , n);

}

int main()
{
    int n = 0 , *Arr = NULL , k = 0;

    printf("How many Elements : ");
    scanf("%d",&n);

    Arr = malloc(n * sizeof(int ));

    printf("Enter the Range : ");
    scanf("%d",&k);

    Accept(Arr , n);
    printf("Unsorted ");
    Display(Arr , n);
    
    CountingSort(Arr , n , k);

    return 0;
}
