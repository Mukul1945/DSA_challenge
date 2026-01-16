#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++){
        cin>>s[n];
    }
   int start=0;
   int end=n-1;
    while(start < end){
        if(s[start++]==s[end--])
        cout<<"string is palindrone"<<endl;
    else{
        cout<<"string is not palindrome"<<endl;
    }
}
    return 0;
}