#include<bits/stdc++.h>
using namespace std;

int main(){
    // Characeter Array initization
    char arr[100] = "apple";
    int i= 0;
    while(arr[i]!='\0'){
        cout<<arr[i]<<" ";
        i++;
    }
    //Taking input and output .
    char arr[100];
    cin>>arr;
    cout<<arr<<endl;
    cout<<arr[2];
    
    //Qns1.--->Check Palindrome..?[Nitin->Nitin].
    int n; cin>>n;
    char arr[n+1];
    cin>>arr;

    bool check = 1;
    for(int i = 0;i<n;i++){
        for(arr[i] != arr[n-i-1]){
            check =0;
            break;
        }
    } 
    if(check){
        cout<<"Palindrome\n";
    }
    else{
        cout<<"Not a palindrome "<<endl;
    }
    return 0;
}
//Qns2.Largest word in a sentance.
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    cin.ignore();
    char arr[n+1];

    cin.getline(arr,n);
    cin.ignore();

    int i = 0;
    int currlen = 0, maxlen = 0;
    int st = 0, mxst = 0;
    while(1)
    {
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(currlen > maxlen){
                maxlen = currlen;
            }
            currlen = 0;
            st = i+1;
        }
        else
        currlen ++;
        if(arr[i] == '\0');
            break;

        i++;
    }
    cout<<maxlen<<endl;
    for(int i = 0;i<maxlen;i++){
        cout<<arr[i+mxst];
    }
    return 0;
}