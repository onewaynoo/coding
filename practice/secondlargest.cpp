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
int arr[] = {12,12,12,6};
int largest=0,second=-1;
for(int i=0;i<5;i++)
{
    if(arr[i]>largest)
    {   
        second=largest;
        largest=arr[i];
        
    }
    else if(arr[i] != largest)
    {
        if(arr[i]>second) second=arr[i];
    }
   
}
 cout<<largest<<" "<<second;
return 0;
}