#include<bits/stdc++.h>
using namespace std;

void move(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
        
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];

    move(arr,n); 
    for(int i=0;i<n;i++)
    cout<<arr[i];

    
    
}