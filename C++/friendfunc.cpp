#include <iostream>
using namespace std;
class complex{
int a,b;
friend complex sumcomplex(complex p1,complex p2);
public:
      void setdata(int n1,int n2){
        a=n1;
        b=n2;
      }
      void displaydata(){
        cout<<"NUMBERS ARE "<<a <<" + "<<b <<"i";
      }
};
      complex sumcomplex(complex p1,complex p2){
        complex p3;
        p3.setdata((p1.a + p2.a), (p1.b + p2.b));
        return p3;
      }


int main(){
    complex c1,c2,sum;
    c1.setdata(10,20);
    c2.setdata(40,80);
    c1.displaydata();
    c2.displaydata();
    sum=sumcomplex(c1,c2);
    sum.displaydata();
    return 0;
}