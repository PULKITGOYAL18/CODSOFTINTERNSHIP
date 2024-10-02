#include <iostream>
#include <string>
using namespace std;
class employee
{
    int id;
    double salary;
    string name;
    static int cnt;

public:
    void setdata(void)
    {
        cout << "ENTER THE NAME OF EMPLOYEE " << endl;
        cin >> name;
        cout << "ENTER THE EMPLOYEE ID " << endl;
        cin >> id;
        cout << "ENTER THE SALARY OF EMPLOYEE " << endl;
        cin >> salary;
        cnt++;
    }
    void getdata(void)
    {
        cout << "NAME OF EMPLOYEE IS " << name << endl;
        cout << "ID OF EMPLOYEE IS " << id << endl;
        cout << "SALARY OF EMPLOYEE IS " << salary << endl;
    }
    static void getcount(void)
    {
        cout << "THE VALUE OF COUNT IS " << cnt << endl;
    }
};
int employee ::cnt;
int main()
{
    employee rahul, pulkit, priyadarshni;

    rahul.setdata();
    rahul.getdata();
    employee ::getcount();

    pulkit.setdata();
    pulkit.getdata();
    employee ::getcount();

    priyadarshni.setdata();
    priyadarshni.getdata();
    employee ::getcount();

    return 0;
}