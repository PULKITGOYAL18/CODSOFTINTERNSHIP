#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int n,guess,chances=0;
    char tryagain;

    srand(static_cast<unsigned int>(time(0)));
    do{
        n = rand() % 100 +1;
        chances =0;
        cout<<"Welcome To Number Guessing Game "<<endl;
        cout<<"System Has Chosen A Random Number Between 1 and 100 "<<endl;
        do {
            cout<<"Enter Your Guess "<<endl;
            cin>>guess;
            chances++;
            if(guess > n){
                cout<<"Your Guessed Number Is Larger Than Actual Number "<<endl;
            }else if (guess < n){
                cout<<"Your Guessed Number Is Smaller Than Actual Number "<<endl;
            }else{
                cout<<"Congrats!! You Have Guessed The Correct Numnber "<<endl;
            }
        }while (guess != n);
        cout<<"Do You Want To Tryagain "<<endl;
        cin>> tryagain;

    }while(tryagain =='y' || tryagain=='Y');
    cout<<"THANKS FOR PLAYING "<<endl;
    return 0;
}