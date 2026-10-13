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