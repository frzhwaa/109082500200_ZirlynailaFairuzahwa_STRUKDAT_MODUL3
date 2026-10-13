# <h1 align="center">Laporan Praktikum Modul 3 - ABSTRACT DATA TYPE (ADT)</h1>

<p align="center">Zirlynaila Fairuzahwa - 109082500200</p>

## Dasar Teori

Abstract Data Type (ADT) atau Tipe Data Abstrak adalah tipe data yang terdiri dari definisi tipe (type) dan sekumpulan operasi primitif untuk mengolah tipe tersebut. ADT dapat dilengkapi dengan invarian tipe dan aksioma yang berlaku, serta memungkinkan suatu tipe data dibentuk dari tipe data lainnya. Dalam bahasa C++, ADT dapat diimplementasikan menggunakan struct, fungsi, dan prosedur. Penerapan ADT bertujuan memisahkan definisi tipe data dari implementasi operasinya sehingga program lebih terstruktur dan mudah dikembangkan. Konsep abstraksi data juga mendukung pemisahan antarmuka dari detail implementasi program [1][2].

### A. Komponen dan Operasi Primitif ADT<br/>

Komponen dan operasi primitif ADT merupakan bagian yang digunakan untuk membentuk, mengakses, mengubah, serta mengolah nilai suatu tipe data. Berdasarkan Modul 3 Struktur Data, operasi primitif mencakup konstruktor atau kreator, selector, prosedur pengubah nilai komponen, validator, destruktor atau dealokator, operasi baca dan tulis, operator relasional, operasi aritmatika, serta operasi konversi. Setiap operasi memiliki fungsi masing-masing untuk memastikan pengolahan data sesuai dengan karakteristik dan aturan tipe ADT.

#### 1. Konstruktor dan Selector
Konstruktor atau kreator merupakan operasi untuk membentuk nilai suatu tipe data, sedangkan selector digunakan untuk mengakses komponen yang terdapat di dalam tipe data tersebut. Nama konstruktor biasanya diawali dengan Make, sementara nama selector biasanya diawali dengan Get. Kedua operasi ini membantu pembentukan dan pengambilan data sesuai struktur ADT yang telah didefinisikan.

#### 2. Operasi Pengubah dan Validator
Operasi pengubah digunakan untuk mengubah nilai komponen dalam suatu objek ADT, sedangkan validator digunakan untuk memeriksa apakah nilai memenuhi batasan yang ditentukan. Kedua operasi ini membantu memastikan bahwa pengolahan data sesuai dengan aturan tipe data yang digunakan.

#### 3. Operasi Pendukung Lainnya
Operasi pendukung ADT meliputi destruktor atau dealokator untuk menghancurkan objek dan mengelola memori, operasi baca dan tulis untuk masukan dan keluaran, operator relasional untuk membandingkan nilai, operasi aritmatika untuk melakukan perhitungan, serta operasi konversi untuk mengubah nilai antara tipe ADT dan tipe data dasar.

### B. Implementasi ADT dalam Bahasa C++<br/>

Implementasi ADT dalam bahasa C++ dilakukan dengan membagi program menjadi file definisi tipe dan deklarasi operasi, file realisasi fungsi dan prosedur, serta file program utama (driver). Berdasarkan Modul 3 Struktur Data, pembagian tersebut bertujuan memisahkan spesifikasi tipe dan operasi dari kode implementasinya. Dengan demikian, program utama dapat menggunakan operasi yang telah disediakan tanpa perlu menuliskan kembali seluruh proses di dalamnya.

#### 1. Definisi Tipe dan Deklarasi Operasi (.h)
File header (.h) berisi definisi tipe data dan deklarasi fungsi atau prosedur yang disediakan oleh ADT. Dalam bahasa C++, tipe data dapat didefinisikan menggunakan struct, sedangkan fungsi dan prosedur dideklarasikan melalui prototipe. Spesifikasi fungsi mencakup nama, domain, range, dan prasyarat jika ada, sedangkan spesifikasi prosedur mencakup keadaan awal, keadaan akhir, dan proses yang dilakukan.

#### 2. Realisasi Operasi (.cpp)
File implementasi (.cpp) berisi kode program untuk merealisasikan fungsi dan prosedur yang telah dideklarasikan dalam file header. Pada contoh ADT mahasiswa, fungsi inputMhs() digunakan untuk memasukkan data mahasiswa, sedangkan fungsi rata2() digunakan untuk menghitung nilai rata-rata dari dua nilai mahasiswa. Realisasi operasi ini memungkinkan fungsi dan prosedur digunakan kembali oleh program utama.

