#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int right=maze(sr,sc+1,er,ec) ;
    int down=maze(sr+1,sc,er,ec);
    return right+down;
}
int main(){
    cout<<maze(0,0,2,2);
    return 0;
}