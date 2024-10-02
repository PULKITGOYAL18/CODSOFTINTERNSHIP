#include <iostream>
using namespace std;//binary search
int main(){
    bool found = false;
    int n=5;
    int arr[5]={10,20,30,40,50};
    int element_to_find;
    cout<<"ENTER THE ELEMENT TO BE SEARCHED "<<endl;
    cin >> element_to_find;
    int low=0;
    int high =n-1;
    int mid;
    while(low <= high){
        mid=(low+high)/2;
        if(arr[mid]==element_to_find){
                found=true;
                cout<<"ELEMENT IS FOUND AT INDEX "<<mid <<endl;
                break;
            }
            else if(arr[mid]<element_to_find){
                low=mid+1;
            }
            else if(arr[mid]>element_to_find){
                high=mid-1;
            }
    }
    if(found==false){
        cout<<"ELEMENT NOT FOUND IN THE ARRAY "<<endl;
    }
    return 0;
}