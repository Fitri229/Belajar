

//LAPRAK MATDIS PERTEMUAN 9

#include <iostream>
#include <conio.h>
#include <cstdlib> 
using namespace std;

int hasil;

// Fungsi faktorial
int faktorial(int nilai) {
    hasil = nilai;
    while (nilai > 1) {
        hasil = hasil * (nilai - 1);
        nilai = nilai - 1;
    }
    return hasil;
}

int main() {
    int p, nq, max, x, i, j, n, k, r, s, tr, no;
    int a[100];
    div_t xx;

    // Inisialisasi array a
    for (i = 0; i < 100; i++) {
        a[i] = 0;
    }

    // Tampilan pembuka
    cout << "--------------------------\n";
    cout << "PROGRAM GENERATE PERMUTASI\n\n";
	
    // Input nilai n
    cout << "Masukkan nilai n : ";
    cin >> n;

    // Input elemen himpunan
    for (i = 1; i <= n; i++) {
        cout << "masukkan nilai himpunan a[" << i << "] : ";
        cin >> a[i];
    }

    // Input nilai r
    cout << "nilai r : ";
    cin >> tr;

    // Hitung permutasi
    p = faktorial(n);
    nq = faktorial(n - tr);
    if (nq == 0) nq = 1;
    max = p / nq;

    cout << "nilai permutasi : " << max << endl;
    getch();
	
	cout << "\nTekan enter untuk melihat hasil generate permutasi...\n";
	getch();
	
	for(int i=1; i<=max; i++){
		cout << i <<". " << a[1];
		for(int j=1; j<= tr; j++){
			cout<< " "<<a[(i+1)-j];
		}
		cout<<endl;
	} 
    
    return 0;
}


