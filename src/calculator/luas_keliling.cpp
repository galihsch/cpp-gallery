#include <iostream>
#include <cmath>

using namespace std;

void clrscr()
{
    cout << "\033[2J\033[0;0H";
}

void menuHeader(string name)
{
    cout << "Luas dan Keliling " << name << endl;
    cout << "===================================" << endl;
}

void lanjut()
{
    cout << "\n\n";
    cout << "Tekan enter untuk melanjutkan...";
    cin.ignore();
    getchar();
}

// Menghitung luas dan keliling persegi panjang
void persegiPanjang()
{
    float panjang, lebar;
    clrscr();
    menuHeader("Persegi Panjang");
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;

    float luas = panjang * lebar;
    float keliling = 2 * (panjang + lebar);

    cout << "Luas persegi panjang: " << luas << endl;
    cout << "Keliling persegi panjang: " << keliling << endl;
    lanjut();
}

// Menghitung luas dan keliling lingkaran
void lingkaran()
{
    float jariJari;
    clrscr();
    menuHeader("Lingkaran");
    cout << "Masukkan jari-jari: ";
    cin >> jariJari;

    float luas = M_PI * pow(jariJari, 2);
    float keliling = 2 * M_PI * jariJari;

    cout << "Luas lingkaran: " << luas << endl;
    cout << "Keliling lingkaran: " << keliling << endl;
    lanjut();
}

// Menghitung luas dan keliling trapesium
void trapesium()
{
    float sisiAB, sisiBC, tinggi;
    clrscr();
    menuHeader("Trapesium");
    cout << "Masukkan panjang sisi AB: ";
    cin >> sisiAB;
    cout << "Masukkan panjang sisi BC: ";
    cin >> sisiBC;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    float luas = ((sisiAB + sisiBC) * tinggi) / 2;
    float keliling = sisiAB + sisiBC + (2 * sqrt(pow((sisiBC - sisiAB) / 2, 2) + pow(tinggi, 2)));

    cout << "Luas trapesium: " << luas << endl;
    cout << "Keliling trapesium: " << keliling << endl;
    lanjut();
}

// Menghitung luas dan keliling balok
void balok()
{
    float panjang, lebar, tinggi;
    clrscr();
    menuHeader("Balok");
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    float luasPermukaan = 2 * ((panjang * lebar) + (panjang * tinggi) + (lebar * tinggi));
    float volume = panjang * lebar * tinggi;

    cout << "Luas permukaan balok: " << luasPermukaan << endl;
    cout << "Volume balok: " << volume << endl;
    lanjut();
}

// Menghitung luas dan keliling kubus
void kubus()
{
    float sisi;
    clrscr();
    menuHeader("Kubus");
    cout << "Masukkan panjang sisi: ";
    cin >> sisi;

    float luasPermukaan = 6 * pow(sisi, 2);
    float volume = pow(sisi, 3);

    cout << "Luas permukaan kubus: " << luasPermukaan << endl;
    cout << "Volume kubus: " << volume << endl;
    lanjut();
}

// Menghitung luas dan keliling tabung
void tabung()
{
    float jariJari, tinggi;
    clrscr();
    menuHeader("Tabung");
    cout << "Masukkan jari-jari: ";
    cin >> jariJari;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;

    float luasPermukaan = (2 * M_PI * jariJari * tinggi) + (2 * M_PI * pow(jariJari, 2));
    float volume = M_PI * pow(jariJari, 2) * tinggi;

    cout << "Luas permukaan tabung: " << luasPermukaan << endl;
    cout << "Volume tabung: " << volume << endl;
    lanjut();
}

// Menghitung luas dan keliling segitiga
void segitiga()
{
    float alas, tinggi, sisiA, sisiB, sisiC;
    clrscr();
    menuHeader("Segitiga");
    cout << "Masukkan panjang alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    cout << "Masukkan panjang sisi A: ";
    cin >> sisiA;
    cout << "Masukkan panjang sisi B: ";
    cin >> sisiB;
    cout << "Masukkan panjang sisi C: ";
    cin >> sisiC;

    float luas = (alas * tinggi) / 2;
    float keliling = sisiA + sisiB + sisiC;

    cout << "Luas segitiga: " << luas << endl;
    cout << "Keliling segitiga: " << keliling << endl;
    lanjut();
}

// Menghitung luas dan keliling belah ketupat
void belahKetupat()
{
    float diagonal1, diagonal2, sisi;
    clrscr();
    menuHeader("Belah Ketupat");
    cout << "Masukkan panjang diagonal 1: ";
    cin >> diagonal1;
    cout << "Masukkan panjang diagonal 2: ";
    cin >> diagonal2;
    cout << "Masukkan panjang sisi: ";
    cin >> sisi;

    float luas = (diagonal1 * diagonal2) / 2;
    float keliling = 4 * sisi;

    cout << "Luas belah ketupat: " << luas << endl;
    cout << "Keliling belah ketupat: " << keliling << endl;
    lanjut();
}

// Menghitung luas dan keliling jajar genjang
void jajarGenjang()
{
    float alas, tinggi, sisiMiring;
    clrscr();
    menuHeader("Jajar Genjang");
    cout << "Masukkan panjang alas: ";
    cin >> alas;
    cout << "Masukkan tinggi: ";
    cin >> tinggi;
    cout << "Masukkan panjang sisi miring: ";
    cin >> sisiMiring;

    float luas = alas * tinggi;
    float keliling = 2 * (alas + sisiMiring);

    cout << "Luas jajar genjang: " << luas << endl;
    cout << "Keliling jajar genjang: " << keliling << endl;
    lanjut();
}

int main()
{
    int pilihan;
    do
    {
        cout << "Kalkulator Luas dan Keliling" << endl;
        cout << "====================================" << endl;
        cout << "1. Persegi Panjang" << endl;
        cout << "2. Lingkaran" << endl;
        cout << "3. Trapesium" << endl;
        cout << "4. Balok" << endl;
        cout << "5. Kubus" << endl;
        cout << "6. Tabung" << endl;
        cout << "7. Segitiga" << endl;
        cout << "8. Belah Ketupat" << endl;
        cout << "9. Jajar Genjang" << endl;
        cout << "0. Keluar" << endl;
        cout << "Pilih menu (0-9): ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            persegiPanjang();
            break;
        case 2:
            lingkaran();
            break;
        case 3:
            trapesium();
            break;
        case 4:
            balok();
            break;
        case 5:
            kubus();
            break;
        case 6:
            tabung();
            break;
        case 7:
            segitiga();
            break;
        case 8:
            belahKetupat();
            break;
        case 9:
            jajarGenjang();
            break;
        case 0:
            cout << "Terima kasih..." << endl;
            break;
        default:
            clrscr();
            cout << "Pilihan tidak valid!" << endl;
            lanjut();
            break;
        }
    } while (pilihan != 0);

    return 0;
}
