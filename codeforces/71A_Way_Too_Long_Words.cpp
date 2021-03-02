#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<string> store;
  for(int j=0;j<n;j++)
   { 
   string temp;
   cin>>temp;
   store.push_back(temp);
   } 
    for(int i=0;i<store.size();i++)
    { int x=store[i].size();
      if(x>10)
      {
        cout<<store[i][0]<<x-2<<store[i][x-1];
        cout<<endl;
      }
      else
      cout<<store[i]<<endl;
    }
    
    return 0;
}