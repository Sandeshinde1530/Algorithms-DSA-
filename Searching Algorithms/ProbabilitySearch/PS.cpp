//8.46 Mins
#include<iostream>
using namespace std;

int ProbabilitySearch(int *Arr , int n , int key)
{
    int i = 0;
    int temp = 0;

    for(i = 0 ; i < n ; i++)
    {
        if(Arr[i] == key)
        {
            if(i != 0)
            {
                temp =Arr[i];
                Arr[i] = Arr[i - 1];
                Arr[i-1] = temp;
            }
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

    int iRet = ProbabilitySearch(Arr , n , key);
    if(iRet == -1)
    {cout<<"Not Found"<<endl;}
    else
    {cout<<"Found At Position :"<<iRet<<endl;}

     iRet = ProbabilitySearch(Arr , n , key);
    if(iRet == -1)
    {cout<<"Not Found"<<endl;}
    else
    {cout<<"Found At Position :"<<iRet<<endl;}

     iRet = ProbabilitySearch(Arr , n , key);
    if(iRet == -1)
    {cout<<"Not Found"<<endl;}
    else
    {cout<<"Found At Position :"<<iRet<<endl;}


    return 0;
}