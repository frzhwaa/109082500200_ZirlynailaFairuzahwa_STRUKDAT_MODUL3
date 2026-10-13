# <h1 align="center">Laporan Praktikum Modul 3 - ABSTRACT DATA TYPE (ADT)</h1>

<p align="center">Zirlynaila Fairuzahwa - 109082500200</p>

## Dasar Teori

Array, pointer, fungsi, prosedur, dan parameter merupakan konsep dasar dalam pemrograman C++ yang digunakan untuk menyimpan, mengakses, dan mengolah data serta membentuk program menjadi bagian-bagian yang lebih terstruktur. Pemahaman terhadap konsep tersebut penting dalam pembelajaran pemrograman C++ karena berkaitan dengan pengelolaan data dan pembuatan program secara terstruktur [1].

### A. Array<br/>

Array merupakan kumpulan data dengan nama yang sama dan setiap elemennya memiliki tipe data yang sama. Setiap elemen array dapat diakses menggunakan indeks. Dalam C++, array dapat memiliki satu dimensi, dua dimensi, maupun lebih dari dua dimensi. Array satu dimensi menggunakan satu indeks, sedangkan array dua dimensi menggunakan dua indeks dan dapat digunakan untuk menyimpan data dalam bentuk tabel. Array berdimensi banyak menggunakan lebih dari dua indeks sesuai dengan jumlah dimensinya.

#### 1. Array Satu Dimensi
Array satu dimensi merupakan array yang hanya memiliki satu larik data. Deklarasinya menggunakan bentuk tipe_data nama_var[ukuran]. Elemen array disimpan secara berurutan dan indeks pertama dimulai dari 0. [1]

#### 2. Array Dua Dimensi dan Berdimensi Banyak
Array dua dimensi memiliki dua indeks dan dapat digunakan untuk menyimpan data berbentuk tabel. Sementara itu, array berdimensi banyak memiliki lebih dari dua indeks sehingga dapat digunakan untuk menyimpan data dengan struktur yang lebih kompleks.

### B. Pointer dan String<br/>

Pointer merupakan variabel yang digunakan untuk menyimpan alamat memori dari variabel lain. Alamat suatu variabel dapat diperoleh menggunakan operator &, sedangkan operator * dapat digunakan untuk mengakses nilai yang ditunjuk oleh pointer. Pointer juga memiliki hubungan dengan array karena pointer dapat menunjuk alamat elemen array dan digunakan untuk mengakses elemen-elemen tersebut.

String merupakan data yang digunakan untuk menyimpan teks atau kumpulan karakter. Dalam C++, string dapat direpresentasikan sebagai array karakter yang diakhiri dengan karakter null \0. Setiap karakter dapat diakses menggunakan indeks, sedangkan pointer karakter dapat digunakan untuk menunjuk karakter pada string.

#### 1. Pointer dan Array
Pointer dapat menunjuk ke elemen pertama array dan digunakan untuk mengakses elemen berikutnya melalui operasi pointer. Jika pointer menunjuk ke a[0], maka *(pa + 1) dapat digunakan untuk mengakses isi a[1].

#### 2. String dan Pointer
String pada dasarnya merupakan kumpulan karakter. Array karakter dan pointer karakter memiliki hubungan dalam penyimpanan dan pengaksesan string. Array karakter menyimpan karakter secara langsung, sedangkan pointer dapat menunjuk ke karakter pertama dari suatu string.

### C. Fungsi, Prosedur, dan Parameter<br/>

Fungsi merupakan blok kode yang dibuat untuk menjalankan tugas tertentu. Penggunaan fungsi dapat membuat program lebih terstruktur dan mengurangi pengulangan kode. Fungsi dapat menerima masukan melalui parameter dan dapat mengembalikan nilai melalui return. Sementara itu, prosedur dalam C++ dapat diterapkan menggunakan fungsi bertipe void, yaitu fungsi yang menjalankan tugas tertentu tetapi tidak mengembalikan nilai.

