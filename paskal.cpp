#include <iostream>
using namespace std;
int main()
{
	int i, j, n;
	int A[100][100];
	cout << "Enter number of rows ";
	cin >> n;

	for (i = 0; i < n; i++) {
		for (j = 0; j <= i; j++) {
			
			if (j == 0 || i == j)
				A[i][j] = 1;
			else
				A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
			cout << A[i][j] << "  ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}