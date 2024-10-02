#include <iostream>
using namespace std;//bubble sorting
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int p=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=p;
            }
        }
    }
    cout<<"SORTED ARRAY IS "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}