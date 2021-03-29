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
    cout<<"Enter value of k"<<endl;
    int k;
    cin>>k;

    unordered_map<int,int> map;
    //creating map for frequency
    fr(0,n)
    {
        map[arr[i]]++;
    }
 //min heap for sorting
 priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
 for(auto i=map.begin(); i != map.end(); i++)
 {
     minh.push({i->second,i->first});
    if(minh.size()>k)
    minh.pop();
 }
 cout<<"Top k frequent numbers are:"<<endl;
 while(minh.size()>0)
 {
     cout<<minh.top().second<<' ';
     minh.pop();
 }
    return 0;
}