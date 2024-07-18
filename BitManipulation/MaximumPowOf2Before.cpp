#include<iostream>
using namespace std;
void Max_Pow(int n){
    int temp;
    while(n!=0){
        temp=n;
        n=n&(n-1);
    }
    cout<<temp;
}
int main(){
    Max_Pow(24);
}