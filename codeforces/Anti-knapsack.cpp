#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=k/2+n-k;
        cout<<ans<<endl;
        for(int i=1;i<=k/2;i++)
            cout<<k-i<<" ";
        for(int i=k+1;i<=n;i++)
            cout<<i<<" ";
            if(ans!=0)
        cout<<endl;
    }
}