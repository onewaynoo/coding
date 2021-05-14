#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

bool palindrome(int n)
{
    int rev=0,x=n;
    while(x)
    {
        int ld=x%10;
        
        rev = rev * 10 + ld;
        x=x/10; 
    }
    return(n==rev);
}

int main(){
    int n;
    cin>>n;
    cout<<palindrome(n);
    return 0;
}