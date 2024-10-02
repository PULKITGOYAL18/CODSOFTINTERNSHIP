#include <iostream>
using namespace std;
int main(){
    int students;
    cout<<"enter the number of students "<<endl;
    cin>>students;
    int sub;
    cout<<"enter the number of subjects "<<endl;
    cin>>sub;
    int arr[students][sub];
    for(int i=0;i<students;i++){
        cout<<"enter the marks of students "<<i <<endl;
        for(int j=0;j<sub;j++){
            cout<<"enter the marks of subjects "<<j <<endl;
            cin>>arr[i][j];
        }
    }
    cout<<"RESULT IS "<<endl;
    for(int i=1;i<=students;i++){
        for(int j=1;j<=sub;j++){
            cout<<"marks of student "<<i <<"in subject "<<j <<"are "<<arr[i][j]<<endl;
        }
        float sum=0;
        for(int j=1;j<=sub;j++){
            sum=sum+arr[i][j];
        }
        float avg;
        avg=sum/sub;
        cout<<"the average marks of student "<<i <<"is"<<avg <<endl;
    }
    return 0;
}