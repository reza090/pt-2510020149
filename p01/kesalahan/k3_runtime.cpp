// Kesalahan 3: runtime. Kode ini lolos compile tanpa error dan tanpa warning,
// tetapi berhenti mendadak saat pengguna memasukkan 0 sebagai jumlah mahasiswa.
#include <iostream>

int main() {
    int total = 240;
    int jumlah_mahasiswa = 0;
    std::cout << "Jumlah mahasiswa: ";
    std::cin >> jumlah_mahasiswa;
    while (jumlah_mahasiswa <= 0) {
        std::cout << "Masukkan jumlah mahasiswa (harus > 0): ";
        std::cin >> jumlah_mahasiswa;

        if (jumlah_mahasiswa <= 0) {
            std::cout << "Input tidak valid! Jumlah mahasiswa tidak boleh 0 atau minus.\n\n";
        }
    }

    int rerata = total / jumlah_mahasiswa;
    std::cout << "Rata-rata: " << rerata << "\n";
    
    return 0;
}
