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
        
    }
}

int main(){
    
    return 0;
}