#include <iostream>
using namespace std;

int main() {
	cout << "--------------\n+ : addition\n* : multiplication\n--------------\n";
	
	char op;
	cout << "Select an operator : ";
	cin >> op;

	int matrix1[3][3];
	int matrix2[3][3];
	int matrix3[3][3] = { 0, };

	cout << "input matrix 1 : ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matrix1[i][j];

	cout << "input matrix 2 : ";
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matrix2[i][j];

	switch (op) {
	case '+':
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
		break;
	case '*':
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				for (int k = 0; k < 3; k++)
					matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
		break;
	}

	cout << "Answer : " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << matrix3[i][j] << " ";
		cout << "\n";
	}

}