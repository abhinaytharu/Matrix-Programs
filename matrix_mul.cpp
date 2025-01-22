#include <iostream>
using namespace std;

int main() {
    int row1, col1, row2, col2;

    cout << "Enter rows and columns of the first matrix:" << endl;
    cin >> row1 >> col1;

    cout << "Enter rows and columns of the second matrix:" << endl;
    cin >> row2 >> col2;

    if (col1 != row2) {
        cout << "Matrix multiplication is not possible. Columns of the first matrix must equal rows of the second matrix." << endl;
        return 1;
    }

    int great = max(row1, row2);

    int arr1[row1][col1], arr2[row2][col2], mul[row1][col2];

    cout << "Enter elements of the first matrix:" << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> arr1[i][j];
        }
    }

    cout << "Enter elements of the second matrix:" << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> arr2[i][j];
        }
    }

    // Matrix multiplication
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            mul[i][j] = 0;
            for (int k = 0; k < col1; k++) {
                mul[i][j] += arr1[i][k] * arr2[k][j];
            }
        }
    }
    cout<<endl;
    // Display all matrices in a formatted table
    for (int i = 0; i < great; i++) {
        // Print the first matrix
        if (i < row1) {
            for (int j = 0; j < col1; j++) {
                cout << arr1[i][j] << "\t";
            }
        } else {
            for (int j = 0; j < col1; j++) {
                cout << "\t";
            }
        }

        // Print separator 'X' for multiplication
        if (row1 % 2 == 0 && i == great / 2 - 1) {
            cout << "x\t";
        } else if (row1 % 2 != 0 && i == great / 2) {
            cout << "x\t";
        } else {
            cout << "\t";
        }

        // Print the second matrix
        if (i < row2) {
            for (int j = 0; j < col2; j++) {
                cout << arr2[i][j] << "\t";
            }
        } else {
            for (int j = 0; j < col2; j++) {
                cout << "\t";
            }
        }

        // Print separator '=' for result
        if (row1 % 2 == 0 && i == great / 2 - 1) {
            cout << "=\t";
        } else if (row1 % 2 != 0 && i == great / 2) {
            cout << "=\t";
        } else {
            cout << "\t";
        }

        // Print the resultant matrix
        if (i < row1) {
            for (int j = 0; j < col2; j++) {
                cout << mul[i][j] << "\t";
            }
        } else {
            for (int j = 0; j < col2; j++) {
                cout << "\t";
            }
        }

        cout << endl;
    }

    return 0;
}
