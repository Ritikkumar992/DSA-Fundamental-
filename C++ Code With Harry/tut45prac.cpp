/*************Hierarchial Inheritace**************/
#include <iostream>
using namespace std;
class Student
{
protected:
    int roll_Number;

public:
    void set_Number(int roll)
    {
        roll_Number = roll;
    }
    void print_Number(void)
    {
        cout << " Your Roll Number is " << roll_Number << endl;
    }
};
class Test : virtual public Student
//class Test : public Student
{
protected:
    float physics, chemistry;

public:
    void set_Marks(float p1, float c1)
    {
        physics = p1;
        chemistry = c1;
    }
    void print_Marks(void)
    {
        cout << " Your physics marks is " << physics << " and Your chemistry marks is " << chemistry << endl;
    }
};
class Sports : virtual public Student
//class Sports :  public Student
{
protected:
    float score;

public:
    void set_Score(float sc)
    {
        score = sc;
    }
    void print_Score(void)
    {
        cout << " Your PT score is " << score << endl;
    }
};
class Result : public Test, public Sports
{
protected:
    float total;

public:
    void display(void)
    {
        total = physics + chemistry + score;
        print_Number();
        print_Marks();
        print_Score();
        cout << " Your Total score is " << total << endl;
    }
};
int main()
{
    Result Babul;
    Babul.set_Number(23);
    Babul.set_Marks(94.0, 91.03);
    Babul.set_Score(8.05);
    Babul.display();

    return 0;
}