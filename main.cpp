#include <iostream>
#include <vector>
using namespace std;

int min(vector < vector < int > > martix) {
	int min = martix[0][0];
	for (int i = 0; i < martix.size(); i++) {
		for (int j = 0; j < martix[i].size(); j++) {
			if (martix[i][j], min)
				min = martix[i][j];
		}
	}
	return min;
}


int main() {
	const int rowSize = 4, colSize = 3;
	vector<vector<int> >martix(rowSize, vector<int>(colSize));
	for (int i = 0; i < rowSize; i++) {
		for (int j = 0; j < colSize; j++) {
			cin >> martix[i][j];
		}
	}

	cout << "min: " << min(martix) << endl;

	system("PAUSE");
	return 0;
}