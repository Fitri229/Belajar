#include <iostream>
using namespace std;

class Gabung {
private:
    int array1[3][3], array2[3][3], gabungan[18];
    int index;

public:
    Gubung() {
        index = 0;
    }

    void input() {
        cout << "Masukkan elemen array pertama (3x3):" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> array1[i][j];

        cout << "Masukkan elemen array kedua (3x3):" << endl;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                cin >> array2[i][j];
    }

    void gabungin() {
        index = 0;
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                gabungan[index++] = array1[i][j];

        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 3; j++)
                gabungan[index++] = array2[i][j];
    }

    void tampilin() {
        cout << "\nArray setelah digabung (belum diurutkan):" << endl;
        for (int i = 0; i < 18; i++)
            cout << gabungan[i] << " ";
        cout << endl;
    }

    void urutin() {
        for (int i = 0; i < 17; i++) {
            for (int j = 0; j < 17 - i; j++) {
                if (gabungan[j] > gabungan[j + 1]) {
                    int temp = gabungan[j];
                    gabungan[j] = gabungan[j + 1];
                    gabungan[j + 1] = temp;
                }
            }
        }
    }

    void tampilUrut() {
        cout << "\nArray setelah diurutkan (dari terkecil):" << endl;
        for (int i = 0; i < 18; i++)
            cout << gabungan[i] << " ";
        cout << endl;
    }
};

int main() {
    Gabung meow;
    meow.input();
    meow.gabungin();
    meow.tampilin();     
    meow.urutin();
    meow.tampilUrut();       

    return 0;
}

