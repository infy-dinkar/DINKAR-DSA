#include<iostream>
using namespace std;
int main(){
    int x,y,sum;
    cin>>x>>y;
    int*p=&x;
    int*p2=&y;
    int*s=&sum;
    *s=*p+*p2;
    cout<<*s;

}