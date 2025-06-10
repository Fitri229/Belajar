#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat = "Algoritma Pemrograman Menyenangkan";
    char cari = 'k';
    for (int i = 0; i < kalimat.length(); i++) {
        if (tolower(kalimat[i]) == tolower(cari)) {
            cout << "Huruf '" << cari << "' ditemukan pada indeks ke-" << i << endl;
        }
    }
    return 0;
}

