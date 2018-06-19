#include<iostream>
#include<time.h>
#include"SaveArray.h"
using namespace std;

int division(int a, int b) {
	if (b == 0)
		throw"division by zero";
	else
		return a / b;
}
int main() {
	srand(time(NULL));
	int n;
	cout << "num: ";
	cin >> n;
	switch (n) {


	case 1: {
		int a;
		cin >> a;
		try {
			if (a > 10)
				throw 0.5;
			else if (a == 5)
				throw('x');
			else if (a > 5)
				throw "Unknown error";
			else
				throw 500;
		}
		catch (double d) {
			cout << d << endl;
		}
		catch (char c) {
			cout << c << endl;
		}
		catch (char*str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "Error cannot be handled" << endl;
		}
		cout << "Sucsefull" << endl;
	}break;
	
	case 2: {
		int a, b;
		cin >> a >> b;
		try {
			if (b == 0)
				throw "Division by zero";
			int c = a / b;
			cout << c << endl;
		}
		catch (char* str) {
			cout << str << endl;
		}
			
	}break;
	
	case 3: {
		int a, b;
		cin >> a >> b;
		try {
			int c = division(a, b);
			cout << c << endl;
		}
		catch (char* str) {
			cout << str << endl;
		}
	}break;
		
	case 4: {
		int mas[5],i;
		for (int i = 0;i < 5;i++)
			mas[i] = 0 + rand() % 20;
		cin >> i;
		try {
			if ((i<0) || (i>= 5))
				throw "leave for a limit";
			cout << mas[i] << endl;
		}
		catch(char * str){
			cout << str << endl;
		}
		

	}break;
	
	case 5: {
		SaveArray<int> arr(5);
		try {
			arr[4] = 100;
			arr[12] = 200;
		}
		catch (char *str) {
			cout << str << endl;
		}

	} break;
		
	case 6: {
		int mas[5], i,b;
		for (int i = 0;i < 5;i++)
			mas[i] = 0 + rand() % 20;
		cout << "enter an index:";
		cin >> i;
		cout << "Enter b:";
		cin >> b;
		try {
			if ((i<0) || (i >= 5))
				throw "leave for a limit";
			cout << mas[i] << endl;
			try {
				if (b == 0)
					throw "Division by zero";
				int c = mas[i] / b;
				cout << c << endl;
			}
			catch (char* str) {
				cout << str << endl;
			}
		}
		catch (char * str) {
			cout << str << endl;
		}
		catch (...) {
			cout << "Error cannot be handled" << endl;
		}
	}break;

		

	system("pause");
	return 0;
}