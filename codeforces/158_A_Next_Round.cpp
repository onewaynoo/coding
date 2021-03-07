#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,k,x=0;
    if(cin>>n){
    vector<int> vec;
    cin>>k;
    vec.push_back(n);
    vec.push_back(k);
    for(int i=0;i<n;i++)
    {
      int temp;
      cin>>temp;
        vec.push_back(temp);
    }
    for(int j=2;j<2+n;j++)
    {
        if(vec[j]>=vec[k+2]&&vec[j]>0)
        x++;  
    }
    cout<<x;
    }
    return 0;
}