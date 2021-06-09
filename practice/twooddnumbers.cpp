#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

void oddappearing(int arr[], int n)
{
    int XOR=0, res1=0, res2=0;
    for(int i = 0; i<n; i++) XOR = XOR ^ arr[i];
    int ns= XOR & ~(XOR- 1);
    for(int i=0; i<n;i++)
    {
        if((arr[i]& ns) != 0)
            res1 = res1 ^ arr[i];
        else
            res2 = res2 ^ arr[i];
    }
     cout<<res1<<" and "<<res2;
    

}

int main(){
    int n;
    cin>>n;
    int arr[n];
    fr(0,n) cin>>arr[i];
    oddappearing(arr,n);
     return 0;
}