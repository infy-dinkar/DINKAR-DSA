#include<iostream>
using namespace std;
int oddSum(int a,int b){
    if(a>b) return 0;
    if(a%2!=0) return(a+oddSum(a+2,b));
    return oddSum(a+1,b);
}
int main(){
    oddSum(2,12);
}