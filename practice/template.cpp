#include<iostream>
using namespace std;
 
 template< class x>
 class vecto{
  
     public:
     x * arr;
     int size;
     vecto(int m)
     {
         size = m;
         arr = new x[size];
     }
     x dotProduct(vecto &v){
         x d = 0;
         for(int i=0; i<size; i++)
         {
             d += this->arr[i] *  v.arr[i];
         }
     return d;
     }
 };
int main(){
    vecto <float> v1(3);
    v1.arr[0] = 3.4;
    v1.arr[1]=3.6;
    v1.arr[2]=1.5;
    vecto <float> v2(3);
    v2.arr[0] = 1.0;
    v2.arr[1]=0.6;
    v2.arr[2]=1.17;
float a = v1.dotProduct(v2);
cout<<a<<endl;
    return 0;
}