#include <iostream>
#include <string>

using namespace std;

void clrscr()
{
    cout << "\033[2J\033[0;0H";
}

struct Mahasiswa
{
    string nama, jurusan, alamat, npm;
    int umur;
};

int main()
{
    Mahasiswa mahasiswa;

    clrscr();
    cout << "+++ Input Biodata Mahasiswa +++" << endl;

    cout << "NPM: ";
    getline(cin, mahasiswa.npm);

    cout << "Nama: ";
    getline(cin, mahasiswa.nama);

    cout << "Umur: ";
    cin >> mahasiswa.umur;
    cin.ignore(); // Membersihkan newline (\n) dari input sebelumnya.

    cout << "Jurusan: ";
    getline(cin, mahasiswa.jurusan);

    cout << "Alamat: ";
    getline(cin, mahasiswa.alamat);

    // Tampilkan biodata mahasiswa yang telah diinput.
    clrscr();
    cout << "=== Biodata Mahasiswa ===" << endl;
    cout << "NPM: " << mahasiswa.npm << endl;
    cout << "Nama: " << mahasiswa.nama << endl;
    cout << "Umur: " << mahasiswa.umur << " tahun" << endl;
    cout << "Jurusan: " << mahasiswa.jurusan << endl;
    cout << "Alamat: " << mahasiswa.alamat << endl;
    cout << "=========================" << endl;

    return 0;
}
