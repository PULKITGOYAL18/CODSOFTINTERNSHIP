#include <iostream>
using namespace std;
int sum_from_to(int first,int last){
    int sum=0;
    for(int i=first;i<=last;i++){
        sum=sum+i;
    }
    return sum;
}
int main(){
    int a;
    cout<<"enter the starting value "<<endl;
    cin>>a;
    int b;
    cout<<"enter the ending value "<<endl;
    cin>>b;
    cout<<sum_from_to(a,b)<<endl;
    return 0;

}