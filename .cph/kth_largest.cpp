#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;



int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> arr;
    for(int i =0; i<n; i++)
    {
        
        for(int j=i; j<n; j++)
        {
        arr.push_back({i,j});

        }
    }

    for(int i=0; i<arr.size();i++)
    {
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return 0;
}