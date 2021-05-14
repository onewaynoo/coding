#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int factorial(int n)
{
    if(n==0||n==1)
    return 1;
    else
    return n * factorial(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
//iterative soln is better for this