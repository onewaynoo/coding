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
    unordered_map<char,int> mp;
    mp.clear();
    string keyboard;
    cin>>keyboard;
    for(auto i=0;i<26;i++)
    {
        char temp= keyboard[i];
        
        mp.insert(pair<char, int>(temp, i+1));
    }

    string ques;
    cin>>ques;
    int ans=0;
    int c=mp.find(ques[0])->second;
    for(int i=1;i<ques.size();i++)
    {
        auto x= mp.find(ques[i]);
        ans+=abs((x->second)-c);
        c=x->second;
    }
    cout<<ans<<endl;
  }
return 0;
}