Parameter fungsi dibedakan menjadi parameter formal dan parameter aktual. Parameter formal merupakan variabel yang dituliskan ketika fungsi didefinisikan, sedangkan parameter aktual merupakan nilai atau variabel yang diberikan ketika fungsi dipanggil. Parameter dapat dilewatkan dengan beberapa cara, yaitu call by value, call by pointer, dan call by reference. Pada call by value, nilai parameter disalin sehingga perubahan di dalam fungsi tidak mengubah variabel asli. Pada call by pointer dan call by reference, fungsi dapat mengubah nilai variabel yang berada di luar fungsi.

#### 1. Fungsi dan Prosedur
Fungsi digunakan untuk menjalankan tugas tertentu dan dapat menghasilkan nilai keluaran, sedangkan prosedur atau fungsi void digunakan untuk menjalankan tugas tanpa mengembalikan nilai. [1]

#### 2. Parameter Fungsi
Parameter digunakan untuk memberikan data kepada fungsi. Parameter formal berada pada definisi fungsi, sedangkan parameter aktual diberikan saat fungsi dipanggil. [1]

#### 3. Cara Melewatkan Parameter
Parameter dapat dilewatkan menggunakan call by value, call by pointer, atau call by reference. Perbedaan ketiganya terletak pada cara data diberikan kepada fungsi dan apakah perubahan nilai di dalam fungsi dapat memengaruhi variabel asal.

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

Program tersebut digunakan untuk menginputkan lima buah nilai siswa dan menampilkan data nilai tersebut serta data nilai tahunan yang disimpan dalam array 2 dimensi. Program menggunakan konstanta MAX dengan nilai 5, sehingga array nilai memiliki lima elemen dan array nilai_tahun memiliki ukuran 5 × 5. Pertama, program meminta pengguna untuk memasukkan lima nilai menggunakan perulangan for, kemudian setiap nilai yang dimasukkan disimpan ke dalam array nilai[i]. Setelah semua nilai dimasukkan, program menampilkan kembali data nilai siswa dengan mengakses setiap elemen array nilai menggunakan perulangan for. Selanjutnya, program menampilkan isi array 2 dimensi nilai_tahun menggunakan dua perulangan for, yaitu perulangan pertama untuk baris dan perulangan kedua untuk kolom. Setiap elemen pada nilai_tahun[i][j] kemudian ditampilkan ke layar.

## Unguided

### 1. Buat program yang dapat menyimpan data mahasiswa (max. 10) ke dalam sebuah array dengan field nama, nim, uts, uas, tugas, dan nilai akhir. Nilai akhir diperoleh dari FUNGSI dengan rumus 0.3*uts+0.4*uas+0.3*tugas.

```C++
source code unguided 1

#include <iostream>
using namespace std;
#define N 3

int main() {
    int A[N][N], B[N][N];
    int tambah[N][N], kurang[N][N], kali[N][N];
    cout << "Masukkan elemen matriks A (3x3):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> A[i][j];
        }
    }
    cout << "Masukkan elemen matriks B (3x3):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> B[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            tambah[i][j] = A[i][j] + B[i][j];
            kurang[i][j] = A[i][j] - B[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            kali[i][j] = 0;
            for (int k = 0; k < N; k++) {
                kali[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    cout << "\nHasil Penjumlahan Matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << tambah[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nHasil Pengurangan Matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << kurang[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\nHasil Perkalian Matriks:" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << kali[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
```

### Output Unguided 1 :

##### Output 1

![Screenshot Output Unguided 1_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal1.png)

Program tersebut digunakan untuk melakukan tiga operasi pada dua buah matriks berukuran 3×3, yaitu penjumlahan, pengurangan, dan perkalian matriks. Program menggunakan konstanta N dengan nilai 3 sehingga array A, B, tambah, kurang, dan kali masing-masing memiliki ukuran 3×3. Pertama, program meminta pengguna untuk memasukkan sembilan elemen matriks A menggunakan dua perulangan for, yaitu perulangan pertama untuk menentukan baris dan perulangan kedua untuk menentukan kolom. Setelah itu, program melakukan hal yang sama untuk memasukkan sembilan elemen matriks B. Selanjutnya, program melakukan penjumlahan dan pengurangan dengan mengambil elemen pada posisi baris dan kolom yang sama, yaitu A[i][j] + B[i][j] untuk penjumlahan dan A[i][j] - B[i][j] untuk pengurangan, kemudian hasilnya disimpan ke dalam array tambah dan kurang. Untuk perkalian matriks, program menggunakan tiga perulangan for. Variabel i digunakan untuk menentukan baris matriks A, j untuk menentukan kolom matriks B, dan k digunakan untuk menghitung perkalian setiap elemen yang diperlukan. Hasil perkalian kemudian disimpan ke dalam array kali. Setelah seluruh proses selesai, program menampilkan hasil penjumlahan, pengurangan, dan perkalian matriks ke layar.

