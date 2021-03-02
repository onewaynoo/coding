// class template with default parameters
#include<iostream>
using namespace std;

template<class x=int, class y=float>
class ankit{
    public:
    x data1;y data2;
    ankit(x a,y b){
        data1= a;
        data2= b;
    }
    void display(){
        cout<<data1<<endl<<data2;
    }
};

int main(){
    ankit<float,int> a(5.01,5.1);//if data type not supplied than it would be of default which is int and float earlier decleared.
    a.display();
    return 0;
}