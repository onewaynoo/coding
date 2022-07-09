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

bool blackbox(int a[],int n, int par,int mid)
{
    int time=0;
    int paratha=0;
    for(int i=0;i<n;i++)
    {
        time=a[i];
        int j=2;
        while(time<=mid)
        {
            paratha++;
            time+=a[i]*j;
            j++;
        }
        if(paratha>=par) return true;
    }
    return false;
}


int main()
{
fast();
tc{
    int paratha;
    cin>>paratha;
    int n;
    cin>>n;
    int a[n];
    for (int i = 0;i<n;i++)cin>>a[i];
    int low = 0;
    int high = 1e8;
    int ans = 0;
    while(low<=high)
    {
        int mid = low+(high-low)/2;
        if(blackbox(a,n,paratha,mid))
        {
            ans = mid;
            high = mid-1;
        }
        else low = mid+1;
    }
    cout<<ans<<endl;
    
  }
return 0;
}