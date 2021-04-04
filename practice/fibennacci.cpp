#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

void fib(int n)
{
    int t=0,t2=1,next;
    while(n--)
    {
        cout<<t<<endl;
        next = t+t2;
        t=t2;
        t2=next;
    }
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}