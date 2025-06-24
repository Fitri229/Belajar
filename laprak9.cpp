#include <iostream>
using namespace std;

class array{
private:
    int array2D[3][3];
    int array1D[9];

public:
    void input() {
        cout << "Masukkan elemen array 3x3: " << endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << "Elemen [" << i << "][" << j << "]: ";
                cin >> array2D[i][j];
            }
        }
    }
    void tampilkan() {
        cout << "\nArray 3x3 sebelum diurutkan:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << array2D[i][j] << " ";
            }
            cout << endl;
        }
    }
    void ubah() {
        int k = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                array1D[k] = array2D[i][j];
                k++;
            }
        }
    }
    void bubbleSort() {
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8 - i; j++) {
                if (array1D[j] > array1D[j + 1]) {
                    int temp = array1D[j];
                    array1D[j] = array1D[j + 1];
                    array1D[j + 1] = temp;
                }
            }
        }
    }
    void ubah2D() {
        int k = 0;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                array2D[i][j] = array1D[k];
                k++;
            }
        }
    }
    void urutkan() {
        cout << "\nArray 3x3 setelah diurutkan:\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << array2D[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    array ray;
    ray.input();
    ray.tampilkan();
    ray.ubah();
    ray.bubbleSort();
    ray.ubah2D();
    ray.urutkan();

    return 0;
}
