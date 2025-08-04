#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[] = {2,6,8,9,10};
    int Brr[] = {3,5,11,16,19};
    int Crr[10] = {0};

    int i = 0 , j = 0 , k = 0;

    while(i < 5  && j < 5)
    {
        if(Arr[i] < Brr[j])
        {
            Crr[k] = Arr[i];
            i++;
            k++;
        }
        else if(Brr[j] < Arr[i])
        {
            Crr[k] = Brr[j];
            k++;
            j++;
        }
    }

    while(i<5)
    {
        Crr[k] = Arr[i];
        i++;
        k++; 
    }

    while(j<5)
    {
        Crr[k] = Brr[j];
        j++;
        k++; 
    }

    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d\t",Crr[i]);
    }
    

    return 0;
}