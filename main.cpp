//Membuat Program Menginput Angka Faktorial
#include <iostream>

using namespace std;

int main()
{
	int angka, hasil, i;

	cout << "Input Angka : ";
	cin >> angka;

	hasil = 1;
	for (i = 1; i <= angka; i++)
	{
		hasil = hasil * i;
	}
	cout << angka << "! = " << hasil;
	cout << endl;


	system("pause");

	return 0;
}