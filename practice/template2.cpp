#include<iostream>
using namespace std;
//CLASS TEMPLATE WITH MULTIPLE PAAMETERS
template<class x , class y>
class myclass{
    public:
    x data1;
    y data2;
myclass(x a, y b){
data1=a;
data2=b;
}
    void display(){
        cout<<this->data1<<endl<<this->data2;
    }
};

int main(){
    myclass<int,float> obj(2,1.2);
    obj.display();
    return 0;
}