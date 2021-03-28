#include<bits/stdc++.h>
using namespace std;

void sort_nearly_sorted(int *arr,int n,int k)
{
    priority_queue<int, vector<int>, greater<int>> minh; int j=0;
    for(int i=0;i<n;i++)
    {
        minh.push(arr[i]);
        if(minh.size()>k)
        {
            arr[j]=minh.top();
            minh.pop();
            ++j;
        }
    }
    //for last k elements
    while(minh.size()>0)
    {
        arr[j]=minh.top();
            minh.pop();
            ++j;
    }
   
}
void print(int arr[],int n)
{ 
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;

}

int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    print(arr,n);
sort_nearly_sorted(arr,n,k);
print(arr,n);

    return 0;
}