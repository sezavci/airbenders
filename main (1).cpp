#include <iostream>
#include <vector>

using namespace std;

template <typename T>
vector< vector<T> > create_matrix(T x, int rows, int cols)
{
    vector< vector<T> > matrix(rows, vector<T>(cols, x));
    return matrix;
}

int main()
{
    cout << "x değerini girin: ";
    int x;
    cin >> x;

    cout << "Satır sayısını girin: ";
    int rows;
    cin >> rows;

    cout << "Sütün sayısını girin: ";
    int cols;
    cin >> cols;

    vector< vector<int> > matrix = create_matrix(x, rows, cols);

    for (int i = 0; i < matrix.size(); i++)
    {
        for (int j = 0; j < matrix[i].size(); j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
