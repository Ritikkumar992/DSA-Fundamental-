/**************Hybrid Inheritance***************/
#include <iostream>
using namespace std;
/* student--->Test
   student--->sports 
    test ---->result<-----sports
*/
class Student//Here this class become our virtual base class.
{ 
protected:
    int rolL_number;

public:
    void set_number(int a)
    {
        rolL_number = a;
    }
    void print_number(void)
    {
        cout << "Your roll number is " << rolL_number << endl;
    }
};
class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your marks  in "
             << "Maths is " << maths << " and in Physis is" << physics << endl;
    }
};
class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score(void)
    {
        cout << "Your PT Score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "your total score is " << total << endl;
    }
};
int main()
{
    Result ritik;
    ritik.set_number(24);
    ritik.set_marks(94.1, 98.9);
    ritik.set_score(9);
    ritik.display();
    return 0;
}