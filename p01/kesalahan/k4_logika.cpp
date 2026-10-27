// Kesalahan 4: logika. Program berjalan mulus, tidak ada pesan apa pun,
// tetapi hasilnya salah. Rata-rata 80, 75, dan 90 seharusnya 81.67, bukan 81.
#include <iostream>
#include <iomanip> // Untuk std::fixed dan std::setprecision

int main() {
    int tugas = 80;
    int uts = 75;
    int uas = 90;
    double rerata = (tugas + uts + uas) / 3.0;  // Benar: pembagian dengan bilangan desimal
    std::cout << std::fixed << std::setprecision(2); // Menampilkan dua angka di belakang koma    
    std::cout << "Rata-rata: " << rerata << "\n";
    return 0;
}
