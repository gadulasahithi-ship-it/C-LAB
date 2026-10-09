#include <iostream>
using namespace std;
class Matrix
{
private:
int rows, cols;
int **data;
public:
Matrix(int m, int n)
{
rows = m;
cols = n;
data = new int*[rows];
for (int i = 0; i < rows; i++)
{
data[i] = new int[cols];
}
}
Matrix(const Matrix &obj)
{
rows = obj.rows;
cols = obj.cols;
data = new int*[rows];
for (int i = 0; i < rows; i++)
{
data[i] = new int[cols];
for (int j = 0; j < cols; j++)
{
data[i][j] = obj.data[i][j];
}
}
}
void input()
{
cout << "Enter matrix elements:\n";
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
cin >> data[i][j];
}
}
}
void display()
{
for (int i = 0; i < rows; i++)
{
for (int j = 0; j < cols; j++)
{
cout << data[i][j] << " ";
}
cout << endl;
}
}
~Matrix()
{
for (int i = 0; i < rows; i++)
{
delete[] data[i];
}
delete[] data;
}
};
int main()
{
int m, n;
cout << "Enter number of rows and columns: ";
cin >> m >> n;
Matrix A(m, n);
A.input();
cout << "\nOriginal Matrix:\n";
A.display();
Matrix B = A;
cout << "\nCopied Matrix:\n";
B.display();
return 0;
}