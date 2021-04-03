#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<=y; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    bool flag;
    fr(2,sqrt(n))
    {
       if(n%i == 0)
       {
           cout<<"non Prime";
           flag =1;
           break;
       }
    }
    if(flag == 0)
    {
        cout<<"prime";
    }
    return 0;
}