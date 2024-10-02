#include <iostream>
using namespace std;
//function declaration
int factorial(int n){// this is also called parameters,formal arguements 
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
//main function starts 
int main() {
    int x=5,z;
    z=factorial(x);// this is function call by refrence aslo called actual arguements 
    cout<<"factorial of "<<x <<" is "<< z<<endl;
    // here n,x,z are local variable because we can access or use them only under one function
    //but if we declare any variable before function then we can access or use them in any part of the program
    return 0;
}