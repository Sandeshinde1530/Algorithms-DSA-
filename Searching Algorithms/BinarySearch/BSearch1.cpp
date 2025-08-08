#include<iostream>

using namespace std;

int BinarySearch(int *Arr , int n , int key)
{
    int high = n-1;
    int mid = 0;
    int low = 0;
    while(low <= high)
    {
        mid = (low + high)/ 2;

        if(Arr[mid] == key)
        {
            break;
        }
        else if(Arr[mid] > key)
        {
            high = mid - 1;
        }
        else if(Arr[mid] < key)
        {
            low = mid + 1;
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
    int n = 0 , *Arr = NULL , key = 0 , iRet = 0;

    cout<<"How Many Numbers You Want to store : "<<endl;
    cin>>n;

    Arr = new int[n];

    cout<<"Enter"<<n<<"Numbers :"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter Key to search :"<<endl;
    cin>>key;

    iRet = BinarySearch(Arr , n , key);
    if(iRet == -1)
    {
        cout<<"Not Found"<<endl;
    }
    else
    {
        cout<<"Found At Position  : "<<iRet<<endl;
    }

    return 0;
}