#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    int n,cost= 0;
    cout<<"Enter the number of ropes"<<endl;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> minh;
    cout<<"Enter the size of each rope"<<endl;
    fr(0,n)
    {int temp;
        cin>>temp;
        minh.push(temp);
    }

    
    while(minh.size()>1)
    {
        int first = minh.top();
        minh.pop();
        int second = minh.top();
        minh.pop();
        cost += first+second;
        minh.push(first+second);
    }
    cout<<"MIN cost is: "<<cost;
    return 0;
}