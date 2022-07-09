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
int n;
vector<int> A(n);
for(int i=0;i<n;i++)cin>>A[i];
 sort(A.begin(),A.end());
    int x=2;
    int ans=A[0];
    int troops=0;
    bool visited[A.size()];
    memset(visited,0,sizeof(visited));
    visited[0]=1;
    while(x<A.size())
    {
       for(int j=1;j<A.size();j++)
       {
           if(!visited[j])
           if(A[j]%x==0)
           {
               ans+=A[j]/x;
               visited[j]=1;
               x++;break;
           }
       }
    }
    cout<<ans;

return 0;
}