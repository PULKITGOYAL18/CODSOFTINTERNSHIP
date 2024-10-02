#include <iostream>
#include <windows.h>
#include <string>
using namespace std;
void print_task(string t[],int cnt){
    cout<<"work to do "<<endl;
    for(int i=0;i<=cnt;i++){
        cout<<"WORK "<<i<<" : "<<t[i]<<" ";
    }
}
int main() {
    system("color a");
    string t[10]={" "};
    //counter variable to know the number of task we have
    int cnt=0;
    int option=-1;
    while(option!=0){
        // for making main menu of program
        cout<<"----TO DO LIST----"<<endl;
        cout<<"1---TO ADD A WORK---"<<endl;
        cout<<"2---TO VIEW THE CURRENT WORKS---"<<endl;
        cout<<"3---TO DELETE A WORK---"<<endl;
        cout<<"0---TO END THE PROGRAM---"<<endl;
        cin>>option;
        switch(option){
            case 1:
            if (cnt>9){
                cout<<"***TASK LIST IS FULL***"<<endl;
            }else{
                cout<<"ENTER A NEW WORK  "<<endl;
                cin.ignore();
                getline(cin,t[cnt]);
                cnt++;
                cout<<t<<endl;
            }
                break;
                case 2:
                print_task(t,cnt);
                break;
                case 3:
                int del;
                cout<<"ENTER WORK TO DELETE "<<endl;
                cin>>del;
                if(del<0 || del>9){
                    cout<<"YOUR ENTERED NO OF WORK IS INVALID "<<endl;
                }else{
                    for(int j=del;j<cnt;j++){
                        t[j]=t[j+1];
                    }
                    cnt--;
                    break;
                    case 0:
                    cout<<"-*-*-*-END THE PROGRAM-*-*-*-"<<endl;
                    break;
                    default:
                    cout<<"ENTERED AN INVALID OPTION "<<endl;
                
            
        }
    }
    return 0;
}
}