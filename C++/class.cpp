#include <iostream>
using namespace std;
int main(){
    class Room{
        public:
        double length;
        double breadth;
        double height;
        double area(){
            return length*breadth;
        }
        double volume(){
            return length*breadth*height;
        }

    };
    Room room1;
    room1.height=400;
    room1.breadth=800;
    room1.length=500;
    cout<<"THE AREA OF ROOM "<<room1.area()<<endl;
    cout<<"THE VOLUME OF ROOM "<<room1.volume()<<endl;
    return 0;
}