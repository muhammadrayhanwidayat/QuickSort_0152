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
}






int main() {

}