#include<iostream>
using namespace std;

int main(){
    long long int m,n,a,x,y;
    cin>>m>>n>>a;
    m%a==0?x=m/a:x=m/a+1;
    n%a==0?y=n/a:y=n/a+1;
    cout<<x*y;
    return 0;
}