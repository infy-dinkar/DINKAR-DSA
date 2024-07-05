#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string t="physicswallah";
    string s="phywallahsics";
    sort(t.begin(),t.end());
    sort(s.begin(),s.end());
    if(s==t) cout<<true;
    else cout<<false;

}