#### 3. Program Utama (Driver)
File main.cpp merupakan program utama yang menggunakan ADT melalui file header. Program utama membuat variabel bertipe ADT, memanggil fungsi atau prosedur yang tersedia, serta menampilkan hasil pengolahan data. Pemisahan file header, implementasi, dan program utama membuat program lebih modular karena deklarasi tipe data, realisasi operasi, dan penggunaan ADT ditempatkan pada bagian yang berbeda.

## Guided

### 1. Konsep ADT Sederhana

```C++
source code mahasiswa.h

#ifndef MAHASISWA_H_INCLUDED
#define MAHASISWA_H_INCLUDED

struct mahasiswa{
    char nim[10];
    int nilai1, nilai2;
};

void inputMhs(mahasiswa &m);
float rata2(mahasiswa m);

#endif
```

```C++
source code mahasiswa.cpp

#include <iostream>
#include "mahasiswa.h"

using namespace std;

void inputMhs(mahasiswa &m) {
    cout << "input nim = ";
    cin >> m.nim;
    cout << "input nilai1 = ";
    cin >> m.nilai1;
    cout << "input nilai2 = ";
    cin >> m.nilai2;
}

float rata2(mahasiswa m) {
    return float(m.nilai1 + m.nilai2) / 2;
}
```

```C++
source code main.cpp

#include <iostream>
#include "mahasiswa.h"

using namespace std;

int main(){
    mahasiswa mhs;
    inputMhs(mhs);
    cout << "rata-rata = " << rata2(mhs);
    return 0;
}
```

Program tersebut menggunakan konsep ADT. Program digunakan untuk menginputkan data seorang mahasiswa dan menampilkan nilai rata-rata dari dua mata kuliah. Program dibagi menjadi tiga file, yaitu mahasiswa.h, mahasiswa.cpp, dan main.cpp. File mahasiswa.h berisi deklarasi struktur mahasiswa dengan atribut nim, nilai1, dan nilai2, serta deklarasi fungsi inputMhs() dan rata2(). File mahasiswa.cpp berisi implementasi kedua fungsi tersebut. Prosedur inputMhs() digunakan untuk memasukkan NIM dan dua nilai mahasiswa, sedangkan fungsi rata2() digunakan untuk menghitung rata-rata dari nilai1 dan nilai2 dengan menjumlahkan keduanya kemudian membaginya dengan 2. Pada file main.cpp, program membuat variabel mhs, memanggil inputMhs(mhs) untuk memasukkan data, kemudian memanggil rata2(mhs) untuk menghitung dan menampilkan nilai rata-rata mahasiswa ke layar.

## Unguided

### 1. Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3 * uts + 0.4 * uas + 0.3 * tugas.

