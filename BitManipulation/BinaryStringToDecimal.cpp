#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=s[i];
        int num=ch-'0';
        result+=num*(1<<(n-i-1));
    }
    cout<<result;
}