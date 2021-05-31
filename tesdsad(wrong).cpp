#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,p,toy;
        cin>>n>>p>>toy;
        if(n==p & n==toy)cout<<1;
        else if(p>toy)
        {
            if(toy==0) cout<<0;
            else 
            cout<<toy+1;
        }
        else if(p<toy)
        {
            if(p==0) cout<<0;
            else 
            cout<<p+1;
        }
    }
    return 0;
}