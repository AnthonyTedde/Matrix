#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Matrix{
public:
    std::vector<std::vector <int>> A;
public:
    Matrix(int nrow, int ncol){
        A.resize(nrow, std::vector<int>(ncol));
    }
};
void display(std::vector<std::vector<int>> M) {
    for(std::vector<std::vector<int>>::iterator it_row = M.begin(); it_row != M.end(); ++it_row){
        for(std::vector<int>::iterator it_col = it_row->begin(); it_col != it_row->end(); ++it_col){
            cout << *it_col;
        }
        cout << endl;
    }
}


int main() {
    int nrow = 2, ncol = 2;
//    std::vector<std::vector <int>> A(nrow, std::vector<int>(ncol));
    Matrix mat(nrow, ncol);

    cout << "Input matrix:" << endl;
    for (std::vector<std::vector<int>>::iterator it_row = mat.A.begin(); it_row != mat.A.end(); ++ it_row){
        for (std::vector<int>::iterator it_col = it_row->begin(); it_col != it_row->end(); ++ it_col){
            cin >> *it_col;
        }
    }
    display(mat.A);
    return 0;
}