#include <iostream>
using namespace std;

void digit_name(int n) {
    switch(n) {
        case 1: cout << "one"; break;
        case 2: cout << "two"; break;
        case 3: cout << "three"; break;
        case 4: cout << "four"; break;
        case 5: cout << "five"; break;
        case 6: cout << "six"; break;
        case 7: cout << "seven"; break;
        case 8: cout << "eight"; break;
        case 9: cout << "nine"; break;
        default: cout << "digit error"<<endl; // Print error message and move to the next line
    }
    
}
int main(){
    digit_name(7);
    return 0;

}