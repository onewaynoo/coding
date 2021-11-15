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
     vector<int> vx;
	  int n;
	  cin>>n;
	  for(int i=0; i<n; i++){
	      int xx;
	      cin>>xx;
	      vx.push_back(xx);
	  }
	  sort(vx.begin(), vx.end());
	  for(int i=n-1; i>=1; i--){
	      vx[i] = vx[i]-vx[i-1];
	  }
	  sort(vx.begin(), vx.end());
	  cout<<vx[n-1]<<endl;
  }
return 0;
}