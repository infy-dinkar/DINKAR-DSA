#include<iostream>
using namespace std;
int Flipbit( int n){
    int temp;
    while(n!=0){
        temp=n;
        n=n&(n-1);
    }
    temp=temp*2;
    temp=temp-1;
    int res=temp^n;
    return res;
    }
    int main(){
        cout<<Flipbit(23);
    }
