#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    int n,k;
    cout<<"Enter the number of points"<<endl;
    cin>>n;
    cout<<"Enter the value of k"<<endl;
    cin>>k;
    vector<vector<int>> points;
    cout<<"Enter the coordinates"<<endl;
    fr(0,n)
    {
        vector<int> temp;
        int x,y;
       
            cin>>x;
            cin>>y;
            temp.push_back(x);
            temp.push_back(y);
        
        points.push_back(temp);
    }

    priority_queue<pair<int,pair<int,int>>> maxh;
    fr(0,n)
    {
        maxh.push({(points[i][0]*points[i][0] + points[i][1]*points[i][1]), {points[i][0],points[i][1]}});
        if(maxh.size()>k)
        maxh.pop();
    }
    cout<<k<<" closest points to origin are:"<<endl;
    while(maxh.size())
    {
        pair<int,int> p = maxh.top().second;
        cout<<p.first<<" "<<p.second<<endl;
        maxh.pop();
    }
    return 0;
}