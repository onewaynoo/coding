#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

int main(){
    int n;
    cin>>n;
    while(n--)
    {
        int size;
        cin>>size;
        vector<int> arr;
        for(int i=0;i<size;i++)
        { int temp;
             cin>>temp;
             
            arr.push_back(temp);
            
        }
        // for(int i=0;i<arr.size();i++)
        // {
        //     cout<<arr[i]<<" ";
        // }
    vector<int> temp;
        for(int j=1;j<=size;j++)
        {   
            
            if(j<size){
                if(arr[j-1] != arr[j])
            {
                temp.push_back(j);
            }
            }

            
            else if(j=size){
                if( arr[j-1] != arr[j-2] )
            {
                temp.push_back(j);
            }
            }
            
        }
        if(temp.size()>1)
        cout<<temp[1]<<endl;
        else
        cout<<temp[0]<<endl;
    }
    return 0;
}