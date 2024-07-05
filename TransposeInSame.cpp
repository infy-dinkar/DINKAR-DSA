#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    int c;
    cin>>r>>c;
    int arr[r][c];
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    for(int i=0;i<r;i++){
        for(int j=i+1;j<c;j++){
                int temp=arr[i][j];
                arr[i][j]=arr[j][i];
                temp=arr[j][i];
                }
            
            
        
    
    cout<<endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
            
        }
        cout<<endl;
    }
}
}