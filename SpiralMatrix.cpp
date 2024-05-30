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
    int minr=0,minc=0;
    int maxr=r-1,maxc=c-1;
    while(minc<=maxc && minr<<maxr){
        for(int j=minc;j<=maxc;j++){
            cout<<arr[minr][j]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc)break;
        for(int i=minr;i<maxr;i++){
            cout<<arr[i][maxc];
        }
        minc--;
         if(minr>maxr || minc>maxc)break;
        for(int j=0;j>=minc;j--){
            cout<<arr[maxr][j]<<" ";
        }
        maxr--;
         if(minr>maxr || minc>maxc)break;
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
         
    }
}