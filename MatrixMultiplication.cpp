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
    int r2,c2;
    cin>>r2>>c2;
    int arr2[r2][c2];
    for (int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>arr2[i][j];
        }
    }
    for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cout<<arr2[i][j]<<" ";
            
        }
        cout<<endl;
    }
    if (c!=r2){
        cout<<"multiplication is not possible.";
    }
    else{
         int res[r][c2];
         for (int i=0;i<r;i++){
            for(int j=0;j<c2;j++){
                res[i][j]=0;
                for(int k=0;k<c;k++){
                    res[i][j]+=arr[i][k]+arr2[j][k];
                }
            }

         }
         for(int i=0;i<r;i++){
            for(int j=0;j<c2;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
         }

    }

    
}