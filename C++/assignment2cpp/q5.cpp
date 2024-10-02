#include <iostream>
using namespace std;
int fib(int n){
    if(n==0||n==1){
        return 1;
    }else {
        return fib(n-1)+fib(n-2);
    }
}
int main(){
    int n;
    cout<<"ENTER THE NUMBER OF TERMS "<<endl;
    cin>>n;
    cout<<"FIBONNACI SERIES "<<endl;
    for(int i=0;i<n;i++){
        cout<<fib(i)<<" ";
    }
    cout<<endl;
    return 0;
}