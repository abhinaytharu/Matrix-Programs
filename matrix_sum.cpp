#include <iostream>
using namespace std;

int main() {
    int row,col;
    int arr1[10][10];
    int arr2[10][10];

    cout<<"enter row and coloumn"<<endl;
    cin>>row>>col;

    cout<<"enter elements of fisrt array"<<endl;
    // first array input
    for(int i = 0 ; i<row; i++ ){
        for(int j = 0; j<col; j++){
            cin>>arr1[i][j];
        }
    }
    cout<<"enter elements of second array"<<endl;
    // second array input
    for(int i = 0 ; i<row; i++ ){
        for(int j = 0; j<col; j++){
            cin>>arr2[i][j];
        }
    }
    cout<<endl;
    // array show 
    for(int i = 0 ; i<row; i++ ){
        for(int j = 0; j<col; j++){
            cout<<arr1[i][j]<<"\t";
        }
    // For even row sizes, print '+' only on one row
        if (row % 2 == 0 && i == row / 2 - 1) {
        cout << "+\t";
    }
    // For odd row sizes, print '+' only on the middle row
        else if (row % 2 != 0 && i == row / 2) {
        cout << "+\t";
    }
    // For other rows, print a blank space
        else {
        cout << "\t";
    }
        for(int j = 0 ; j<col; j++){
            cout<<arr2[i][j]<<"\t";
        }

        
        if (row % 2 == 0 && i == row / 2 - 1) {
        cout << "=\t";
    }
    // For odd row sizes, print '+' only on the middle row
        else if (row % 2 != 0 && i == row / 2) {
        cout << "=\t";
    }
    // For other rows, print a blank space
        else {
        cout << "\t";
    }

        for(int j = 0; j<col; j++){
            cout<<(arr1[i][j] + arr2[i][j])<<"\t";
        }
        cout<<endl;
    }



    
    
    return 0;
}