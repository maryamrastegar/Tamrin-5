#include<iostream>
using namespace std;
int main() {
	int m, n;
	cout <<" enter 2 numbers"<<endl;
	cin >> m >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= m; j++) {

			cout << i*j << '\t';

		}

		cout << endl;

	}


	system("pause");
	return 0;
}