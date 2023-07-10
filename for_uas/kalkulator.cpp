// #include <cstdio>
#include <iostream> 
using namespace std; 

void lanjut(){
    cout << "Tekan enter untuk melanjutkan...";
    cin.ignore();
    getchar();
}

int main() { 
	float a, b; 
	int pilihan;

	menu :
    system("clear");
	cout << "Kalkulator Sederhana C++ " << endl; 
	cout << "Pilihan Menu : " << endl; 
	cout << "1.Penjumlahan (+)" << endl; 
	cout << "2.Pengurangan (-)" << endl; 
	cout << "3.Perkalian   (*)" << endl; 
	cout << "4.Pembagian   (/)" << endl; 
	cout << "5.Keluar\n\n";
	cout << "Silahkan masukkan kode menu : ";
	cin >> pilihan;
	
	switch(pilihan) {
		case 1:
			cout << "Masukkan angka pertama : ";
			cin >> a; 
			cout << "Masukkan angka kedua : ";
			cin >> b;
			cout << "\nHasil penjumlahan dari " << a << " + " << b << " adalah : " << a+b << endl; 
			break;
		
		case 2:
			cout << "Masukkan angka pertama : ";
			cin >> a; 
			cout << "Masukkan angka kedua : ";
			cin >> b;
			cout << "\nHasil pengurangan dari " << a << " - " << b << " adalah : " << a-b << endl; 
			break;

		case 3:
			cout << "Masukkan angka pertama : ";
			cin >> a; 
			cout << "Masukkan angka kedua : ";
			cin >> b;
			cout << "\nHasil perkalian dari " << a << " * " << b << " adalah : " << a*b << endl; 
			break;

		case 4:
			cout << "Masukkan angka pertama : ";
			cin >> a; 
			cout << "Masukkan angka kedua : ";
			cin >> b;
			cout << "\nHasil pembagian dari " << a << " / " << b << " adalah : " << a/b << endl; 
			break;

		case 5:
			cout << "Program selesai" << endl;
			break;

		default:
			cout << "\nMenu Tidak Tersedia...\n" << endl; 
			break;
	}
	
	if (pilihan != 5) {
        lanjut();
		goto menu;
	}
	
	return 0;
}
