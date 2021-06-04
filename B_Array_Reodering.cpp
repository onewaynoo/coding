#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
    return a;
    else
    return gcd(b, a%b);
}

// int function(vector<int> a, int gcd)
// {   int good=0;
//     for(int i=0;i<a.size();i++)
//     {
//         for(int j=0;j<a.size();j++)
//         {  
//             if(1<=i & i<j & j<=a.size() & 1 < gcd(a[i], 2*a[j]);)
//             good++;
//         }
//     }
//    return good;
// }

int main(){
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       
       cin>>n;
       int arr[n];
       int a=0;
       int b=n-1;
       int brr[n];
       for(int z=0; z<n; z++)
       {
           cin>>arr[z];
           if(arr[z]%2==0)
           {
               brr[a]=arr[z];
               a++;

           }
           else{
               brr[b]=arr[z];
               b--;
           }
       }
       

       int good=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
                    if(gcd(brr[i], 2*brr[j]) > 1)
                    good++;
        }
 
    
   }
   cout<<good<<endl;
   }
   
    return 0;
}