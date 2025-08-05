// 13.22
#include<stdio.h>
#include<stdlib.h>

int BinarySearch(int Arr[] , int n , int key )
{
    int mid = 0;
    int low = 0;
    int high  = n - 1;

    while(low <= high)
    {
        mid = (low + high)/2;

        if(Arr[mid] == key)
            break;
        else if(key > Arr[mid] )
        {
            low = mid + 1;
        }
        else if(key < Arr[mid])
        {
            high = mid - 1;
        }
    }
    if(Arr[mid] == key)
    {
        return mid;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int n = 0 ,  *Arr = NULL , key = 0;

    printf("Enter How many number you wan to store : ");
    scanf("%d",&n);

    Arr = (int *)malloc((n * sizeof(int )));

    printf("Enter %d numbers : ",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter the Key to Search : ");
    scanf("%d",&key);

   int iRet = BinarySearch(Arr , n , key);
   if(iRet == -1)
   {
    printf("Key not Found\n");
   }
   else
   {
    printf("Key Found At position : %d\n",iRet);
   }


    return 0;
}