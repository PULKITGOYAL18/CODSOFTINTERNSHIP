#include <iostream>
using namespace std;
bool check(int num)
{
    if (num >= 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int a = 5;
    cout << check(a) << endl;
    int b = -1;
    cout << check(b) << endl;
    return 0;
}