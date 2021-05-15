#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

void alldivisors(int n)
{
    int i;
    for(i=1;i*i<n;i++)
    {
        if(n%i==0)
        cout<<i<<" ";
    }
    for(;i>=1;i--)
    {
        if(n%i==0)
        cout<<n/i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    alldivisors(n);
    return 0;
}