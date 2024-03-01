#include<iostream>
using namespace std;

void spiral_traversal(int arr[][100], int n, int m){
    int row_start=0;
    int row_end=n-1;
    int column_start=0;
    int column_end=m-1;

    while(row_start<=row_end && column_start<=column_end){
        // Traverse from left to right
        for(int j=column_start; j<=column_end; j++){
            cout<<arr[row_start][j]<<" ";
        }
        row_start++;

        // Traverse from top to bottom
        for(int i=row_start; i<=row_end; i++){
            cout<<arr[i][column_end]<<" ";
        }
        column_end--;

        // Traverse from right to left
        if(row_start <= row_end){
            for(int j=column_end; j>=column_start; j--){
                cout<<arr[row_end][j]<<" ";
            }
            row_end--;
        }

        // Traverse from bottom to top
        if(column_start <= column_end){
            for(int i=row_end; i>=row_start; i--){
                cout<<arr[i][column_start]<<" ";
            }
            column_start++;
        }
    }
}

int main(){
    // Size of the array
    int n, m;
    cout<<"Enter the rows and columns of the array: ";
    cin >> n >> m;

    // Enter elements of the array
    int arr[100][100];
    cout<<"Enter elements of the array:\n";
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }

    // Traversing spirally
    spiral_traversal(arr, n, m);

    return 0;
}
