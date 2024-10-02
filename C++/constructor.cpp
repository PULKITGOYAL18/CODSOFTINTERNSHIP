#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    complex(void);
    void displaydata(){
        cout<<"NUMBER IS "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex :: complex(void){
    a=100;
    b=200;
}
int main(){
    complex c1,c2,c3;
    c1.displaydata();
    c2.displaydata();
    c3.displaydata();
    return 0;
}