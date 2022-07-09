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
int A=5,B=2;
vector<vector<int>> dp(A,vector<int>(A,1));
    dp[ceil(A/2)][ceil(A/2)]=0;
    while(B--)
    {
        int  i= ceil(A/2)-B;
        int j= ceil(A/2)-B;
        int k=ceil(A/2)+B;
        for(int z=j;z<=k;z++)dp[i][z]=0;
        i= ceil(A/2)+B;
        for(int z=j;z<=k;z++)dp[i][z]=0;
        
        i=ceil(A/2)-B;
        k=ceil(A/2)+B;
        j=ceil(A/2)-B;
        for(int z=i;z<=k;z++)dp[z][j]=0;
        j=ceil(A/2)+B;
        for(int z=i;z<=k;z++)dp[z][j]=0;
    }

    for(int i=0;i<A;i++)
    {
        for(int j=0;j<A;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}