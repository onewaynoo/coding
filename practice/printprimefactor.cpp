#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

void printprimefactor(int n){
    if(n<=1) return;
    for(int i =2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            cout<<i<<" ";
            n/=i;
        }
    }
    if(n>1)
    cout<<n;
}

int main(){
    int n;
    cin>>n;
    printprimefactor(n);
    return 0;
}