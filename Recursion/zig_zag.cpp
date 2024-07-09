#include<iostream>
using namespace std;
void zigzag(int n){
    if (n==0) return;
    cout<<1;
    zigzag(n-1);
    cout<<2;
    zigzag(n-1);
    cout<<3;
}
int main(){
    zigzag(3);
}