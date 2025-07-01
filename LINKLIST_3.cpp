#include <iostream>
using namespace std;

// Definisi struct Node
struct Node {
    int data;
    Node* next;
};

// Class LinkedList
class LinkedList {
private:
    Node* head;

public:
    // Konstruktor
    LinkedList() {
        head = nullptr;
    }

    // Menambah node di akhir linked list
    void tambah(int nilai) {
        Node* baru = new Node;
        baru->data = nilai;
        baru->next = nullptr;

        if (head == nullptr) {
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

    // Menampilkan isi linked list
    void tampilkan() {
        Node* temp = head;
        cout << "Isi Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    // Destruktor untuk membersihkan memori
    ~LinkedList() {
        Node* temp;
        while (head != nullptr) {
            temp = head;
            head = head->next;
            delete temp;
        }
    }
};

int main() {
    LinkedList list;
    int jumlah, nilai;

    cout << "Berapa banyak data yang ingin dimasukkan? ";
    cin >> jumlah;

    for (int i = 0; i < jumlah; i++) {
        cout << "Masukkan data ke-" << i + 1 << ": ";
        cin >> nilai;
        list.tambah(nilai);
    }

    list.tampilkan();
    cout << "Jumlah elemen dalam linked list: " << list.hitungElemen() << endl;

    return 0;
}

