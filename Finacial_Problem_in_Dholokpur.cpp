#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int vec[n];
        int result[n];
        fill_n(result, n, 1); //to fill all places with 1
        //vector<int> result(n,1); in case of vector to fill with 1
        fr(0,n)
        {
            cin>>vec[i];
        }

       int j=0;
for(int i=1;i<n;i++)
{
    if(vec[i]>=vec[i-1])
    {
        j=i;
        while(j>0)
        {
            if(vec[i]>=vec[j-1])
            {
                result[i]++;
                j--;
            }
            else
            break;
        }
    }
    else
    continue;
}


     fr(0,n){
     cout<<result[i]<<" ";}

cout<<"\n";
    }
    return 0;
}