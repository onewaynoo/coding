#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int pow(int x,int n)
{
    if (n==0)
    return 1;

    int temp = pow(x,n/2);
    temp = temp*temp;
    if(n%2==0)
    return temp;
    else
    return x*temp;
}

int main(){
    int x,n;
    cin>>x>>n;
    cout<<pow(x,n);
    return 0;
}