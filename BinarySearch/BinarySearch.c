#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int * Arr , int n , int key)
{
    int mid , iStart = 0 , iEnd = n - 1 , i = 0;

    i = 0;
    
    while(iStart <= iEnd)
    {
        mid = (iStart + iEnd) / 2;
        if(Arr[mid] == key)
        {
            return mid;
        }
        else if(key > Arr[mid])
        {
            iStart = mid + 1;
        }
        else if(key < Arr[mid])
        {
            iEnd = mid - 1;
        }
        i++;
    }
    return -1;
}

int main()
{
    int n , *Arr , key , iRet = 0;

    printf("How many numbers you want to enter: \n");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));

    printf("enter %d Numbers\n" ,n);
    for(int i = 0 ; i < n ; i++)
    {scanf("%d",&Arr[i]);}

    printf("Enter key to search :\n");
    scanf("%d",&key);

    iRet = BinarySearch(Arr , n , key);
    if(iRet == -1)
    {
        printf("NOt Found\n");
    }
    else
    {
        printf("Key Found At Position %d\n" , iRet);
    }

    return 0;
}