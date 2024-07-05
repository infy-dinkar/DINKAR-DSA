#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={6,5,4,3,2,1};
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
}