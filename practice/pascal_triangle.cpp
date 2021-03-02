#include "bits/stdc++.h"
using namespace std;
void printpascal(int n)
{
 for(int i=1;i<=n;i++)
 {
     int curr=1;
     for(int j=1;j<=i;j++){
         cout<<curr<<" ";
         curr = curr*(i-j)/j;
        
     }
     cout<<"\n";
 } 
}
int main(){
    int n; cin>>n;
    printpascal(n);
}