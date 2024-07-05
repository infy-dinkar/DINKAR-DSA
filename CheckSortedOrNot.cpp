#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
bool flag=true;
    int arr[5]={2,3,4,5,6};
        for(int j=0;j<5;j++){
            if(arr[j]>arr[j+1]){
            flag=false;
            break;
        }
    }
    
    if (flag==false)cout<<"NOT SORTED";
    else cout<<"sorted";
    


}