```C++
source code unguided 1

#include <iostream>
using namespace std;

struct Mahasiswa {
    char nama[50];
    char nim[20];
    float uts;
    float uas;
    float tugas;
    float nilaiAkhir;
};

float hitungNilaiAkhir(float uts, float uas, float tugas) {
    return 0.3 * uts + 0.4 * uas + 0.3 * tugas;
}

int main() {
    Mahasiswa mhs[10];
    int n;
    cout << "DATA NILAI MAHASISWA" << endl;
    cout << "Masukkan jumlah mahasiswa (maks. 10): ";
    cin >> n;
    if (n < 1 || n > 10) {
        cout << "Jumlah mahasiswa harus 1 sampai 10!" << endl;
        return 0;
    }
    for (int i = 0; i < n; i++) {
        cout << "\nData mahasiswa ke-" << i + 1 << endl;
        cout << "Nama : ";
        cin >> mhs[i].nama;
        cout << "NIM : ";
        cin >> mhs[i].nim;
        cout << "Nilai UTS : ";
        cin >> mhs[i].uts;
        cout << "Nilai UAS : ";
        cin >> mhs[i].uas;
        cout << "Nilai Tugas : ";
        cin >> mhs[i].tugas;
        mhs[i].nilaiAkhir = hitungNilaiAkhir(
            mhs[i].uts,
            mhs[i].uas,
            mhs[i].tugas
        );
    }
    cout << "\nDAFTAR NILAI MAHASISWA" << endl;
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa ke-" << i + 1 << endl;
        cout << "Nama : " << mhs[i].nama << endl;
        cout << "NIM : " << mhs[i].nim << endl;
        cout << "UTS : " << mhs[i].uts << endl;
        cout << "UAS : " << mhs[i].uas << endl;
        cout << "Tugas : " << mhs[i].tugas << endl;
        cout << "Nilai Akhir : " << mhs[i].nilaiAkhir << endl;
    }
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal1A.png)

##### Output 2

![Screenshot Output Unguided 1_2](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal1B.png)

Program tersebut digunakan untuk menyimpan dan menampilkan data nilai maksimal 10 mahasiswa menggunakan array of struct. Struktur Mahasiswa memiliki enam atribut, yaitu nama, nim, uts, uas, tugas, dan nilaiAkhir. Selanjutnya, fungsi hitungNilaiAkhir() digunakan untuk menghitung nilai akhir mahasiswa dengan rumus 0,3 * UTS + 0,4 * UAS + 0,3 * tugas. Pada fungsi main(), program membuat array mhs[10] untuk menyimpan data mahasiswa dan variabel n untuk menentukan jumlah mahasiswa yang akan dimasukkan. Program meminta pengguna memasukkan jumlah mahasiswa, kemudian memeriksa apakah jumlah tersebut berada dalam rentang 1 sampai 10. Jika jumlah tidak sesuai, program menampilkan pesan kesalahan dan berhenti. Jika jumlah sesuai, program menggunakan perulangan for untuk memasukkan nama, NIM, nilai UTS, nilai UAS, dan nilai tugas setiap mahasiswa. Setelah data nilai dimasukkan, fungsi hitungNilaiAkhir() dipanggil untuk menghitung nilai akhir dan menyimpannya ke atribut nilaiAkhir. Setelah seluruh data mahasiswa selesai dimasukkan, program menggunakan perulangan for kedua untuk menampilkan kembali seluruh data mahasiswa beserta nilai akhirnya ke layar.

Sebagai contoh, ketika saya memasukkan jumlah mahasiswa sebanyak 3 orang, program akan meminta data setiap mahasiswa secara bergantian. Mahasiswa pertama bernama Zahwa dengan NIM 109082500200 memiliki nilai UTS 100, UAS 90, dan tugas 95. Nilai akhirnya dihitung menjadi 0,3 × 100 + 0,4 × 90 + 0,3 × 95 = 94,5. Mahasiswa kedua bernama Diva dengan NIM 109082500111 memiliki nilai UTS 95, UAS 97, dan tugas 90, sehingga nilai akhirnya adalah 94,3. Mahasiswa ketiga bernama Raysa dengan NIM 109082500222 memiliki nilai UTS 90, UAS 92, dan tugas 98, sehingga nilai akhirnya adalah 93,2. Setelah semua perhitungan selesai, program menampilkan data ketiga mahasiswa dengan keterangan nama, NIM, UTS, UAS, tugas, dan nilai akhir.

### 2. Buatlah ADT pelajaran sebagai berikut di dalam file "pelajaran.h":
### Type pelajaran < <br>namaMapel : string <br>kodeMapel : string <br>> <br>function create_pelajaran( namapel : string, kodepel : string ) → pelajaran <br>procedure tampil_pelajaran( input pel : pelajaran )
### Buatlah implementasi ADT pelajaran pada file "pelajaran.cpp"
### Cobalah hasil implementasi ADT pada file "main.cpp"
### using namespace std; <br>int main(){ <br>string namapel = "Struktur Data"; <br>string kodepel = "STD"; <br>pelajaran pel = create_pelajaran(namapel,kodepel); <br>tampil_pelajaran(pel); <br>return 0; <br>}

```C++
source code pelajaran.h

#ifndef PELAJARAN_H_INCLUDED
#define PELAJARAN_H_INCLUDED

#include <string>
using namespace std;

struct pelajaran {
    string namaMapel;
    string kodeMapel;
};

pelajaran create_pelajaran(string namapel, string kodepel);
void tampil_pelajaran(pelajaran pel);

#endif
```

```C++
source code pelajaran.cpp

#include <iostream>
#include "pelajaran.h"

using namespace std;

pelajaran create_pelajaran(string namapel, string kodepel) {
    pelajaran pel;
    pel.namaMapel = namapel;
    pel.kodeMapel = kodepel;
    return pel;
}

void tampil_pelajaran(pelajaran pel) {
    cout << "Nama Mata Pelajaran: " << pel.namaMapel << endl;
    cout << "Kode Mata Pelajaran: " << pel.kodeMapel << endl;
}
```

```C++
source code main.cpp

#include <iostream>
#include "pelajaran.h"

using namespace std;

