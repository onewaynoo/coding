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
    int n;cin>>n;
    vector<int> power(n);

    for(int i=0;i<n;i++)cin>>power[i];
    int countMin=0,countMin2=0;
   priority_queue<int> maxh;
   for(int i=0;i<n;i++)
   {
       maxh.push(power[i]);
       if(maxh.size()>1)
       {
           maxh.pop();
       }
   }
   priority_queue<int,vector<int>,greater<int>> minh;
   for(int i=0;i<n;i++)
   {
       minh.push(power[i]);
       if(minh.size()>1)
       {
           minh.pop();
       }
   }
    int max = minh.top();
   int min = maxh.top();

   for(int i=0;i<n;i++)
   {
       if(power[i]==min)
       {
           countMin=i;
       }
       else if(power[i]==max)
       {
           countMin2=i;
       }
   }

   int ans=0;
//    int y = std::min(countMin, countMin2)+1;
//    int x = std::max(countMin,countMin2)+1;
   int y = countMin>countMin2?countMin+1:countMin2+1;
   int x = countMin<countMin2?countMin+1:countMin2+1;
 
    int z= y-x;
    y=n-y+1;
    vector<int> bower;
    bower.pb(x);
    bower.pb(y);
    if(z!=0)
    bower.pb(z);
    sort(bower.begin(),bower.end());
    ans=bower[0]+bower[1];
    cout<<ans<<endl;

}
return 0;
}
