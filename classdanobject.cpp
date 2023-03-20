#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

class Mahasiswa {
    public:
        string nama;
        string NIM;
        string jurusan;
        double IPK;
};

int main(){
    Mahasiswa data1;
    data1.nama = "Zaka";
    data1.NIM = "123220077";
    data1.jurusan = "Teknik Informatika";
    data1.IPK = 4.0f;

    cout << data1.nama;
}