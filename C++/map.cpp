#include <iostream>
#include <map>
#include <string>
using namespace std ;
int main(){
    map<string , float> salary ;
    salary["Pulkit"]=900000;
    salary["Priyadarshni"]=950000;
    salary["Rahul"]=100000;
    salary. insert({{"Kapil",200000},{"Aarohi",800000}});
    map<string,float>::iterator itr;
    for(itr=salary.begin(); itr!=salary.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<endl;
    }
    return 0;
}