//1.Reverse a string using  recursion.
#include<bits/stdc++.h>
using namespace std;
void reverse(string s){
    if(s.length()==0){ //base case.
        return;
    }
}
int main(){
    string s;
    cin>>s;
    reverse(s);

    return 0;
}
//2.Replace pi with 3.14 in string
#include<bits/stdc++.h>
using namespace std;
void replacePi(string s){
    if(s.length()==0){
        return;
    }
    if(s[0] == 'p' && s[1] == 'i'){
        cout<<"3.14";
        replacePi(s.substr(2));
    }
    else{
        cout<<s[0];
        replacePi(s.substr(1));
    }
}
int main(){
    replacePi("ppipipipipiakdjfjasf");
    return 0;
}
//3.Tower of Hanoi 
#include<bits/stdc++.h>
using namespace std;
void towerOfHanoi(int n, char src,char dest,char helper){
    if(n==0){
        return;  //base case.
    }
    towerOfHanoi(n-1,src,helper,dest);
    cout<<" Move from "<<src<<" to "<<dest<<endl;
    towerOfHanoi(n-1,helper,dest,src);
}
int main(){
    towerOfHanoi(3,'A','C','B');
    return 0;
}
//4.Remove all duplicate from the string.
#include<bits/stdc++.h>
using namespace std;
string removeDup(string s){
    if(s.length()==0){
        return"";
    }
    char ch = s[0];
    string ans = removeDup(s.substr(1));

    if(ch==ans[0]){
        return ans;
    }
    return (ch+ans);
}
int main(){
    cout<<removeDup("aaabbdkdkkdddddeeekkkkffffe");
    return 0;
}
//5.Move all x to the end of the string.
#include<bits/stdc++.h>
using namespace std;
string moveallx(string s){
    if(s.length()==0){
        return"";
    }
    char ch = s[0];
    string ans = moveallx(s.substr(1));

    if(ch == 'x'){
        return ans+ch;
    }
    return ch+ans;
}
int main(){
    cout<<moveallx("axxxxjksjxkxkxxhka");
    return 0;
}
//6.Generate all substrings of a string.
#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
}
int main(){
    subseq("abc","");
    cout<<endl;
    return 0;
}
//7.Generate  substrings with ASCII number.
#include<bits/stdc++.h>
using namespace std;
void subseq(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }
    char ch = s[0];
    int code = ch;
    string ros = s.substr(1);

    subseq(ros,ans);
    subseq(ros,ans+ch);
    subseq(ros,ans+to_string(code));

}
int main(){
    subseq("AB","");
    
    return 0;
}
//8.Print all possible words from phone digits.[Key-Pad_Problem].
#include<bits/stdc++.h>
using namespace std;
string keypadArr[] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s,string ans){
    if(s.length()==0){
        cout<<ans<<endl;
    }
    char ch  = s[0];
    string code = keypadArr[ch-'0'];
    string ros = s.substr(1);
    for(int i = 0;i<code.length();i++){
        keypad(ros,ans+code[i]);
    }
}
int main(){
    keypad("23","");
    return 0;
}