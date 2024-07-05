#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,4,5,9,15,18,21,24};
    int target=8;
    int n=9;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if(arr[mid]==target){
            flag=true;
             cout<<arr[mid-1];
        break;
        } 
       
        else if (arr[mid]<target) lo=mid+1;
        else if (arr[mid]>target) hi=mid-1;

    }
    if(flag==false){
        cout<<arr[hi];
    }


    
}