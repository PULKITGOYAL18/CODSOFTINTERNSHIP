#include <iostream>
using namespace std;
float add(int num1, int num2)
{
    int c = num1 + num2;
    return c;
}
float sub(int num1, int num2)
{
    int c = num1 - num2;
    return c;
}
float mul(int num1, int num2)
{
    int c = num1 * num2;
    return c;
}
float divi(int num1, int num2)
{
    int c = num1 / num2;
    return c;
}
int main()
{
    float a;
    cout << "ENTER THE VALUE OF FIRST NUMBER " << endl;
    cin >> a;
    float b;
    cout << "ENTER THE SECOND NUMBER " << endl;
    cin >> b;
    char op;
    cout << "ENTER THE TYPE OF OPERATOR (*,-,+,/) " << endl;
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "ADDITION OF TWO NUMBERS = " << add(a, b) << endl;
        break;
    case '-':
        cout << "SUBRACTION OF TWO NUMBERS = " << sub(a, b) << endl;
        break;
    case '*':
        cout << "MULTIPLICATION OF TWO NUMBERS = " << mul(a, b) << endl;
        break;
    case '/':
        if (b == 0)
        {
            cout << "ERROR DIVISION BY ZERO " << endl;
        }
        else
        {
            cout << "DIVISION OF TWO NUMBERS = " << divi(a, b) << endl;
        }
        break;
    default:
        cout << "PLEASE ENTER THE CORRECT OPERATOR " << endl;
    }
    return 0;
}