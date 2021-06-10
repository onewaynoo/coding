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


ll countPair(ll arr[], ll n, ll l, ll r) {
    ll cnt = 0;
    ll i = 0,low =n-1,high =n-1;
    while (i < high) {
         low = max(i, low);
         while (low > i && arr[i] + arr[low] >= l) --low;
        while (high > low && arr[i] + arr[high] > r) --high;
        cnt += (high-low);
        ++i;
    }
    return cnt;
}

int main()
{
fast();
tc{
    ll n,l,r;
    cin>>n;
    cin>>l;
    cin>>r;
    ll ar[n];
    for(ll i=0;i<n;i++)cin>>ar[i];
    sort(ar,ar+n);
    ll count =countPair(ar,n,l,r);
    // if(count==0)
    cout<<count<<endl;
    // else
    // cout<<ceil((count/2)-1)<<endl;
     

  }
return 0;
}