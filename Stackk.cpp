#include <iostream>
using namespace std;

struct Mahasiswa {
    string nim;
    string nama;
    float ipk;
};

Mahasiswa stackMhs[100];  
int top = -1;  

void tambah() {
    if (top == 99) {
        cout << "Stack penuh!\n";
        return;
    }

    top++;
    cout << "\n=== Tambah Mahasiswa ===\n";
    cout << "Masukkan NIM  : ";
    cin >> stackMhs[top].nim;
    cout << "Masukkan Nama : ";
    cin >> stackMhs[top].nama;
    cout << "Masukkan IPK  : ";
    cin >> stackMhs[top].ipk;

    cout << "Data berhasil disimpan ke data mahasiswa ke: " << top+1 << endl;
}

void hapus() {
    if (top == -1) {
        cout << "Tidak ada data untuk dihapus!\n";
        return;
    }

    cout << "\n=== Hapus Mahasiswa (LIFO) ===\n";
    cout << "Data yang dihapus:\n";
    cout << "NIM  : " << stackMhs[top].nim << endl;
    cout << "Nama : " << stackMhs[top].nama << endl;
    cout << "IPK  : " << stackMhs[top].ipk << endl;

    top--;
}

void tampil() {
    if (top == -1) {
        cout << "Belum ada data!\n";
        return;
    }

    cout << "\n=== Data Mahasiswa (LIFO) ===\n";
    for (int i = top; i >= 0; i--) {
    	if(i-top+2 == 1){
    		cout << "Posisi [" << (i-top + 2) << "]<--- TOP" << endl;
		}else{
			cout << "Posisi [" << (i-top + 2) << "]" << endl;
		}
        cout << "NIM  : " << stackMhs[i].nim << endl;
        cout << "Nama : " << stackMhs[i].nama << endl;
        cout << "IPK  : " << stackMhs[i].ipk << endl;
        cout << endl;
    }
}

int main() {
    int pilih;

    do {
        cout << "\n===== DATA MAHASISWA =====\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Hapus Mahasiswa\n";
        cout << "3. Tampilkan Mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilih;

        switch (pilih) {
            case 1: tambah(); break;
            case 2: hapus(); break;
            case 3: tampil(); break;
            case 4: cout << "Keluar...\n"; break;
            default: cout << "Menu tidak valid!\n";
        }

    } while (pilih != 4);

    return 0;
}

