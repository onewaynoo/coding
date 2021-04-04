// #include "bits/stdc++.h"
// using namespace std;
// void printpascal(int n)
// {
//  for(int i=1;i<=n;i++)
//  {
//      int curr=1;
//      for(int j=1;j<=i;j++){
//          cout<<curr<<" ";
//          curr = curr*(i-j)/j;
        
//      }
//      cout<<"\n";
//  } 
// }
// int main(){
//     int n; cin>>n;
//     printpascal(n);
// }

//another method

#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int fact(int n){
    if(n==0||n==1)
    return 1;
    else 
    return (n*fact(n-1));
}

int main(){
    int m;
    cin>>m;
    fr(0,m)
    {
        for(int j = 0; j<=i; j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }
        cout<<endl;
    }
    return 0;
}