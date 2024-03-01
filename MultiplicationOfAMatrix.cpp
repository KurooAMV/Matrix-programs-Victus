#include<iostream>
using namespace std;
int main(){
    int n1,n2,m1,m2;
    cout<<"Enter the number of rows and columns in the first matrix: ";
    cin>>n1>>m1;
    cout<<"Enter the number od rows and columns in the second matrix: ";
    cin>>n2>>m2;
    if(m1==n2){
        int arr1[n1][m1], arr2[n2][m2];
        cout<<"Enter the elements of the first matrix: "<<endl;
        for(int i=0; i<n1; i++){
            for(int j=0; j<m1; j++){
                cin>>arr1[i][j];
            }
        }
        cout<<"Enter the elements of the second array: "<<endl;
        for(int i=0;i<n2;i++){
            for(int j=0; j<m2;j++){
                cin>>arr2[i][j];
            }
        }
        int res[n1][m2];
        for(int i=0;i<n1;i++){
            for(int j=0; j<m2; j++){
                res[i][j]=0;
            }
        }

        int mul[n1][m2];
        for(int i=0; i<n1;i++){
            for(int j=0; j<m2; j++){
                for(int k=0; k<m1;k++){
                    res[i][j]+=arr1[i][k]*arr2[k][j];
                }
            }
        }
        cout<<"The multiplication of the two arrays is: "<<endl;
        for(int i=0; i<n1;i++){
            for(int j=0;j<m2;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Matrix multiplication not possible as column no. of first marix is not equal to row no. of second matrix.";
    }
    return 0;
}