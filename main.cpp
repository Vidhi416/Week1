#include <iostream>
using namespace std;
int main() {
    int a[10][10], b[10][10], product[10][10];
    int rowsA, colsA, rowsB, colsB;

    
    cout << "Enter the number of rows for matrix A: ";
    cin >> rowsA;
    cout << "Enter the number of columns for matrix A: ";
    cin >> colsA;

    
    cout << "Enter the elements of matrix A:" << std::endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            cin >> a[i][j];
        }
    }

    
    cout << "Enter the number of rows for matrix B: ";
    cin >> rowsB;
    cout << "Enter the number of columns for matrix B: ";
    cin >> colsB;

    
    cout << "Enter the elements of matrix B:" << std::endl;
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            cin >> b[i][j];
        }
    }

    
    if (colsA != rowsB) {
        cout << "Matrix multiplication is not possible because the number of columns in A is not equal to the number of rows in B." << std::endl;
        return 1;
    }

    
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            product[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    
    cout << "The product of the two matrices is:" << std::endl;
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            cout << product[i][j] << " ";
        }
        cout <<endl;
    }

    return 0;
}
