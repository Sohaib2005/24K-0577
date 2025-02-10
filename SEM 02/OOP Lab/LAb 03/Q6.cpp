#include<iostream>
using namespace std;

class Matrix {    
    public:
        int rows, cols;
        int **mat;

        Matrix(int r, int c) {
            rows = r;
            cols = c;
            mat = new int*[rows];
            for (int i = 0; i < rows; i++) {
                mat[i] = new int[cols]; 
            }             
        }
};

int main(int argc, char *argv[]) {
    int r, c, count = 3;
    r = stoi(argv[1]);
    c = stoi(argv[2]);

    int **resMat = new int*[r];
    for (int i = 0; i < r; i++) {
        resMat[i] = new int[c];
    }

    Matrix matrix[2] = {Matrix(r, c), Matrix(r, c)};
    
    for (int k = 0; k < 2; k++) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                matrix[k].mat[i][j] = stoi(argv[count++]);            
            }                        
        }    
    }

    if (matrix[0].rows == matrix[1].rows && matrix[0].cols == matrix[1].cols) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                resMat[i][j] = matrix[0].mat[i][j] + matrix[1].mat[i][j];
            }                    
        }    

        cout << "AFTER ADDITION:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << resMat[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Matrices cannot be added because of different dimensions\n";
    }

    if (matrix[0].cols == matrix[1].rows) {
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                resMat[i][j] = 0;
            }
        }

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                for (int k = 0; k < matrix[0].cols; k++) {                
                    resMat[i][j] += matrix[0].mat[i][k] * matrix[1].mat[k][j];
                }
            }
        }

        cout << "AFTER MULTIPLICATION:\n";
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                cout << resMat[i][j] << " ";
            }
            cout << "\n";
        }
    } else {
        cout << "Matrices cannot be multiplied due to invalid dimensions\n";
    }
    
    return 0;
}
