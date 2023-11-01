#include<iostream>
using namespace std;

int main()
{
        char* nama ="Afif Fahri Afrizal" ;
        char panggil [5] ="Apip";
        char* npm ="2371020001";
        char* kelas="1B";
        char* jenisKelamin="Laki Laki";
        char* beratBadan="50";
        char* tinggiBadan="150";
        bool hasilOR = false || false ;
        bool dua = false || true ;
        bool tiga = true || false ;
        bool empat = true || true ;
        
    cout << "---------------------------------------------" << "\n";
    cout << "|              BIODATA DIRI                 |" << "\n";
    cout << "---------------------------------------------" << "\n";
    cout << "Nama Lengkap Mahasiswa :"<< nama    << "\n";
    cout << "Nama Panggilan         :"<< panggil << "\n";
    cout << "Npm  Mahasiswa         :"<< npm     << "\n";
    cout << "kelas                  :"<< kelas   << "\n";
    cout << "---------------------------------------------" << "\n";
    cout << "Jenis Kelamin          :"<< jenisKelamin       << "\n";
    cout << "Berat Badan            :"<< beratBadan <<" kg" << "\n";
    cout << "Tinggi Badan           :"<< tinggiBadan<<" cm" << "\n";
    cout << "---------------------------------------------" << "\n";
    cout << "|           TABEL KEBENARAN OR              |" << "\n";
    cout << "---------------------------------------------" << "\n";
    cout << "| Operand A |" <<" Operand B |" <<" Hasil A||B |"  << "\n";
    cout << "| False     | False     | " <<"False " << hasilOR <<"    |"  << "\n";
    cout << "| False     | True      | " <<"True " << dua      <<"     |"  << "\n";
    cout << "| True      | False     | " <<"True " << tiga     <<"     |"  << "\n";
    cout << "| True      | True      | " <<"True " << empat    <<"     |"  << "\n";
    cout << "---------------------------------------------" << "\n";
    cout << "|           /Made By Afif Fahri/            |" << "\n";
    cout << "---------------------------------------------" << "\n";
    
    return 0;
}