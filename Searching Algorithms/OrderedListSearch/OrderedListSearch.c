#include<stdio.h>
#include<stdlib.h>

int OrderedListSearch(int *Arr , int n , int key)
{
    int i = 0;
    int sentinel = Arr[n-1];

    if(key > sentinel)
        return -1;
    
    while(Arr[i] != sentinel && key > Arr[i])
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
    int n = 0 , *Arr = 0 , key = 0 , iRet = 0;

    printf("How many Numbers You Want To Enter : \n");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));

    printf("Enter the %d Numbers :\n" , n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter the Key to Search : \n");
    scanf("%d",&key);

    iRet = OrderedListSearch(Arr , n , key);
    if(iRet == -1)    
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Key Found At Position %d\n",iRet);
    }


    return 0;
}