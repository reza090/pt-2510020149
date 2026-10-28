# Catatan Kesalahan - Praktikum 01

# k1_sintaks.cpp
* **Deskripsi kesalahan:** muncul pesan error saat buka pada visual studio code.
* **Penyebab:** Lupa menambahkan titik koma `;` pada akhir baris perintah `Nilai`. //lupa kasih ; pada baris perintah 
* **solusi:** Menambahkan tanda titik koma `;` di akhir baris tersebut kemudian mengompilasi ulang program. apabila tidak diperbaiki maka program tidak dapat berjalan.

## k2_nama.cpp
* **Deskripsi Kesalahan:** / identifier "Nilai" is undefined 
// identifier "bonus" is undefinedC/C++(20) bonus tidak ada pada sintaks diatas.
* **Penyebab:** nilai tidak terdefinisi karena salah huruf kecil dan besar tidak dibedakan.
bonus tidak ada pada sintaks diatas.
* **Solusi:** Memperbaiki huruf pada nilai, memperbaiki dengan memberikan "bonus" pada program

## k3_runtime.cpp
* **Deskripsi Kesalahan:** Arithmetic exception
* **Penyebab:** Dalam matematika dan pemrograman C++, membagi bilangan dengan nol tidak terdefinisi sehingga sistem operasi akan menghentikan program secara mendadak (Runtime Error).
* **Solusi:** memasukkan perulangan while (looping).

## k4_logika.cpp
* **Deskripsi Kesalahan:** Angka yang muncul tidak sesuai permintaan dengan menggunakan 2 desimal.
* **Penyebab:** Pembagian tidak menggunakan desimal. tidak ada perintah 2 angka dibelakang koma. std::setprecision belum include #include <iomanip>
* **Solusi:** pembagian dengan bilangan desimal, 
std::setprecision(2); // Menampilkan dua angka di belakang koma 
#include <iomanip> // Untuk std::fixed dan std::setprecision

**Deklarasi AI : Menggunakan AI Gemini, mencari tahu penyebabnya dan solusi terbaik dalam menyempurnakan program c++.**