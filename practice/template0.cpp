#include<iostream>
using namespace std;

template <class x>
x big(x a, x b)
{
    if(a>b)
    return a;
    else 
    return b;
}

int main(){
    cout<<big(30,40)<<endl;
    cout<<big(2.5,5.6);
    return 0;
}