Sebagai contoh, ketika matriks A yang dimasukkan adalah 1 2 3, 4 5 6, 7 8 9 dan matriks B adalah 9 8 7, 6 5 4, 3 2 1, maka hasil penjumlahannya adalah 10 10 10, 10 10 10, dan 10 10 10. Hasil pengurangannya adalah -8 -6 -4, -2 0 2, dan 4 6 8. Untuk perkalian matriks, program menghitung setiap elemen hasil berdasarkan perkalian elemen pada baris matriks A dengan elemen pada kolom matriks B, sehingga menghasilkan 30 24 18, 84 69 54, dan 138 114 90. Setelah semua operasi selesai, ketiga hasil tersebut ditampilkan dengan keterangan "Hasil Penjumlahan Matriks", "Hasil Pengurangan Matriks", dan "Hasil Perkalian Matriks".

### 2. Buatlah ADT pelajaran sebagai berikut di dalam file "pelajaran.h":
### Type pelajaran < <br>namaMapel : string <br>kodeMapel : string <br>> <br>function create_pelajaran( namapel : string, <br>kodepel : string ) → pelajaran <br>procedure tampil_pelajaran( input pel : pelajaran )
### Buatlah implementasi ADT pelajaran pada file "pelajaran.cpp"
### Cobalah hasil implementasi ADT pada file "main.cpp"
### using namespace std; <br>int main(){ <br>string namapel = "Struktur Data"; <br>string kodepel = "STD"; <br>pelajaran pel = create_pelajaran(namapel,kodepel); <br>tampil_pelajaran(pel); <br>return 0; <br>}

```C++
source code unguided 2

#include <iostream>
using namespace std;

void tukar(int *x, int *y, int *z);

int main(){
    int x, y, z;
    x = 10;
    y = 20;
    z = 30;
    cout << "Nilai sebelum ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    tukar(&x, &y, &z);
    cout << "\nNilai setelah ditukar" << endl;
    cout << "x = " << x << endl;
    cout << "y = " << y << endl;
    cout << "z = " << z << endl;
    return 0;
}

void tukar(int *x, int *y, int *z){
    int temp;
    temp = *z;
    *z = *y;
    *y = *x;
    *x = temp;
}
```

### Output Unguided 2 :

##### Output 1

![Screenshot Output Unguided 2_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal2.png)

Program tersebut digunakan untuk menukar nilai dari tiga buah variabel menggunakan pointer. Pada awal program terdapat void tukar(int *x, int *y, int *z) yang menunjukkan bahwa prosedur tukar menerima tiga parameter berupa pointer bertipe int. Di dalam main, terdapat tiga variabel yaitu x,y, dan z yang masing-masing diberi nilai 10, 20, dan 30. Nilai tersebut kemudian ditampilkan sebagai nilai sebelum ditukar. Setelah itu, program memanggil prosedur tukar(&x, &y, &z) dengan mengirimkan alamat dari ketiga variabel menggunakan operator &. Di dalam prosedur tukar, variabel temp digunakan sebagai tempat penyimpanan sementara. Nilai yang ditunjuk oleh z disimpan ke temp, kemudian nilai yang ditunjuk oleh y dipindahkan ke z, nilai yang ditunjuk oleh x dipindahkan ke y, dan nilai yang sebelumnya disimpan di temp dipindahkan ke x. Karena parameter yang diberikan berupa alamat, perubahan tersebut langsung memengaruhi nilai asli x, y, dan z. Setelah prosedur selesai, program menampilkan nilai ketiga variabel setelah ditukar.

