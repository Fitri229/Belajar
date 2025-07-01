#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int nilai) {
        data = nilai;
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

    void tambah(int nilai) {
        Node* baru = new Node(nilai);
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

    int hitungElemen() {
        int jumlah = 0;
        Node* temp = head;
        while (temp != nullptr) {
            jumlah++;
            temp = temp->next;
        }
        return jumlah;
    }

    void tampilkan() {
        Node* temp = head;
        cout << "Isi Linked List: ";
        while (temp != nullptr) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
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

