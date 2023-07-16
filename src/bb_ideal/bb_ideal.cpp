#include <iostream>
using namespace std;

void clrscr()
{
    cout << "\033[2J\033[0;0H";
}

// Function untuk menghitung berat badan ideal
double hitungBeratBadanIdeal(double tinggi)
{
    const double BERAT_BADAN_IDEAL_PER_CM = 0.9;
    return BERAT_BADAN_IDEAL_PER_CM * (tinggi - 100);
}

int main()
{
    double tinggiBadan;

    clrscr();
    cout << "=== Program Menghitung Berat Badan Ideal ===" << endl;

    cout << "Masukkan tinggi badan (dalam cm): ";
    cin >> tinggiBadan;

    double beratBadanIdeal = hitungBeratBadanIdeal(tinggiBadan);

    cout << "Berat badan ideal Anda adalah: " << beratBadanIdeal << " kg" << endl;
    cout << "============================================" << endl;

    return 0;
}
