#include <iostream>
using namespace std;

const char* strpbrk(const char* s1, const char* s2) {
    for (int i = 0; s1[i] != '\0'; i++) {
        for (int j = 0; s2[j] != '\0'; j++) {
            if (s1[i] == s2[j]) {
                return &s1[i]; 
            }
        }
    }
    return nullptr; 
}

int main() {
    const char* str1 = "hello world";
    const char* str2 = "aeiou";

    const char* result = strpbrk(str1, str2);

    if (result != nullptr) {
        cout << "Karakter pertama yang cocok: '" << *result << "'\n";
        cout << "Posisi karakter: " << (result - str1) << endl;
    } else {
        cout << "Tidak ditemukan karakter yang cocok.\n";
    }

    return 0;
}

