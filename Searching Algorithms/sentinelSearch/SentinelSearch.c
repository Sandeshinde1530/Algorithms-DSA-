#include<stdio.h>
#include<stdlib.h>

int SentinelSearch(int *Arr , int n , int key)
{
    int i = 0;

    Arr[n] = key;

    while(Arr[i] != key)
    {
       i++; 
    }

    if(i == n)
    {
       return -1; 
    }
    else
    {
        return i;
    }


}

int main()
{
    int *Arr = NULL , n = 0 , key = 0 ,  iRet = 0;

    printf("How many Numbers you want to store : \n");
    scanf("%d",&n);

    Arr = (int *)malloc(n*sizeof(int));

    printf("Enter %d numbers\n",n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter Key to search :\n");
    scanf("%d",&key);

    iRet = SentinelSearch(Arr , n , key);
    if(iRet == -1)
    {
        printf("Element is not found\n");
    }
    else
    {
        printf("Element is found at position : %d\n",iRet);
    }

    return 0;
}