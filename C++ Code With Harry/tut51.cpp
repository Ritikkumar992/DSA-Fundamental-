#include <iostream>
using namespace std;
class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData(void)
    {
        cout << " The real part is " << real << endl;
        cout << " The imaginary part is " << imaginary << endl;
    }
};
int main()
{
/***********Simple Example******************/
    Complex c1;
    c1.setData(1,5);
    c1.getData();

/**********Pointers to Object****************/
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(1,5);
    (*ptr).getData();

/**************Arrow Operator******************/
    Complex *ptr = new Complex;
    //(*ptr).setData(1,5);---> is exactly same as ::
    ptr->setData(1, 5);

    //(*ptr).getData();----> is as good as ::
    ptr->getData();

/***************Array of Objects *******************/
    Complex *ptr1 = new Complex[4];
    ptr1->setData(1, 5);
    ptr1->getData();

    return 0;
}