#include<iostream>
#include<math.h>
using namespace std;

class point{
    int x,y;
    public:
           point( int a, int b){
               x=a;
               y=b;
           }
           void display(){
              cout<<"The point is ("<<x<<", "<<y<<")"<<endl;
           
           }
           friend double distance(point,point);
           
};
double distance(point p1,point p2){
            
              double d= sqrt(pow(p1.x-p2.x,2)+pow(p1.y-p2.y, 2));
               return d;
           }
int main(){
    double x1,x2,y2,y1;
    cout<<"Enter first point"<<endl;
    scanf("%lf %lf",&x1,&y1);
     cout<<"Enter second point"<<endl;
    scanf("%lf %lf",&x2,&y2);

    point p(x1,y1);
    p.display();
    point q(x2,y2);
    q.display();
    double z=distance(p,q);
    cout<<z;
    return 0;
}