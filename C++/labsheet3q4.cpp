#include <iostream>
using namespace std;// selection sorting
int main(){
    int n;
    cout<<"ENTER THE SIZE OF ARRAY "<<endl;
    cin>>n;
    int arr[n];
    cout<<"ENTER THE ELEMENTS OF ARRAY "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int p=arr[j];
                arr[j]=arr[i];
                arr[i]=p;

            }
        }
}
cout<<"THE SORTED ARRAY IS "<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}