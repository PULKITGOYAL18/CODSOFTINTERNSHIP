#include <iostream>
#include <string>
using namespace std;
class binary{
    string p;
    public:
    void read(void);
    void check_bin(void);
};
void binary :: read(void){
    cout<<"ENTER A BINARY NUMBER "<<endl;
    cin>>p;
}
void binary :: check_bin(void){
    for(int i=0;i<p.length();i++){
        if(p.at(i)!='0' && p.at(i)!='1'){
            cout<<"NUMBER ENTERED NOT MATCHES THE BINARY FORMAT "<<endl;
            exit(0);
         }
    }
}
int main(){
    binary b;
    b.read();
    b.check_bin();
    return 0;
}