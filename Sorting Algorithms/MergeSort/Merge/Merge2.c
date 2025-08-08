#include<stdio.h>
#include<stdlib.h>

int* merge(int *arr , int n , int *brr , int m)
{
    int *crr = (int * )malloc((m+n) *sizeof(int));

    int i = 0 , j = 0 , k = 0;

    while(i < n && j < m)
    {
        if(arr[i] < brr[j])
        {
            crr[k] = arr[i];
            i++;
            k++;
        }
        else if(brr[j] < arr[i])
        {
            crr[k] = brr[j];
            k++;
            j++;
        }
    }

    while(i < n)
    {
        crr[k] = arr[i];
        i++;
        k++;
    }

    while(j < m)
    {
        crr[k] = brr[j];
        j++;
        k++;
    }

    return crr;

}

int main()
{
    int *Arr = NULL , *Brr = NULL , *crr = NULL , n , m;

    printf("How many number you want to store 1st array : \n");
    scanf("%d",&n);
    printf("How many number you want to store 2nd array : \n");
    scanf("%d",&m);

    Arr = (int *)malloc(n*sizeof(int));
    Brr = (int *)malloc(m*sizeof(int));

    printf("Enter %d numbers to store int 1st Array : \n",n);
    for(int i = 0 ; i< n ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    printf("Enter %d numbers to store int 2nd Array : \n",m);
    for(int i = 0 ; i< m ; i++)
    {
        scanf("%d",&Brr[i]);
    }
    printf("sorted Array is : ");

    crr = merge(Arr, n , Brr , m);
    for(int i = 0 ; i< (m+n) ; i++)
    {
        printf("%d\t",crr[i]);
    }
    



    return 0;
}