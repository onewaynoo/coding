#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    int a,b,i=1;
    cin>>a>>b;
    if(a<b){
    while((a*i) % b != 0)
    i++;
    cout<<(a*i);}
    else
    {
    while((b*i) % a != 0)
    i++;
    cout<<(b*i);}

    return 0;
}