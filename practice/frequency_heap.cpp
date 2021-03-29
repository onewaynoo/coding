#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    int arr[n];
    
    cout<<"Enter array:"<<endl;
    fr(0,n)
    cin>>arr[i];
     unordered_map<int,int> map;
    //creating map for frequency
    fr(0,n)
    {
        map[arr[i]]++;
    }
    //max heap
    priority_queue<pair<int,int>> maxh;
     for(auto i=map.begin(); i != map.end(); i++)
 {
     maxh.push({i->second,i->first});
    
 }

    while(maxh.size()>0)
    {
        int freq = maxh.top().first;
        int element = maxh.top().second;
        for(int i=1;i<= freq;i++)
        cout<<arr[i]<<" ";
        maxh.pop();
    }
    return 0;
}