#include <iostream>
using namespace std;

int main() {
    int row1,row2,col1,col2;

    cout<<"enter row and coloumn of first matrix"<<endl;
    cin>>row1>>col1;

    cout<<"enter row and coloumn of second matrix"<<endl;
    cin>>row2>>col2;

    int arr1[row1][col1];
    int arr2[row2][col2];
    int mul[row1][col2];


    cout<<"enter elements of fisrt matrix"<<endl;
    // first array input
    for(int i = 0 ; i<row1; i++ ){
        for(int j = 0; j<col1; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter elements of second matrix"<<endl;
    // second array input
    for(int i = 0 ; i<row2; i++ ){
        for(int j = 0; j<col2; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    // array show 1
    cout<<"matrix 1"<<endl;
    for(int i = 0 ; i<row1; i++ ){
        for(int j = 0; j<col1; j++){
            cout<<arr1[i][j]<<"\t";
        }
        cout<<endl;
    }
    // array show 2
    cout<<"matrix 2"<<endl;
    for(int i = 0 ; i<row2; i++ ){
        for(int j = 0; j<col2; j++){
            cout<<arr2[i][j]<<"\t";
        }
        cout<<endl;
    }
    // multiply of matrices
    for(int i = 0 ; i<row1; i++ ){
        for(int j = 0; j<col2; j++){
            mul[i][j] = 0;
            for(int k = 0 ; k < row2;k++){
                mul[i][j] = mul[i][j] + arr1[i][k] * arr2[k][j];
                
            }
        }
    }
    // multiply matrix shown
    cout<<endl<<"Multiplication matrix "<<endl;
    for(int i = 0 ; i<row1; i++ ){
        for(int j = 0; j<col2; j++){
            cout<<mul[i][j]<<"\t";
        }
        cout<<endl;
    }

    


    
    
    return 0;
}