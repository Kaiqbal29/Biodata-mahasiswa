#include <iostream>
using namespace std;

struct mahasiswa {
    char nama[50], alamat[50], nim[10];
    int umur;
};

int main() {
    int n;
    cout << "Masukan jumlah mahasiswa: ";
    cin >> n;
    system("cls");
    mahasiswa* bio = new mahasiswa[n];
    cout << "=====================================";
    cout << "\n|        Tugas Praktikum 4           |";
    cout << "\n| Iqbal Faris Ihsani                 |";
    cout << "\n| 22.11.4850                         |";
    cout << "\n| 22 IF05                            |";
    cout << "\n====================================="<<endl;
    //input
    cout << "\n------------BIODATA MAHASISWA---------------\n" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nama Mahasiswa            : ";cin >> bio[i].nama;
        cout << "Nomor Induk Mahasiswa     : ";cin >> bio[i].nim;
        cout << "Umur Mahasiswa            : ";cin >> bio[i].umur;
        cout << "Alamat Mahasiswa          : ";cin >> bio[i].alamat;
        cout << endl;
    }
    system("cls");
    //output
    cout << "\n------------BIODATA MAHASISWA---------------\n" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Nama Mahasiswa            : " << bio[i].nama << endl;
        cout << "Nomor Induk Mahasiswa     : " << bio[i].nim << endl;
        cout << "Umur Mahasiswa            : " << bio[i].umur << endl;
        cout << "Alamat Mahasiswa          : " << bio[i].alamat << endl;
        cout << "" << endl;
    }
    system("pause");
    return 0;
}
