// SiNilai v0.1: data satu mahasiswa.
// Program membaca nama, NPM, dan empat komponen nilai, lalu menampilkannya sebagai kartu.
// Lengkapi bagian TODO. Versi ini belum menghitung apa-apa; itu tugas Pertemuan 3.
#include <iostream>
#include <string>

using namespace std;

int main() {
    string nama = "Siti Aminah";
    char npm[11] = "2100012345";  // NPM bisa diawali 0, jadi pakai array char.
    double kehadiran = 100, mingguan = 85.5, uts = 78, uas = 80;
    // TODO 1: deklarasikan variabel untuk nama dan NPM.
    //         Nama bisa lebih dari satu kata. NPM adalah deretan angka yang tidak pernah
    //         dihitung, dan bisa diawali 0, jadi pikirkan tipe yang tepat.

    // TODO 2: deklarasikan empat variabel nilai: kehadiran, mingguan, uts, uas.
    //         Nilai bisa berisi pecahan seperti 85.5.

    cout << "=== SiNilai v0.1 ===\n";
    cout << "Nama      : " << nama << "\n";
    // TODO 3: baca nama. Ingat, nama bisa mengandung spasi.

    cout << "NPM       : " << npm << "\n" ;
    // TODO 4: baca NPM.
    cout << "Kehadiran : " << kehadiran << "\n";
    cout << "Mingguan  : " << mingguan << "\n";
    cout << "UTS       : " << uts << "\n";
    cout << "UAS       : " << uas << "\n";
    // TODO 5: baca keempat komponen nilai, satu per satu, dengan prompt seperti di atas.

    cout << "\n--- Kartu Data Mahasiswa ---\n";
    cout << "Nama      : " << nama << "\n";
    cout << "NPM       : " << npm << "\n";
    cout << "Kehadiran : " << kehadiran << "\n";
    cout << "Mingguan  : " << mingguan << "\n";
    cout << "UTS       : " << uts << "\n";
    cout << "UAS       : " << uas << "\n";

    return 0;
}
