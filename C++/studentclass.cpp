#include <iostream>
#include <string>
using namespace std;
class student{
    string name;
    string id;
    double rno;
    string address;
    public:
    void read(void);
    void display(void);
};
void student :: read(void){
    cout<<"ENTER THE STUDENT NAME "<<endl;
    cin>>name;
    cout<<"ENTER THE STUDENT ID "<<endl;
    cin>>id;
    cout<<"ENTER THE STUDENT ROLL NUMBER "<<endl;
    cin>>rno;
    cout<<"ENTER THE STUDENT ADDRESS "<<endl;
    cin>>address;
}
void student :: display(void){
    cout<<"NAME OF STUDENT IS "<<name<<endl;
    cout<<name<<" ID IS "<<id<<endl;
    cout<<name<<" ROLL NUMBER IS "<<rno<<endl;
    cout<<name<<" ADDRESS IS "<<address<<endl;
}
int main(){
    student s;
    s.read();
    s.display();
    return 0;
}