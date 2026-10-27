# Catatan Kesalahan - Praktikum 01

## 1. Kesalahan Sintaks (Syntax Error)
* **Deskripsi Kesalahan:** Muncul pesan error `expected ';' before 'return'` saat proses kompilasi.
* **Penyebab:** Lupa menambahkan titik koma `;` pada akhir baris perintah `cout`.
* **Solusi:** Menambahkan tanda titik koma `;` di akhir baris tersebut kemudian mengompilasi ulang program.

## 2. Kesalahan Logika (Logical Error)
* **Deskripsi Kesalahan:** Hasil perhitungan rata-rata bernilai salah atau `0` saat membagi total jumlah data.
* **Penyebab:** Tipe data yang digunakan untuk menampung total nilai awal adalah integer, bukan desimal (`double`).
* **Solusi:** Mengubah tipe data variabel `jumlah` dan `rerata` menjadi `double` agar pembagian desimal berjalan presisi.

## 3. Kendala Build & Git
* **Deskripsi Kesalahan:** File hasil kompilasi (`hello.exe` atau `rerata.exe`) ikut masuk ke status pelacakan Git.
* **Penyebab:** Berkas `.gitignore` belum diletakkan pada folder utama repositori.
* **Solusi:** Menambahkan berkas `.gitignore` yang berisi baris `*.exe` di folder utama agar file executable diabaikan secara otomatis.