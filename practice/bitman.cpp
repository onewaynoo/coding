#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int getbit(int n, int i)
{
   return((n & (1<<i)) != 0);
}
int setbit(int n, int i)
{
    return (n|(1<<i)); 
}
int clearbit(int n, int i)
{
    return(n&(~(1<<i)));
}
int updatebit(int n, int value, int i)
{
    int x = (n&(~(1<<i)));
    return (x | (value<<i));
}

int main(){
    int n,i;
    cout<<"Enter the number"<<endl;
    cin>>n;
    cout<<"Enter position"<<endl;
    cin>>i;
    cout<<getbit(n,i)<<endl;
    cout<<setbit(n,i)<<endl;
    cout<<clearbit(n,i)<<endl;
    int value;
    cout<<"Enter value to update"<<endl;
    cin>>value;
    cout<<updatebit(n,value,i);

    return 0;
}