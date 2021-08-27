#include <iostream>
using namespace std;

class KiranaItem
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << " The item id is " << id <<endl;
        cout << " The item price is " << price << endl;
    }
};
int main()
{
    int size = 3;
    // 1. Daily use Item
    // 2. Stationary Item
    // 3. Hardware Item
    KiranaItem *ptr = new KiranaItem[size];
    KiranaItem *ptrTemp = ptr;
    int p,i;
    float q;
    for (i = 0; i < size; i++ )
    {
        cout << " Enter Id and price of Item is " << i + 1<<endl;
        cin >>p>>q;
        
         }
         for ( i = 0; i <size; i++)
         {
            cout<<" Item number :"<<i+1<<endl;
            ptrTemp->getData();
            ptrTemp++;
         }   
               
    return 0;
}