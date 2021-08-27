#include<bits./stdc++.h>
using namespace std;
class Student{
    protected:
    int roll_number;
    public:
    void set_roll_number(int r){
        r = roll_number;
    }
    void get_roll_number(){
        cout<<"Your roll number is "<<roll_number<<endl;
    }
};
class Exam:public Student{
    protected:
    float mathsMarks;
    float phyMarks;
    public:
    void set_marks(float m1, float m2){
        m1 = mathsMarks;
        m2 = phyMarks;
    }
    void get_marks(){
       cout<<"Your marks in Maths is "<<mathsMarks<<endl;
       cout<<"Your marks in Physics is "<<phyMarks<<endl;
    }

};
class Result:public Exam{
    float percentage;
    public:
    void dispaly(){
        get_roll_number();
        get_marks();
        cout<<"Your result is "<<(mathsMarks+phyMarks)/2<<" % "<<endl;
    }
};
int main(){
    Result ritik;
    ritik.set_roll_number(11);
    ritik.set_marks(95.45,91.34);
    ritik.dispaly();
    return 0;
}             