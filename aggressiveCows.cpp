#include <bits/stdc++.h>
using namespace std;

bool blackbox(int dist,vector<int> arr, int n, int cows)
{
	int coord = arr[0], cnt = 1;
	for(int i=1;i<n;i++)
	{
		if(arr[i]-coord >= dist)
		{
			cnt++;
			coord=arr[i];
		}
		if(cnt==cows)return true;
	}
	return false;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n,c;
		cin>>n>>c;
		vector<int> arr(n);
		for(int i=0;i<n;i++)cin>>arr[i];
		
        int ans=INT_MIN;

		sort(arr.begin(),arr.end());
		int low=1;
		int high = arr[n-1]-arr[0];
		
		while(low<=high)
		{
			int mid = low + (high-low)/2;
			if(blackbox(mid,arr,n,c))
			{
				low=mid+1;
			}
			else
			{
				high = mid-1;
			}
		}
		cout<<high<<endl;
		
	}
	return 0;
}