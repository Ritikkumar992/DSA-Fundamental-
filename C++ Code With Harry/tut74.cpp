#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;

int main()
{
    //Function object (functor): Function wrapped in a class so that it available like an object.
    int arr[] = {1, 34, 4, 3, 78, 88};
    sort(arr, arr + 6);
    sort(arr, arr + 6, greater<int>());
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}