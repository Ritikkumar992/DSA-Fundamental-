#include <iostream>
#include <fstream>
/* These are some  useful classes for working with Files in c++ are:
 1. fstreambase---> base class.
 2. ifstream---> derived from fstreambase.(read operation)
 3. ofstream---> derived from fstreambase.(Write operation)
*/

/*In order to work with Files in c++, we have to open it.
 Primarily , there are 2 ways to open a file:
 1. using a constructor.
 2. using the member function open()of the class.
 */

using namespace std;

int main()
{
   string st1 = "Hii  Ritik Srivastav ";
   string st2;
   /*opening files using constructor and writing it.*/
   ofstream out("sample60a.txt"); //Write operator
   out << st1;

   /*Opening files using constructor and reading it*/
   ifstream in("sample60b.txt"); //Read operator
   //in>>st2;
   getline(in, st2);
   cout << st2;
   return 0;
}