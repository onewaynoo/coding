#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int kthsmallest (int *arr,int n, int k)
{
    priority_queue<int> maxh;
    fr(0,n)
    {
        maxh.push(arr[i]);
        if(maxh.size()>k)
        maxh.pop();
    }
return maxh.top();
}

int main(){
    cout<<"Enter the size of array:"<<endl;
    int n,sum = 0;
    cin>>n;
    cout<<"Enter the value of k1:"<<endl;
    int k1; cin>>k1;
    cout<<"Enter the value of k2:"<<endl;
    int k2; cin>>k2;
    cout<<"Enter the array:"<<endl;
    int arr[n];
    fr(0,n)
    {
        cin>>arr[i];
    }
    k1 = kthsmallest(arr,n,k1);
    k2 = kthsmallest(arr,n,k2);
    fr(0,n)
    {
        if(arr[i]>k1&&arr[i]<k2)
        sum += arr[i];
    }
    cout<<"sum is : "<<sum;
    return 0;
}