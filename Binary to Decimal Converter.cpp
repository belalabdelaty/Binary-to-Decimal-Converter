#include <bits/stdc++.h>
using namespace std;


int BinaryNumberFun(string Number) {
	int Power = Number.length() - 1;
	int Result = 0, i = 0;
	/*
	for (int p = 0; p < Number.length();p++) {
		if (Number[p] != '0' || Number[p] != '1') {
			"please check the binary number again ;";
		}
	}
	  while (true) {
		if (Number[i] == '0' || Number[i] == '1') {
			break;
		}
		else {
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Please Enter A Valid Binary Numer\n";
		}
	}*/
	while (Power >= 0) {

		if (Number[i] == '1') {
			int TrueNumber = Number[i] - '0';
			Result = pow(2, Power) + Result;
		}
		i++;
		Power--;
	}
	
	return Result;

};

int main()
{
	string BinaryNumber;
	char Answer;

	do {
		cout << "Enter the binary number : ";

		cin >> BinaryNumber;


	
		cout << "the decimal number is : " << BinaryNumberFun(BinaryNumber);
		cout << "\nDo You Want To Do Another Operation?   [y/n]\n";
		
		while (true) {
			cin >> Answer;
			if (Answer == 'y' || Answer == 'n') {
				break;
			}
			else {
			
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				cout << "Please Enter chose [y/n]\n";
				
				
			}
		}
		getchar();
		system("cls");
	} while (Answer == 'y');

	cout << "GOOD BYE :)";




}

