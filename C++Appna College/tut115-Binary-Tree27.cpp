//Set & Multiset in STL.
//1.Set
#include<iostream>
#include<set>
using namespace std;

int main(){
    //code insetion and print.
    set<int> s;
   // set<int,greater<int>> s;--->Used to print in desending order.
    s.insert(1);
    s.insert(2);
    s.insert(2);//duplication is not allowed in set.
    s.insert(3);
    //printing the element in the set.
    for(auto i:s)
       cout<<i<<" ";
       cout<<endl;
    // Another way to do so.
    for(auto i = s.begin(); i != s.end(); i++)
        cout<<*i<<" ";
        cout<<endl;
    //Print in reverse.
    for(auto i = s.rbegin(); i != s.rend();i++)
        cout<<*i<<" ";
     cout<<endl;
    //size of the set.
    cout<<s.size()<<endl;
    
    //Code-Lower/Upper_bound.
    cout<<*s.lower_bound(2)<<"\n";
    cout<<*s.lower_bound(3)<<"\n";
    cout<<*s.upper_bound(3)<<"\n";
    cout<<(s.upper_bound(5) == s.end())<<"\n";

    //code- erase.
    s.erase(2);
    s.erase(s.begin());
    for(auto i:s)
      cout<<i<<" ";
    
    return 0;
}

//2.MultiSet.
#include<iostream>
#include<set>
using namespace std;

int main(){
    //code-Insetion and print.
    multiset<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(5);
    s.insert(5);

    for(auto i:s)
       cout<<i<<" "; 
    cout<<endl;

    //Code-Lower/Upper_bound.
    cout<<*s.lower_bound(2)<<"\n";
    cout<<*s.lower_bound(3)<<"\n";
    cout<<*s.upper_bound(3)<<"\n";
    cout<<(s.upper_bound(5) == s.end())<<"\n";

    //code-size.
    s.size();
    for(auto i:s)
       cout<<i<<" ";

    //code-erase.
    s.erase(3);//--->remove all three.
    s.erase(s.find(3));//--->remove only one three.
    for(auto i:s)
       cout<<i<<" "; 

    return 0;
}
//Unordered Set.
#include<iostream>
#include<unordered_set>
using namespace std;

int main(){
    unordered_set<int> s;
    s.insert(1);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for(auto i:s)
      cout<<i<<" ";
    cout<<"\n";

    s.erase(2);
    s.erase(s.begin());

    for(auto i:s)
       cout<<i<<" ";
    cout<<"\n";
    
    return 0;
}