#include <iostream>
using namespace std;//insertion sorting
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        int p=arr[i];
        int j=i-1;
        while(arr[j]>p && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=p;
    }
    cout<<"SORTED ARRAY IS "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}