#include <iostream>
using namespace std;

int main() {
    char kata1, kata2, kata3, kata4;
    int a, b, c, d;

    // Input nama titik
    cout << "Masukkan titik pertama  : "; cin >> kata1;
    cout << "Masukkan titik kedua    : "; cin >> kata2;
    cout << "Masukkan titik ketiga   : "; cin >> kata3;
    cout << "Masukkan titik keempat  : "; cin >> kata4;

    cout << "\nGaris yang dapat dibentuk adalah:\n";
    cout << kata1 << " -> " << kata4 << endl;
    cout << kata4 << " -> " << kata3 << endl;
    cout << kata3 << " -> " << kata2 << endl;
    cout << kata2 << " -> " << kata1 << endl;

    // Input jarak antar titik
    cout << "\nMasukkan jarak antara titik simpul " << kata1 << " dengan " << kata4 << " : ";
    cin >> a;
    cout << "Masukkan jarak antara titik simpul " << kata4 << " dengan " << kata3 << " : ";
    cin >> b;
    cout << "Masukkan jarak antara titik simpul " << kata3 << " dengan " << kata2 << " : ";
    cin >> c;
    cout << "Masukkan jarak antara titik simpul " << kata2 << " dengan " << kata1 << " : ";
    cin >> d;


    cout << "\nJadi panjang jarak totalnya = "<< a+b+c+d << endl;

    // Contoh alternatif jalur (disederhanakan karena input tidak menyertakan bobot spesifik per sisi)
    cout << "\nMencari jalur terpendek dari " << kata1 << " menuju " << kata3 << " melalui " << kata4 << ":\n";
    cout << "Alternatif pertama: " << kata1 << " -> " << kata4 << " -> " << kata3 << endl;

    return 0;
}
