/*Задана матрица A=(aij) , i=1..n, j=1..m, (n,m<=100). Элементы матрицы натуральные
числа Построить матрицу В, в которой элемент b(i,j) равен сумме элементов i-ой
строки и j-го столбца, т. е. той строки и столбца , на пересечении которых он
находится. */
#include <iostream>
using namespace std;
int main() {
	srand(time(NULL));
	int n, m;
	cin >> n >> m;
	int a[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[i][j] = rand() % 100;
			cout << a[i][j] << " ";
		}
		cout << '\n';
	}
	cout << '\n';
	int b[100][100];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int sum = 0;
			for (int row = 0; row < n; row++) {
				sum += a[row][j];
			}
			for (int col = 0; col < m; col++) {
				sum += a[i][col];
			}
			b[i][j] = sum;
		}
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << b[i][j] << " ";
		}
		cout << '\n';
	}
	return 0;
}