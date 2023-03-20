#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        int NIM;
        string jurusan;
        double IPK;
    //Fungsi yang pertamakali dipanggil setiap instansiasi kelas
    //BUAT CONSTRUCTOR, AKAN KELUAR PERTAMA KALI SAAT KELAS DIPANGGIL
    Mahasiswa(string nama, int NIM){
        //Mahasiswa merupakan namespace
        cout << "Ini hasil dari __construct" << endl;
        Mahasiswa::nama = nama;
        Mahasiswa::NIM = NIM;
    }

    void tampilMahasisawa(){
        cout << "Namanya adalah : " << Mahasiswa::nama << endl;
        cout << "NIM : " << Mahasiswa::NIM ;
        cout << endl << endl;
    }

    void ubahMahasiswa(string nama){
        Mahasiswa::nama = nama;
        cout << "Setelah diganti menjadi : " << endl;
        tampilMahasisawa();
        
    }
};

int main(){
    string opsi, name;

    Mahasiswa mhs1 = Mahasiswa("Zaka", 123220077);
    Mahasiswa mhs2 = Mahasiswa("Andre", 123220078);

    mhs1.tampilMahasisawa();
    mhs2.tampilMahasisawa();

    cout << "Apakah anda ingin mengganti nama mhs 1? : ";
    cin >> opsi ; 
    if (opsi == "ya")
    {
        cout << "Masukkan nama : ";
        cin >> name ;
        mhs1.ubahMahasiswa(name);
    }
    
}