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
  int menu;
  int x = 1;
  int y = 10;
  do
  {
    clrscr();
    cout << "Kalkulator bilangan" << endl;
    cout << "===================" << endl;
    cout << "Menu:" << endl;
    cout << "1. Bilangan Asli" << endl;
    cout << "2. Bilangan Genap" << endl;
    cout << "3. Bilangan Ganjil" << endl;
    cout << "4. Bilangan Prima" << endl;
    cout << "5. Keluar" << endl;
    cout << "Pilih menu: ";
    cin >> menu;

    switch (menu)
    {
    case 1:
      // Bilangan Asli
      clrscr();
      cout << "Bilangan Asli dari " << x << " hingga " << y << ":\n\n";
      for (int i = x; i <= y; i++)
      {
        cout << i << " | ";
      }
      lanjut();
      break;
    case 2:
      // Bilangan Genap
      clrscr();
      cout << "Bilangan Genap dari " << x << " hingga " << y << ":\n\n";
      for (int i = x; i <= y; i++)
      {
        if (i % 2 == 0)
        {
          cout << i << " | ";
        }
      }
      lanjut();
      break;
    case 3:
      // Bilangan Ganjil
      clrscr();
      cout << "Bilangan Ganjil dari " << x << " hingga " << y << ":\n\n";
      for (int i = x; i <= y; i++)
      {
        if (i % 2 != 0)
        {
          cout << i << " | ";
        }
      }
      lanjut();
      break;
    case 4:
      // Bilangan Prima
      clrscr();
      cout << "Bilangan prima dari " << x << " hingga " << y << ":\n\n";
      for (int num = x; num <= y; num++)
      {
        int faktor = 0;
        for (int i = 1; i <= num; i++)
        {
          if (num % i == 0)
          {
            faktor++;
          }
        }

        if (faktor == 2)
        {
          cout << num << " | ";
        }
      }
      lanjut();
      break;
    case 5:
      clrscr();
      cout << "Keluar." << endl;
      break;
    default:
      clrscr();
      cout << "Menu tidak tersedia [1-5]";
      lanjut();
      break;
    }
  } while (menu != 5);

  return 0;
}
