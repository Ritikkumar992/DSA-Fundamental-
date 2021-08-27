#include <iostream>
using namespace std;

int main()
{
    int AnnualInncome;
    cout << "Inspection of annual Income of Indian Middle Class Family !!! " << endl;
    cout << "Kindly tell the annual Income of your family " << endl;
    cin >> AnnualIncome;
    if (AnnualIncome <= 100000)
    {
        cout << "Your family comes under the category of EWS " << endl;
    }
    else if ((AnnualIncome < 500000) && (AnnualIncome > 100000))
    {
        cout << "Your family comes under the category of average middle class " << endl;
    }
    else if ((AnnualIncome < 1000000) && (AnnualIncome > 50000))
    {
        cout << "Your family comes under the category of Rich Class " << endl;
    }
    else
    {
        cout << "Your family is Elite " << endl;
    }
    
    switch (AnnualIncome)
    {
    case 100000:
        cout << "You are eligible for Ews " << endl;
        break;
    case 500000:
        cout << "You are not eligible for Ews " << endl;
        break;

    default:
        cout << "NO SPECIAL CASE " << endl;
        break;
    }
    return 0;
}