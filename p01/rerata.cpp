#include <iostream>

using namespace std;

int main() {
    int n;
    double jumlah = 0.0, angka;

    cout << "Masukkan jumlah data: ";
    cin >> n;

    if (n <= 0) {
        cout << "Jumlah data harus lebih besar dari 0!" << endl;
        return 1;
    }

    for (int i = 1; i <= n; ++i) {
        cout << "Masukkan data ke-" << i << ": ";
        cin >> angka;
        jumlah += angka;
    }

    double rerata = jumlah / n;
    cout << "Nilai rata-rata (rerata): " << rerata << endl;

    return 0;
}