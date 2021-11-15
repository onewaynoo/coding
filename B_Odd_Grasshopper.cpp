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
fast();
tc{
    ll start,step;
    cin>>start>>step;
    ll ans=start;
    ll k=step;

        step-=step%4;
        while(k!=step)
        {
            step++;
            if(ans%2)ans+=step;
            else ans-=step;
        }
        cout<<ans<<endl;


  }
return 0;
}