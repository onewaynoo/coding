#include<iostream>
using namespace std;

int main(){
    int n,x;
    cin>>n>>x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<n;j++)
    cout<<a[j-x];
    return 0;
}