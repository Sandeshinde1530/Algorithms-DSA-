//Learning Count SOrt
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

void CountingSort(int *Arr , int n , int k)
{
    int i , c[10] ={0} , b[20];

    for(int i = 0 ; i < n ; i++)
    {
        c[Arr[i]] += 1;
    }
    Display(c , k);

    for(i = 1 ; i<=k ; i++)
    {
        c[i] = c[i] + c[i-1];
    }

    for(i = n-1 ; i >= 0 ; i--)
    {        
        b[c[Arr[i]] - 1] = Arr[i];
        c[Arr[i]] -= 1;
    }


    Display(b , n);
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
