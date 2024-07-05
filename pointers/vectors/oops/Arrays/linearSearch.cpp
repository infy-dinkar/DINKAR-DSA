#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the value of x-";
    cin>>x;

    int n;

    cout<<"Enter the value of N-";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if (arr[i]==x){
            cout<<arr[i];
        }
        

    }
}