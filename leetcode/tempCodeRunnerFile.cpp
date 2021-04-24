#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n)
        {
            count=count+(n&1);
            n = n>>1;
        }
       return count;
    }
};

int main(){
    int n;
    cin>>n;
    Solution c;
    cout<<c.hammingWeight(5);
    return 0;
}