#include <iostream>
using namespace std;

void clrscr()
{
	cout << "\033[2J\033[0;0H";
}

void lanjut()
{
	cout << "\n\n";
	cout << "Tekan enter untuk melanjutkan...";
	cin.ignore();
	getchar();
}

int main()
{
	double num1, num2;
	int op;

	cout << "Selamat datang di program kalkulator sederhana C++ dengan menu, urutan input yang berbeda, dan loop\n";

	bool exit = false;
	while (!exit)
	{
		clrscr();
		cout << "Pilih operator yang ingin Anda gunakan:\n";
		cout << "1. Penjumlahan (+)\n";
		cout << "2. Pengurangan (-)\n";
		cout << "3. Perkalian (*)\n";
		cout << "4. Pembagian (/)\n";
		cout << "5. Modulus (%)\n";
		cout << "0. Keluar\n";
		cout << "Masukkan nomor pilihan Anda: ";

		cin >> op;
		if (op == 0)
		{
			exit = true;
			break;
		}

		cout << "\n";
		cout << "Masukkan angka pertama: ";
		cin >> num1;
		cout << "Masukkan angka kedua: ";
		cin >> num2;

		double result;
		string tipe;
		int intNum1 = 0;
		int intNum2 = 0;

		switch (op)
		{
		case 1:
			tipe = "+";
			result = num1 + num2;
			break;
		case 2:
			tipe = "-";
			result = num1 - num2;
			break;
		case 3:
			tipe = "*";
			result = num1 * num2;
			break;
		case 4:
			if (num2 == 0)
			{
				cout << "Error: Tidak bisa membagi dengan nol\n";
				continue;
			}
			else
			{
				tipe = "/";
				result = num1 / num2;
			}
			break;
		case 5:
			tipe = "%";
			intNum1 = static_cast<int>(num1);
			intNum2 = static_cast<int>(num2);
			result = intNum1 % intNum2;
			break;
		default:
			clrscr();
			cout << "Error: Pilihan tidak valid\n";
			lanjut();
			continue;
		}

		cout << "Hasil operasi " << num1 << " " << tipe << " " << num2 << " = " << result << "\n";
		lanjut();
	}

	cout << "Terima kasih...\n";

	return 0;
}
