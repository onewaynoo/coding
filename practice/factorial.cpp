#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int fact(int n){
    if(n==0||n==1)
    return 1;
    else 
    return (n*fact(n-1));
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n);
    return 0;
}