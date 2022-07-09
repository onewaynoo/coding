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


void dfs(vector<int> &nums,vector<int> temp,vector<vector<int>> &ans,int index)
    {
        if(index==nums.size()){ans.push_back(temp);return;}
        for(int i=0;i<nums.size();i++)
        {
            temp.push_back(nums[i]);
            dfs(nums,temp,ans,i+1);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        dfs(nums,temp,ans,0);
        return ans;
    }

int main()
{
fast();
int n;
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++)cin>>arr[i];
vector<vector<int>> ans;

return 0;
}