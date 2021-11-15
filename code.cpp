#include <bits/stdc++.h>
using namespace std;
#define ll long long
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
    int n,k;
    cin>>n;
    cin>>k;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
            cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
    int high=n-1,low=0;
    while(high>low)
    {
        if(arr[high]+arr[low]==k)break;
        else{
            high--;
            low++;
        }
    }
    if(high<=low)cout<<-1;
    else{
        cout<<high<<" "<<low;
    }

 return 0;
}