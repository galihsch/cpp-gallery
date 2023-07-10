#include <iostream>
using namespace std;

int main() {
    int start, end;
    
    cout << "Masukkan bilangan awal: ";
    cin >> start;
    
    cout << "Masukkan bilangan akhir: ";
    cin >> end;
    
    cout << "Bilangan ganjil dalam rentang " << start << " hingga " << end << " adalah: " << endl;
    
    if (start % 2 == 0) {
        start++;
    }
    
    for (int i = start; i <= end; i += 2) {
        cout << i << " ";
    }
    
    cout << endl;
    
    return 0;
}
