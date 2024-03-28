#include <iostream>
using namespace std;

int arr[20];
int cmp_count = 0;	//number of compatasion
int mov_count = 0;	//number of data movements
int n;

void input() {
	while (true) {
		cout << "masukan panjan elemen array: ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;

	}

	cout << "\n----------------------" << endl;
	cout << "\nenter array element" << endl;
	cout << "\n----------------------" << endl;

	for (int i = 0; i < n; i++) {
		cout << "<" << (i + 1) << ">";
		cin >> arr[i];
	}
}






int main() {

}