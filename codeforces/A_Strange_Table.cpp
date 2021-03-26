#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,m,x;
     cin>>n>>m>>x;
     double dn=n, dm=m, dx=x;
     double column1=ceil(x/dn);
     ll row = x%n;
     if(row == 0)
     {
         row = n;
     }
     ll cnt1=(row-1)*m;
    ll cn2 = cnt1+column1;
     cout<<cn2<<endl;
    }
    return 0;
}