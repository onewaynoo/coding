#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
#define ll long long
using namespace std;

int main(){
    ll n,k;
    cin>>n;
    cin>>k;
    vector<ll> arr;
    fr(0,n)
    {
        ll temp;
        cin>>temp;
        arr.push_back(temp);
    }
    vector<vector<ll>> a;
    fr(0,n)
    {
        vector<ll> tem;
       for(int k=0;k<n-i;k++)
       {
           tem.push_back(k);
           tem.push_back(i);
    }
       a.push_back(tem); 
    }

    return 0;
}