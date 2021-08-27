#include <iostream>
using namespace std;

class User
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int UPI, int PIN, int Password); //Declaration
    void getData()
    {
        cout << "The UPI pin of user is " << a << endl;
        cout << "The ATM PIN of user is " << b << endl;
        cout << "The mobile Password of user is " << c << endl;
        cout << "The Account no  of user is " << d << endl;
        cout << "The IFSC code of user is " << e << endl;
    }
};
void User::setData(int UPI, int PIN, int Password)
{
    a = UPI;
    b = PIN;
    c = Password;
}

int main()
{
    User ritik; //--->Declaration of object .
    //ritik. a = 37487;-->This will show error as a is declared as private .
    ritik.setData(420, 9211, 5555);
    ritik.getData();
    ritik.d = 39738983;
    ritik.e = 12321;
    
    return 0;
}