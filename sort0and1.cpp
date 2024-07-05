#include<bits/stdc++.h>
using namespace std;
#include<vector>
void sort0and1(vector<int> &v){
    int n=v.size();
    int n0=0;
    int n1=1;
    for(int i=0;i<n;i++){
        if (v[i]==0){
            n0++;
        }
        else{
            n1++;
        }
    }
    for(int i=0;i<n;i++){
        if (i<n0){
            v[i]=0;
        }
        else{
            v[i]=1;
        }
    }
}
    

    int main() {
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    sort0and1(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }



    }

