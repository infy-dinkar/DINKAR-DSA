#include<iostream>
using namespace std;
string dtob(int n){
    string result="";
    while(n>0){
        if(n%2==0){
            result='0'+result;
        }
        else{
            result='1'+result;
        }
        n=n/2;
    }
return result;
}
int main(){
    dtob(13);
}