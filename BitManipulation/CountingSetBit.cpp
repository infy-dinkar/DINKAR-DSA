#include<iostream>
using namespace std;
int Counting_set_bits(int n){
    int count=0;
    while(n>0){
        count++;
        n=(n&(n-1));

    }
return count;
}
int main(){
   cout<< Counting_set_bits(456);
}