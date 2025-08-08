#include<stdio.h>
#include<stdlib.h>

int ProbabilitySearch(int *arr , int key , int n)
{
    int i = 0 , temp = 0;
    for( i = 0 ; i < n ; i++)
    {
        if(key == arr[i])
        {
            if(i != 0)
            {
                temp = arr[i];
                arr[i] = arr[i-1];
                arr[i-1] = temp;
            }
            
            break;
        }
    }
    return i;
}

int main()
{
    int *Arr = NULL , n = 0 , i = 0  , iValue = 0;
    int iRet = -1;

    printf("Enter How many No. to store\n");
    scanf("%d",&n);

    Arr = (int *)malloc(n * sizeof(int));

    printf("Enter %d Elements\n",n);
    for(i = 0 ; i< n ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    printf("Enter Key to Search in Array : \n");
    scanf("%d",&iValue);

    iRet = ProbabilitySearch(Arr , iValue , n);
    printf("Key Found At Position %d\n",iRet);

    iRet = ProbabilitySearch(Arr , iValue , n);
    printf("Key Found At Position %d\n",iRet);

    iRet = ProbabilitySearch(Arr , iValue , n);
    printf("Key Found At Position %d\n",iRet);

    return 0 ;
}