#include<iostream>
using namespace std;

int OrderedListSearch(int *Arr , int n , int key)
{
    int i = 0;
    int Sentinel = Arr[n-1];
    int compCount = 0;

    if(Sentinel < key)
    {
        cout<<"Comparison Count :"<<compCount<<endl;
        return -1;
    }

    while(Arr[i] != Sentinel && key > Arr[i])
    {
        compCount++;
        i++;
    }
    cout<<"Comparison Count :"<<compCount<<endl;

    if(Arr[i] == key)
    {
        return i;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int *Arr = NULL , n = 0 , key = 0;

    cout<<"How many Numbers You want to store:\n";
    cin>>n;

    Arr = new int[n];

    cout<<"Enter"<<n<<"NUmbers :"<<endl;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>Arr[i];
    }

    cout<<"Enter Key to search : \n";
    cin>>key;

    int iRet = OrderedListSearch(Arr , n , key);
    if(iRet == -1)
    {cout<<"Not Found"<<endl;}
    else
    {cout<<"Found At Position :"<<iRet<<endl;}


    return 0;
}