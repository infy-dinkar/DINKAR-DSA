#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={1,2,3,4};
    cout<<v.size();
    cout<<v.capacity(); 
    v.resize(8) ;
    cout<<v.size();
    v.push_back(5);
    v.insert(v.begin()+2,10);
    v.pop_back();

}