int main() {
    string namapel = "Struktur Data";
    string kodepel = "STD";

    pelajaran pel = create_pelajaran(namapel, kodepel);
    tampil_pelajaran(pel);

    return 0;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal2.png)

Program tersebut digunakan untuk membuat Abstract Data Type (ADT) pelajaran yang menyimpan nama mata pelajaran dan kode mata pelajaran. Program dibagi menjadi tiga file, yaitu pelajaran.h, pelajaran.cpp, dan main.cpp. File pelajaran.h berisi deklarasi struktur pelajaran yang memiliki dua atribut, yaitu namaMapel bertipe string dan kodeMapel bertipe string, serta deklarasi fungsi create_pelajaran() dan prosedur tampil_pelajaran(). Selanjutnya, file pelajaran.cpp berisi implementasi kedua primitif tersebut. Fungsi create_pelajaran() digunakan untuk membuat objek pelajaran, kemudian mengisi atribut namaMapel dan kodeMapel berdasarkan parameter yang diterima, lalu mengembalikan objek tersebut. Sementara itu, prosedur tampil_pelajaran() digunakan untuk menampilkan nama dan kode mata pelajaran menggunakan perintah cout. Pada file main.cpp, program membuat variabel namapel dengan nilai "Struktur Data" dan kodepel dengan nilai "STD". Kedua variabel tersebut kemudian digunakan sebagai parameter saat memanggil fungsi create_pelajaran(), dan hasilnya disimpan ke dalam variabel pel. Setelah itu, prosedur tampil_pelajaran(pel) dipanggil untuk menampilkan data mata pelajaran ke layar.

Sebagai contoh, ketika program dijalankan, variabel namapel berisi "Struktur Data" dan kodepel berisi "STD". Fungsi create_pelajaran() membentuk objek pel yang menyimpan kedua nilai tersebut pada atribut namaMapel dan kodeMapel. Selanjutnya, prosedur tampil_pelajaran() menampilkan hasil berikut:
Nama Mata Pelajaran: Struktur Data
Kode Mata Pelajaran: STD
Dengan demikian, program berhasil menerapkan konsep ADT dengan memisahkan deklarasi tipe dan primitif pada file pelajaran.h, implementasi primitif pada file pelajaran.cpp, serta pemanggilan fungsi dan prosedur pada file main.cpp.

### 3. Buatlah program dengan ketentuan : <br>- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer <br>- fungsi/prosedur yang menampilkan isi sebuah array integer 2D <br>- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu <br>- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer

```C++
source code array.h

#ifndef ARRAY_H_INCLUDED
#define ARRAY_H_INCLUDED

void tampilArray(int A[3][3]);
void tukarArray(int A[3][3], int B[3][3], int baris, int kolom);
void tukarPointer(int *p1, int *p2);

#endif
```

```C++
source code array.cpp

#include <iostream>
#include "array.h"

using namespace std;

void tampilArray(int A[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }
}

void tukarArray(int A[3][3], int B[3][3], int baris, int kolom) {
    int temp = A[baris][kolom];
    A[baris][kolom] = B[baris][kolom];
    B[baris][kolom] = temp;
}

void tukarPointer(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}
```

```C++
source code main.cpp

#include <iostream>
#include "array.h"

using namespace std;

int main() {
    int A[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int B[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    cout << "Array A sebelum ditukar:" << endl;
    tampilArray(A);
    cout << "\nArray B sebelum ditukar:" << endl;
    tampilArray(B);
    tukarArray(A, B, 1, 1);
    cout << "\nArray A setelah pertukaran posisi [1][1]:" << endl;
    tampilArray(A);
    cout << "\nArray B setelah pertukaran posisi [1][1]:" << endl;
    tampilArray(B);
    int x = 100;
    int y = 200;
    int *p1 = &x;
    int *p2 = &y;
    cout << "\nSebelum pertukaran pointer:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    tukarPointer(p1, p2);
    cout << "\nSetelah pertukaran pointer:" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    return 0;
}

```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal3.png)

