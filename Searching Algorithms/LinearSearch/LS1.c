//6.16 Mins
#include<stdio.h>
#include<stdlib.h>

int LinearSearch(int * Arr , int n , int key)
{
    int i = 0;

    for(i = 0 ; i < n ; i++)
    {
        if(Arr[i] == key)
        {
            break;
        }
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
    int n = 0 , *Arr = NULL , key = 0 , iRet = 0;

    printf("How many numbers you want to store :\n");
    scanf("%d",&n);

    Arr = (int * )malloc(n*sizeof(int));

    printf("Enter %d Numbers : \n" , n);
    for(int i = 0 ; i < n ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter key to search :");
    scanf("%d",&key);

    iRet = LinearSearch(Arr , n , key);
    if(iRet == -1)
    {
        printf("Not Found\n");
    }
    else
    {
        printf("Number Found At Position %d\n",iRet);
    }

    return 0;
}