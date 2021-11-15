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
    int input1,input2,input3,input4,input5;
    cin>>input1>>input2>>input3>>input4>>input5;

    int i1=input1, i2=input2, i3=input3, i4=input4, i5=input5;

    int maxstable=INT_MIN,minunstable=INT_MAX;

    int arr[5]={0,0,0,0,0};
    int i;

    i=0;
    while(input1)
    {
        arr[0] ^= input1 % 10 ; 
        input1=input1/10;
        i++;
    }
    if(arr[0]==0 || i<=2)
    maxstable = maxstable>i1?maxstable:i1;
    else
    minunstable = minunstable<i1?minunstable:i1;
    

    i=0;
    while(input2)
    {
        arr[1] ^= input2 % 10 ; 
        input2=input2/10;
        i++;
    }
    if(arr[1]==0 || i<=2)
    maxstable = maxstable>i2?maxstable:i2;
    else
    minunstable = minunstable<i2?minunstable:i2;

    i=0;
    while(input3)
    {
        arr[2] ^= input3 % 10 ; 
        input3=input3/10;
        i++;
    }
    if(arr[2]==0 || i<=2)
    maxstable = maxstable>i3?maxstable:i3;
    else
    minunstable = minunstable<i3?minunstable:i3;

    i=0;
    while(input4)
    {
        arr[3] ^= input4 % 10 ; 
        input4=input4/10;
        i++;
    }
    if(arr[3]==0 || i<=2)
    maxstable = maxstable>i4?maxstable:i4;
    else
    minunstable = minunstable<i4?minunstable:i4;

    i=0;
    while(input5)
    {
        arr[4] ^= input5 % 10 ; 
        input5=input5/10;
        i++;
    }
    if(arr[4]==0 || i<=2)
    maxstable = maxstable>i5?maxstable:i5;
    else
    minunstable = minunstable<i5?minunstable:i5;

    return (maxstable+minunstable);


    
return 0;
}