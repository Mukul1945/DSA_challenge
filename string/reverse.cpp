#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    string s[n];

    for(int i=0;i<n;i++){
        cin>>s[i];
    }
    int start=0;
    int end=n-1;
    while(start<end){
        swap(s[start++],s[end--]);
    }
    for(int i=0;i<n;i++){
        cout<<s[i];
    }
    return 0;
}