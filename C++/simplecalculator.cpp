#include <iostream>//FIRST PROGRAM FOR CODSOFT INTERNSHIP MADE SIMPLE CALCULATOR USING SWITCH STATEMENTS BY PULKIT GOYAL 
using namespace std;
int main(){
    char op; //char used to store characters like(a-z) and symbols like $,*,+,-,/ etc
    double a;
    cout<<"Enter The Value Of First Number "<<endl;
    cin>>a;
    double b;
    cout<<"Enter The Value Of Second Number "<<endl;
    cin>>b;
    double result;//storing the result of operators
    cout<<"Enter The Operator(+,-,*,/) "<<endl;
    cin>>op;
    switch(op) {
        case '+':
        result=a+b;
        cout<<"Addition Of Two Numbers Are "<<result<<endl;
        break;
        case '-':
        result=a-b;
        cout<<"Subraction Of Two Numbers Are "<<result<<endl;
        break;
        case '*':
        result=a*b;
        cout<<"Multiplication Of Two Numbers Are "<<result<<endl;
        break;
        case '/':
        if(b!=0){
            result=a/b;
            cout<<"Division Of Two Numbers Are "<<result<<endl;
        }else{
            cout<<"Divsion By Zero Enter Other Value Of Second Number "<<endl;
        }
        break;
        default:
        cout<<"Error Please Enter The Correct Operator "<<endl;
        break;
    }
    return 0;
}