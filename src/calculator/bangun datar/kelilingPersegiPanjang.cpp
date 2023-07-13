#include <iostream>

using namespace std;
void clrscr()
{
    cout << "\033[2J\033[0;0H";
}

int main()
{

    int panjang, lebar;
    clrscr();
    cout << "Masukan panjang sisi: ";
    cin >> panjang;
    cout << "Masukan lebar sisi: ";
    cin >> lebar;

    clrscr();
    cout << "Keliling Persegi Panjang " << endl;
    cout << "==========================" << endl;
    cout << "Panjang: " << panjang << " cm" << endl;
    cout << "Lebar: " << lebar << " cm" << endl;
    cout << "Keliling: ";
    cout << 2 * (panjang + lebar) << " cm";

    cout << "\n\n";
    return 0;
}
