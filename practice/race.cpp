#include <bits/stdc++.h>
using namespace std;



int main()
{
    int N;cin>>N;
    int A[N];
    for(int i=0;i<N;i++)
    cin>>A[i];
    int res=0,max1=INT_MIN;
    for(int i=0;i<N;i++)
    {
        max1=max(A[i],max1);
        if(max1>A[i])
        res++;
    }
    cout<< res;
return 0;
}