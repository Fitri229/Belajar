#include <iostream>
#include <fstream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Menambahkan elemen ke akhir linked list
    void tambah(int val) {
        Node* baru = new Node(val);
        if (!head) {
            head = baru;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = baru;
        }
    }

    // Menghitung jumlah elemen
    int hitungElemen() {
        int jumlah = 0;
        Node* temp = head;
        while (temp != nullptr) {
            jumlah++;
            temp = temp->next;
        }
        return jumlah;
    }

    // Menampilkan semua elemen
    void tampilkan() {
        Node* temp = head;
        cout << "Isi Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Simpan ke file
    void simpanKeFile(const string& namaFile) {
        ofstream file(namaFile);
        if (file.is_open()) {
            file << "Jumlah elemen linked list: " << hitungElemen() << endl;
            file << "Isi Linked List: ";
            Node* temp = head;
            while (temp != nullptr) {
                file << temp->data << " -> ";
                temp = temp->next;
            }
            file << "NULL" << endl;
            file.close();
            cout << "Data berhasil disimpan ke dalam file \"" << namaFile << "\"" << endl;
        } else {
            cerr << "Gagal membuka file untuk ditulis!" << endl;
        }
    }
};

int main() {
    LinkedList list;
    int jumlah, nilai;

    cout << "Berapa banyak angka yang ingin Anda masukkan? ";
    cin >> jumlah;

    cout << "Masukkan " << jumlah << " angka:\n";
    for (int i = 0; i < jumlah; ++i) {
        cin >> nilai;
        list.tambah(nilai);
    }

    list.tampilkan();
    cout << "Jumlah elemen dalam linked list: " << list.hitungElemen() << endl;

    list.simpanKeFile("output_linkedlist.txt");

    return 0;
}

