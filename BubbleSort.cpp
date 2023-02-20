#include<bits/stdc++.h>
using namespace std;
//Bubble Sort Program 
int main()
{

    int n;
    cin>>n;
    int Arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>Arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                swap(Arr[j],Arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<Arr[i];
    }
    
}