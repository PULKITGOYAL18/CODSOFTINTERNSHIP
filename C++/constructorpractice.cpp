#include <iostream>
using namespace std;
class wall{
    double length,height;
    public:
    wall (void);
    void displaydata(){
        cout<<"LENGTH OF WALL IS "<<length <<endl;
        cout<<"HEIGHT OF WALL IS "<<height <<endl;
    }
};
wall :: wall(void){
    length=8000;
    height=10000;
}
int main(){
    wall w1,w2;
    w1.displaydata();
    w2.displaydata();
    return 0;
}