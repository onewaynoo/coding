#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

ll findlcm(int arr[], int n)
{
    ll ans = arr[0];
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}

int main()
{
    fast();
    int input[11];
  	int i=0;
 	while(cin>>input[i])i++;
     int size=i;
    
    int mi = INT_MAX;
    for(int j=0;j<size;j++)
    {
        mi=min(mi,input[j]);
    }
    int lcmarr[size-1];
    for(int i=0,j=0;i<size-1;i++)
    {
        if(input[i]==mi)
        {
            continue;
        }
        else
        {
            lcmarr[i]=input[j];
            j++;
        }
    }


    ll lc = findlcm(lcmarr,size-1);
   
    
    ll ans=lc+mi;
    if(ans%2==0)cout<<"None"<<endl;
    else cout<<lc+1<<endl;
  

return 0;
}