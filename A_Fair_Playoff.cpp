#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

string fair(int a[4]){
    int max1=0,max2=0;

for(int i = 0; i < 4; i++)
    {
        
       if (a[i] > max1)
       {
           max2 = max1;
           max1 = a[i];
       }
        
       else if (a[i] > max2 &&
                a[i] != max1)
       {
           max2 = a[i];
       }
    }


    vector<int> final(2);
    if(a[0]>a[1])
    final.push_back(a[0]);
    else
    final.push_back(a[1]);
    if(a[2]>a[3])
    final.push_back(a[2]);
    else
    final.push_back(a[3]);

    sort(final.begin(), final.end(), greater<int>());

    // fr(0,2)
    // cout<<final[i]<<" ";
    // cout<<max1<<max2;


    if(final[0]==max1 & final[1]==max2)
    return "YES";
    else 
    return "NO";


}

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int a[4];
        fr(0,4)
        cin>>a[i];
        cout<<fair(a)<<endl;
    }
    return 0;
}