Program tersebut digunakan untuk melakukan tiga operasi pada dua buah array integer 2D berukuran 3×3 dan dua buah pointer integer, yaitu menampilkan isi array, menukarkan elemen pada posisi tertentu dari dua array, serta menukarkan nilai dari dua variabel yang ditunjuk oleh pointer. Program dibagi menjadi tiga file, yaitu array.h yang berisi deklarasi fungsi dan prosedur, array.cpp yang berisi implementasi fungsi dan prosedur, serta main.cpp yang digunakan untuk menjalankan program. Pertama, program membuat array A yang berisi nilai 1 sampai 9 dan array B yang berisi nilai 10, 20, 30, 40, 50, 60, 70, 80, dan 90. Selanjutnya, prosedur tampilArray() digunakan untuk menampilkan isi array dengan dua perulangan for, yaitu perulangan pertama untuk menentukan baris dan perulangan kedua untuk menentukan kolom. Setelah itu, fungsi tukarArray() digunakan untuk menukarkan elemen dari kedua array pada posisi tertentu, yaitu [1][1]. Proses pertukaran dilakukan dengan menyimpan nilai A[baris][kolom] ke dalam variabel sementara temp, kemudian mengganti nilai A dengan nilai B pada posisi tersebut, dan terakhir mengisi nilai B dengan nilai yang tersimpan di temp. Selanjutnya, program membuat dua variabel integer, yaitu x dengan nilai 100 dan y dengan nilai 200, serta dua pointer p1 dan p2 yang masing-masing menunjuk ke variabel x dan y. Prosedur tukarPointer() kemudian digunakan untuk menukarkan nilai kedua variabel tersebut menggunakan operator dereferensi *, sehingga nilai yang ditunjuk oleh pointer pertama dan kedua dapat ditukar. Setelah seluruh proses selesai, program menampilkan kembali isi kedua array dan nilai variabel setelah pertukaran.

Sebagai contoh, sebelum pertukaran, array A berisi 1 2 3, 4 5 6, dan 7 8 9, sedangkan array B berisi 10 20 30, 40 50 60, dan 70 80 90. Ketika fungsi tukarArray(A, B, 1, 1) dipanggil, elemen A pada posisi [1][1] yang bernilai 5 ditukar dengan elemen B pada posisi yang sama yang bernilai 50. Hasilnya, array A menjadi 1 2 3, 4 50 6, dan 7 8 9, sedangkan array B menjadi 10 20 30, 40 5 60, dan 70 80 90. Selanjutnya, sebelum pertukaran pointer dilakukan, variabel x bernilai 100 dan y bernilai 200. Setelah prosedur tukarPointer(p1, p2) dijalankan, nilai x berubah menjadi 200 dan nilai y berubah menjadi 100. Dengan demikian, program berhasil menampilkan isi array, menukarkan elemen dua array pada posisi tertentu, serta menukarkan nilai dua variabel menggunakan pointer.

## Kesimpulan

Pada praktikum Modul 3 Abstract Data Type (ADT), dapat disimpulkan bahwa materi pada modul ini membahas mengenai konsep ADT, penggunaan struct, fungsi, prosedur, array dua dimensi, serta pointer dalam bahasa C++. ADT digunakan untuk mengelompokkan data dan operasi yang berkaitan, sedangkan pemisahan program ke dalam file header (.h), file implementasi (.cpp), dan program utama (main.cpp) membuat program lebih terstruktur dan modular.

Melalui satu program guided dan tiga program unguided yang sudah saya kerjakan, saya memahami penerapan konsep tersebut dalam menyelesaikan permasalahan. Program guided menerapkan ADT mahasiswa untuk memasukkan NIM dan dua nilai, kemudian menghitung nilai rata-rata. Program unguided pertama menerapkan struct, array, dan fungsi untuk menyimpan data maksimal 10 mahasiswa serta menghitung nilai akhir berdasarkan nilai UTS, UAS, dan tugas. Program unguided kedua menerapkan ADT pelajaran untuk menyimpan dan menampilkan nama serta kode mata pelajaran dengan memisahkan deklarasi, implementasi, dan program utama. Program unguided ketiga menerapkan array dua dimensi dan pointer untuk menampilkan isi array, menukarkan elemen dari dua array pada posisi tertentu, serta menukarkan nilai dua variabel menggunakan pointer.

Praktikum ini membantu saya memahami cara menerapkan konsep ADT, struct, fungsi, prosedur, array, dan pointer dalam program C++. Selain memahami teori, saya juga dapat menerapkan konsep-konsep tersebut untuk membuat program yang lebih terstruktur, mengolah data, melakukan perhitungan, serta menukar nilai sesuai dengan kebutuhan yang diberikan.

## Referensi

[1] Linden, T. A. (1976). "The Use of Abstract Data Types to Simplify Program Modifications." ACM SIGPLAN Notices, 11(SI), 12–23.
<br>
[2] Sikkel, K., & van Vliet, J. C. (1992). "Abstract Data Types as Reusable Software Components: The Case for Twin ADTs." Software Engineering Journal, 7(3), 177–183.