#include<bits/stdc++.h>
using namespace std;
#include<vector>
vector<int> merge(vector<int> &arr1,vector<int> &arr2){
    int n=arr1.size();
    int m=arr2.size();
    vector<int>res(m+n);
    int i=0;
    int j=0;
    int k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
            res[k]=arr1[i];
            i++;
            k++;
        }
        if(arr2[j]<arr1[i]){
            res[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(i==n){
        while(j<=m-1){
            res[k]=arr2[j];
            j++;
            k++;
        }
    }
    if(j==m){
        while(i<=n-1){
            res[k]=arr1[i];
            i++;
            k++;
        }
    }
    return res;


}
int main(){
    vector<int> v1;
    v1.push_back(1);
    v1.push_back(4);
    v1.push_back(5);
    v1.push_back(8);

    vector<int> v2;
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(6);
    v2.push_back(7);
    v2.push_back(10);
    v2.push_back(12);

    vector<int> v=merge(v1,v2);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

}