#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }

    int r2, c2;
    cin >> r2 >> c2;
    // Ensure the dimensions match for matrix addition
    if (r != r2 || c != c2) {
        cout << "Matrices dimensions do not match for addition" << endl;
        return 1; // Return with error code
    }

    int brr[r2][c2];
    for (int i = 0; i < r2; i++){
        for (int j = 0; j < c2; j++){
            cin >> brr[i][j];
        }
    }

    // Perform the addition of the two matrices
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            arr[i][j] = arr[i][j] + brr[i][j];
        }
    }

    // Print the resulting matrix
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
