#include <iostream>
using namespace std;
class complex;

class calculator{
    public:
    int sum(int a,int b){
        return a+b;
    }
    int sumrealcomplex(complex , complex);
    int sumcompcomplex(complex , complex );
};
class complex{
    friend class calculator;
    int a;
    int b;


    public:
          void setdata(int n1,int n2){
            a=n1;
            b=n2;
          }
          void displaydata(){
            cout<<"THE NUMBER IS "<<a <<" + "<<b<<"i"<<endl;
          }
};
int main(){
    complex p1,p2;
    p1.setdata(10,20);
    p2.setdata(20,40);
    calculator calc;
    int res1=calc.sumrealcomplex(p1,p2);
    cout<<"THE RESULT OF REAL PART OF COMPLEX NUMBER IS "<<res1<<endl;
    int res2=calc.sumcompcomplex(p1,p2);
    cout<<"THE RESULT OF COMPLEX PART OF COMPLEX NUMBER IS "<<res2<<endl;
    return 0;
}