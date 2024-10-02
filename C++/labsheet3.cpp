#include <iostream>
using namespace std;//linear search
int main(){
    bool found = false;
    int n;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"ENTER THE VALUE OF KEY "<<endl;
    cin>>key;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            found = true;
            cout<<"ELEMENT IS FOUND AT INDEX "<<i <<" SEARCHED ELEMENT IS "<<arr[i] <<endl;
            break;
        }    
        }
        if(found==false){
            cout<<"ELEMENT NOT FOUND IN THE GIVEN ARRAY "<<endl;
        }
        return 0;
    }