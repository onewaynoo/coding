#include <bits/stdc++.h>
using namespace std;

bool blackbox(int *arr, int n, int height,int m)
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>height) sum += (arr[i]- height);
    }
    if(sum>=m)return true;
    else return false;
}

int32_t main()
{
    int n,m;
    cin>>n>>m;
    int tree[n];
    int ans=0;
    for(int i=0;i<n;i++)cin>>tree[i];
     
     
     
    int high = *max_element(tree,tree+n);
    int low = 0;
    while(low<=high)
    {
        int mid = (high+low)/2;
        if(blackbox(tree,n,mid,m))
        {
            ans = mid;
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<ans;
return 0;
}