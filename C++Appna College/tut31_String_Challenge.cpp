//Qns1.-->Convert a string either in upper case or in lower case.
#include<bits./stdc++.h>
using namespace std;

int main(){
    string str = "abcdkfdjewfdbd";
    //convert to Upper case

    //cout<< 'a' -'A'<<endl;--->as per our ascii table lower case letter are ahead
    //of upper case letter by 32.so we just need to substract 32 from lower case letter to get our requied characater
    
    for(int i = 0;i<str.size();i++){
        if(str[i]>= 'a' && str[i]<= 'z'){
            str[i] -= 32;
        }
    }
    cout<<str<<endl;

    //Convert to Lower Case.
    for(int i = 0;i<str.size();i++){
        if(str[i]>= 'A' && str[i]<= 'Z'){
            str[i] += 32;
        }
    }
    cout<<str<<endl;

    //Another way to do the same.
    transform(str.begin(),str.end(),str.begin(), ::toupper);
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(), ::tolower);
    cout<<str<<endl;

    return 0;
}
//QNs2.-->Form the biggest number from the numberic string.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "13493619106";
    sort(s.begin(),s.end(),greater<int>()); // --> To print the greatest number.
    sort(s.begin(),s.end(),  less<int>());//----> TO print the smaller number.
    cout<<s<<endl;
    return 0;
}
//Qns3.--->We have given a string we need to print the maximum time occuring character.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string s = "ajfajallsssssdoe";

    int freq[26];
    for(int i = 0;i<26;i++)
      freq[i] = 0;
    for(int i = 0;i<s.size();i++)
      freq[s[i]-'a']++;
    char ans = 'a';
    int maxF = 0;

    for(int i= 0;i<26;i++)
    {
        if(freq[i] >maxF)
        {
            maxF = freq[i];
            ans = i+'a';
        }
    }
    cout<<maxF<<" "<<ans<<endl;
    return 0;
}