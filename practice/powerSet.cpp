#include<bits/stdc++.h>
#define fr(x,y) for(int i = x; i<y; i++)
using namespace std;

void powerSet(string str)
{
    int n = str.length();
    int powsize = pow(2,n);
    for(int counter = 0; counter<powsize; counter++)
    {
        for(int j=0; j<n; j++)
        {
            if(counter & (1<<j) != 0)
            {
                cout<<str[j];
            }
        } cout<<endl;
    }
}

int main(){
    string n;
    cin>>n;
    powerSet(n);

    return 0;
}
//some string related error/