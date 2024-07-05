#include<iostream>
using namespace std;
class Fruit{
public:    
string name;
string color;    
};
int main(){
    Fruit apple;//object of type fruit
    apple.name="apple";
    apple.color="red";
    cout<<apple.name<<"-"<<apple.color<<endl;

    return 0;
}