#include <iostream>

using namespace std;

int main() {
	int t;
	cin >>t;
	for(int y=0;y<t;y++)
	{
		int n,k,i,temp;
		cin>>n>>k;
	int a[n];
	for(int k=0;k<n;k++)
	cin>>a[k];

	for(int j=1;j<=k;j++)
	{
		temp= a[n-1];
		for(i=n-1;i>0;i--)
		{
			a[i]= a[i-1];
		}
		a[i] = temp;
	}

	for(int k=0;k<n;k++)
	cout<<a[k]<<" ";
	cout<<endl;
	}
	}


