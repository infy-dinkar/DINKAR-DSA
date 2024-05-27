#include<bits/stdc++.h>
using namespace std;
#include<vector>
void display(vector<int> &a){
    for(int i=0;i<a.size();i++){
        cout<<a[i];
    }
    cout<<endl;
}

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    display(v);
    int i,j=0;
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    display(v);
    return 0;

    
    

}