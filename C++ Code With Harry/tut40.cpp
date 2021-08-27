#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};
void Student ::set_roll_number(int r)
{
    roll_number = r;
}
void Student ::get_roll_number()
{
    cout << "The roll number of student is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks();
};
void Exam::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void Exam::get_marks()
{
    cout << "The marks obtained in maths are : " << maths << endl;
    cout << "The marks obtained in physics are : " << physics << endl;
}
class Result : public Exam
{
    float percentage;

public:
    void display_display()
    {
        get_roll_number();
        get_marks();
        cout << "Your result is " << (maths + physics) / 2 << "%" << endl;
    }
};
int main()
{
    /*
    Note ::
      If we are inheriting B from A and C from B :[A-->B--->C] then ;
      1. A is the base class for B and B is the base class for C.
      2. A-->B--->C is called inheritace path.
     */
    Result ritik;
    ritik.set_roll_number(24);
    ritik.set_marks(94.1, 91.0);
    ritik.display_display();
    return 0;
}