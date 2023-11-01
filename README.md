# DDP-GuntingKertas-Batu
Project membuat game gunting kertas batu dalam bahasa c++

## Pilihan Menu

Daftar Menu:
* Mulai Permainan
* Skor Saat Ini
* Reset Skor
* Keluar

## Pilihan Permainan

Daftar Mode Permainan:
* Pemain VS Komputer
* Pemain 1 VS Pemain 2
* Kembali ke Menu Utama

## Algoritma Deskriptif

1. Inisialisasi variabel skorP1, skorP2, dan skorKomputer menjadi 0.
2. Inisialisasi variabel p1, p2, ketP1, ketP2, dan ketK sebagai string kosong.
3. Mulai perulangan utama:
   - Tampilkan pesan "Selamat Datang di Game Gunting Kertas Batu".
   - Tampilkan daftar menu:
      - "Mulai Bermain"
      - "Skor Saat Ini"
      - "Reset Skor"
      - "Keluar"
   - Meminta pengguna untuk memilih menu.
   - Jika menu adalah 1:
      - Memulai perulangan mode permainan:
         - "Pemain 1 vs Komputer"
         - "Pemain 1 vs Pemain 2"
         - "Kembali ke Menu Utama"
      - Meminta pengguna untuk memilih mode.
      - Jika mode adalah 1:
         - Memanggil fungsi vsKomputer().
      - Jika mode adalah 2:
         - Memanggil fungsi vsPemain().
      - Jika mode adalah 3, keluar dari perulangan mode.
   - Jika menu adalah 2:
      - Memanggil fungsi skorSaatIni().
   - Jika menu adalah 3:
      - Memanggil fungsi resetSkor().
   - Jika menu adalah 4, keluar dari program.
   - Jika menu tidak valid, tampilkan pesan error.

4. Fungsi vsKomputer():
   - Meminta nama pemain.
   - Memulai perulangan permainan:
      - Meminta pemain untuk memilih (Gunting, Kertas, atau Batu).
      - Komputer memilih secara acak (Gunting, Kertas, atau Batu).
      - Menampilkan hasil pilihan pemain dan komputer.
      - Memeriksa hasil dan memperbarui skor.
      - Menampilkan skor saat ini.
      - Meminta pengguna apakah ingin melanjutkan permainan.

5. Fungsi vsPemain():
   - Meminta nama pemain 1 dan nama pemain 2.
   - Memulai perulangan permainan:
      - Meminta pemain 1 untuk memilih (Gunting, Kertas, atau Batu).
      - Meminta pemain 2 untuk memilih (Gunting, Kertas, atau Batu).
      - Menampilkan hasil pilihan pemain 1 dan pemain 2.
      - Memeriksa hasil dan memperbarui skor.
      - Menampilkan skor saat ini.
      - Meminta pengguna apakah ingin melanjutkan permainan.

6. Fungsi skorSaatIni():
   - Menampilkan skor saat ini untuk pemain 1, pemain 2, dan komputer.

7. Fungsi resetSkor():
   - Mengatur skorP1, skorP2, dan skorKomputer menjadi 0.

8. Program selesai.