Sebagai contoh, sebelum proses pertukaran dilakukan, nilai x = 10, y = 20, dan z = 30. Ketika prosedur tukar(&x, &y, &z) dijalankan, nilai z yaitu 30 terlebih dahulu disimpan ke dalam temp. Kemudian nilai y yaitu 20 dipindahkan ke z, sehingga z menjadi 20. Selanjutnya nilai x yaitu 10 dipindahkan ke y, sehingga y menjadi 10. Terakhir, nilai 30 yang tersimpan di temp dipindahkan ke x, sehingga x menjadi 30. Dengan demikian, setelah proses pertukaran selesai, nilai menjadi x = 30, y = 10, dan z = 20.

### 3. Buatlah program dengan ketentuan : <br>- 2 buah array 2D integer berukuran 3x3 dan 2 buah pointer integer <br>- fungsi/prosedur yang menampilkan isi sebuah array integer 2D <br>- fungsi/prosedur yang akan menukarkan isi dari 2 array integer 2D pada posisi tertentu <br>- fungsi/prosedur yang akan menukarkan isi dari variabel yang ditunjuk oleh 2 buah pointer

```C++
source code unguided 3

#include <iostream>
using namespace std;

int maksimum(int arr[], int n);
int minimum(int arr[], int n);
void rataRata(int arr[], int n, float &rata);
int main(){
    int arrA[10] = {48, 2, 7, 21, 5, 20, 77, 9, 10, 1};
    int pilihan;
    int hasil;
    float rata;
    cout << "--- Menu Program Array ---" << endl;
    cout << "1. Tampilkan isi array" << endl;
    cout << "2. cari nilai maksimum" << endl;
    cout << "3. cari nilai minimum" << endl;
    cout << "4. Hitung nilai rata - rata" << endl;
    cout << "Pilih menu : ";
    cin >> pilihan;
    if(pilihan == 1){
        cout << "Isi array : ";
        for(int i = 0; i < 10; i++){
            cout << arrA[i] << " ";
        }
        cout << endl;
    }
    else if(pilihan == 2){
        hasil = maksimum(arrA, 10);
        cout << "Nilai maksimum = " << hasil << endl;
    }
    else if(pilihan == 3){
        hasil = minimum(arrA, 10);
        cout << "Nilai minimum = " << hasil << endl;
    }
    else if(pilihan == 4){
        rataRata(arrA, 10, rata);
        cout << "Nilai rata - rata = " << rata << endl;
    }
    else{
        cout << "Pilihan tidak tersedia." << endl;
    }
    return 0;
}

int maksimum(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int minimum(int arr[], int n){
    int min = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

void rataRata(int arr[], int n, float &rata){
    int jumlah = 0;
    for(int i = 0; i < n; i++){
        jumlah = jumlah + arr[i];
    }
    rata = (float)jumlah / n;
}
```

### Output Unguided 3 :

##### Output 1

