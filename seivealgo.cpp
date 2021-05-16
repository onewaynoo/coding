#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

void sieve(int n)
{
    vector<bool> isprime(n+1, true);
    for(int i=2; i<=n; i++)
    {
        if(isprime[i])
        {
            cout<<i<<" ";
            for(int j=i*i;j<=n;j=j+i)
            {
                isprime[j]=false;
            }
        }
    }

}

int main(){
    int n;
    cin>>n;
    sieve(n);
    return 0;
}