#include<iostream>
#include<string>
#include<cstdio>

using namespace std;
int main() {
	int count = 0;
	string sent;
	cout << "write a sentence:" << endl;
	getline(cin, sent);
	for (int i = 0; i <= sent.size(); i++) {
		if (sent[i] == ' ') {
			count++;
			if (sent[i + 1] == ' ') {
				i++;
			}
		}
	}
	count++;
	cout <<"Total number of words in this sentence is "<< count << '\n';



	system("pause");
	return 0;
}