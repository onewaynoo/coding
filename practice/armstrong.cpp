#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    //armstrong number are those number if you take cube of all digits and add them you will get the same digits
    int n,temp=0,temp2=0,result=0;
    cin>>n;
    temp2=n;
    while(n)
    {
        temp = n%10;
         n /= 10;
         result += temp*temp*temp; 
    }
    if(temp2==result)
    {
        cout<<"armstrong number";
    }
    else
    cout<<"not armstrong";
    return 0;
}