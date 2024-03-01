#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of rows and columns in the matrix: ";
    cin>>n>>m;

    int arr[n][m];
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    
    //Enter the element to be searched
    int key;
    cout<<"Enter the element to be searched: ";
    cin>>key;

    //search the element in the matrix
    int i=0, j=m-1;
    bool present=false;
    while(i<n && j>=0){
        if(arr[i][j]==key){
            present=true;
            break;
        }
        else if(arr[i][j]>key){
            j--;
        }
        else if(arr[i][j]<key){
            i++;
        }
    }
    if(present){
        cout<<"Element found!";
    }
    else{
        cout<<"Element does not exist in the matrix!";
    }

    
    return 0;
}