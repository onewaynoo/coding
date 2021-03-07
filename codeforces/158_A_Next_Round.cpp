#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,b;
    if(cin>>a){
    vector<int> vec,result;
    cin>>b;
    vec.push_back(a);
    vec.push_back(b);
    for(int i=0;i<a;i++)
    {
      int temp;
      cin>>temp;
        vec.push_back(temp);
    }
    for(int j=2;j<2+a;j++)
    {
        if(vec[j]>b&&vec[j]>0)
        result.push_back(vec[j]);    
    }
    cout<<result.size();
    }
    return 0;
}