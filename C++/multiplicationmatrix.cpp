#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter The No Of Rows "<<endl;
    cin>>n;
    int m;
    cout<<"Enter The Number Of Columns "<<endl;
    cin>>m;
    int arr[n][m];
    cout<<"Enter The Elements Of Array "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int mul=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            mul=mul*arr[i][j];
        }   
    }
    cout<<"The Multiplication Of Elements Of Array Are "<<mul<<endl;

    return 0;
}