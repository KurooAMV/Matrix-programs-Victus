#include<iostream>
using namespace std;
//Yahan function mein koisa array pass karte samay uski value constant rehni chahiye
//Either ek global constant declare karke uski size ka matrix create karo
//Varna ek specific index value set kardo
void transpose(int n ,int arr[][100]){
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            if(j>i){
                int temp;
                temp=arr[i][j];
                arr[i][j]=arr[j][i];
                arr[j][i]=temp;
            }
        }
    }
    for(int i=0; i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return;
}
int main(){
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;

    int arr[100][100];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0; j<n;j++){
            cin>>arr[i][j];
        }
    }

    cout<<"Transpose of the matrix is: "<<endl;
    transpose(n, arr);
    return 0;
}