![Screenshot Output Unguided 3_1](https://github.com/frzhwaa/109082500200_ZirlynailaFairuzahwa_STRUKDAT_MODUL3/blob/main/Modul3/output/soal3.png)

Program tersebut digunakan untuk menampilkan isi array, mencari nilai maksimum, mencari nilai minimum, dan menghitung nilai rata-rata dari sebuah array. Pada awal program terdapat tiga prototype, yaitu fungsi maksimum, fungsi minimum, dan prosedur rataRata. Array arrA berisi 10 nilai, yaitu 48, 2, 7, 21, 5, 20, 77, 9, 10, dan 1. Program kemudian menampilkan menu yang terdiri dari empat pilihan dan meminta pengguna memasukkan pilihan yang disimpan ke dalam variabel pilihan. Jika pengguna memilih menu 1, program menampilkan seluruh isi array menggunakan perulangan for. Jika memilih menu 2, program memanggil fungsi maksimum(arrA, 10) untuk mencari nilai terbesar dan hasilnya disimpan ke dalam variabel hasil. Jika memilih menu 3, program memanggil fungsi minimum(arrA, 10) untuk mencari nilai terkecil. Jika memilih menu 4, program memanggil prosedur rataRata(arrA, 10, rata) untuk menghitung nilai rata-rata, kemudian hasilnya ditampilkan melalui variabel rata.

Pada fungsi maksimum, nilai pertama array yaitu arr[0] digunakan sebagai nilai maksimum sementara. Selanjutnya, perulangan for membandingkan setiap elemen berikutnya dengan nilai max. Jika ditemukan nilai yang lebih besar, maka nilai max diperbarui dan setelah seluruh elemen diperiksa, fungsi mengembalikan nilai tersebut menggunakan return. Pada fungsi minimum, prosesnya hampir sama, tetapi setiap elemen dibandingkan untuk mencari nilai yang paling kecil. Sementara itu, prosedur rataRata menggunakan variabel jumlah untuk menjumlahkan seluruh elemen array menggunakan perulangan for. Setelah seluruh nilai dijumlahkan, hasilnya dibagi dengan jumlah elemen n dan disimpan ke dalam parameter reference rata, sehingga nilai tersebut dapat digunakan kembali di dalam main.

Sebagai contoh, ketika pengguna memilih menu 1, program akan menampilkan isi array yaitu 48 2 7 21 5 20 77 9 10 1. Jika pengguna memilih menu 2, fungsi maksimum akan membandingkan seluruh nilai dan menemukan bahwa nilai terbesar adalah 77, sehingga program menampilkan Nilai maksimum = 77. Jika pengguna memilih menu 3, fungsi minimum akan menemukan nilai terkecil yaitu 1, sehingga program menampilkan Nilai minimum = 1. Jika pengguna memilih menu 4, prosedur rataRata menjumlahkan seluruh nilai sehingga diperoleh 200, kemudian 200 dibagi dengan 10 dan menghasilkan rata-rata 20, sehingga program menampilkan Nilai rata - rata = 20.

## Kesimpulan

Pada praktikum Modul 2 Pengenalan Bahasa C++ (Bagian Kedua), dapat disimpulkan bahwa materi pada modul ini membantu saya dalam memahami penggunaan array, pointer, string, fungsi, prosedur, serta parameter pada bahasa C++. Array dapat digunakan untuk menyimpan sekumpulan data dalam satu variabel, sedangkan pointer dan reference dapat digunakan untuk mengakses atau mengubah nilai suatu variabel melalui alamat atau referensinya. Fungsi dan prosedur juga dapat digunakan untuk membagi program menjadi beberapa bagian sesuai dengan tugasnya.

Melalui tiga program unguided yang sudah saya kerjakan, saya memahami penerapan konsep tersebut dalam menyelesaikan permasalahan. Program pertama menerapkan array dua dimensi untuk melakukan operasi penjumlahan, pengurangan, dan perkalian matriks 3×3. Program kedua menerapkan pointer dan reference untuk menukar nilai dari tiga variabel. Program ketiga menerapkan array, fungsi, prosedur, serta pass by reference untuk menampilkan isi array, mencari nilai maksimum dan minimum, serta menghitung nilai rata-rata.

Praktikum ini membantu saya dalam memahami cara penggunaan array, pointer, reference, fungsi, prosedur, dan parameter dalam program C++. Selain memahami teori, saya juga dapat menerapkan konsep tersebut untuk membuat program yang dapat menyelesaikan permasalahan sesuai dengan kebutuhan yang diberikan.

## Referensi

[1] Dewi, Luh Joni Erawati. (2012). “Media Pembelajaran Bahasa Pemrograman C++.” Jurnal Pendidikan Teknologi dan Kejuruan, 7(1). Universitas Pendidikan Ganesha. https://doi.org/10.23887/jptk-undiksha.v7i1.31.
<br>
[2] Riyanda, A. R., & Suana, W. (2019). “Pengembangan Modul Pembelajaran Pemrograman Dasar Berbasis Adobe Flash CS6 Bagi Siswa Kelas XI RPL.” Jurnal Pendidikan Teknologi Informasi dan Vokasional, 1(2).