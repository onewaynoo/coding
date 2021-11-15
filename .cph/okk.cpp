#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define rep(i,ini,n) for(ll i=ini;i<(int)n;i++)
#define all(x) x.begin(),x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define tc   int tt; cin>>tt; while(tt--)
#define gcd __gcd
#define inf INT_MAX
#define ninf INT_MIN
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define PI 3.14159265358979323846264
const ll M =1e9+7;
const int N = 1e6+7;


int main()
{
    int input1,input2,input3;
    cin>>input1>>input2>>input3;

    int tens= (input2 / 10) % 10;
    int hundred=((input1 / 100) % 10)%10;
    

    int ma=0, i=0;
    while(input3)
    {
      
       ma= ma>input3 % 10 ? ma : input3 % 10 ; 
        input3=input3/10;
        i++;
    }

    cout<<(hundred*tens)*ma;

    
return 0;
}