#include<iostream>
using namespace std;
int main(){
    int arr[9]={8,12,27,31,42,50,67,74,85};
    int target =50;
    int n=9;
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+((hi-lo)/2);
        if (arr[mid]==target) return mid;
        else if (arr[mid]>target) hi=mid-1;
        else if(arr[mid]<target) lo=mid+1;
        else return hi;
    }
    return 0;   
    

}