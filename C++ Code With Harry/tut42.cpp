/*             ********** EXERCISE ON C++****************
 1. SimpleCalculator- Takes input of 2 number using a utility function and 
     performs +,-,*,/ and display the result using another function.
 2. ScientificCalculator - Takes input of 2 number using a utility function and
     peerforms +,-,*,/ and perform any four scientif operation of your own choice
       and display the result using another function.
 3. Create another class 'HybridCalculator'and inherit it using 2 classes:
 Q1.What type of inheritance are u using?  ---->Multiple Inheritance
 Q2.Which mode of inheritance are u using?---->public SimpleCalculator, public ScientificCalculator
 Q3.Create an object of HybridCalculator and display results of simple and 
            scientific calculator
 Q4. How is code reusability implemented?--->class HybridCalculator: public SimpleCalculator, public ScientificCalculator{

};
*/
#include <iostream>
#include <cmath>
using namespace std;
class SimpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationSimple()
    {
        cout << "The value of a + b is: " << a + b << endl;
        cout << "The value of a - b is: " << a - b << endl;
        cout << "The value of a * b is: " << a * b << endl;
        cout << "The value of a / b is: " << a / b << endl;
    }
};
class ScientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a " << endl;
        cin >> a;
        cout << "Enter the value of b " << endl;
        cin >> b;
    }
    void performOperationScientific()
    {
        cout << "The value of cos(a) and cos(b) is: " << cos(a) << cos(b) << endl;
        cout << "The value of tan(a) and tan(b) is: " << tan(a) << tan(b) << endl;
        cout << "The value of exp(a) and exp(b) is: " << exp(a) << exp(b) << endl;
        cout << "The value of sin(a) and sin(b) is: " << sin(a) << sin(b) << endl;
    }
};
class HybridCalculator : public SimpleCalculator,public ScientificCalculator
{

};
int main()
{
    HybridCalculator calc;
    calc.getDataSimple();
    calc.performOperationSimple();
    calc.getDataScientific();
    calc.performOperationScientific();
    return 0;
}