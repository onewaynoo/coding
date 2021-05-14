#include<bits/stdc++.h>

typedef long long ll;

using namespace std;

int main(){

    int t;

    cin>>t;

    while(t--){

        int n;

        cin>>n;

        int price[n];

        for(int i=0;i<n;i++){

            cin>>price[i];

        }

         vector<int> v(n,1);

int j=0;
for(int i=1;i<n;i++)
{
    if(price[i]>=price[i-1])
    {
        j=i;
        while(j>0)
        {
            if(price[i]>=price[j-1])
            {
                v[i]++;
                j--;
            }
            else
            break;
        }
    }
    else
    continue;
}

for(int i=0;i<v.size();i++){

     cout<<v[i]<<" ";

}

cout<<"\n";

    }

    return 0;

}