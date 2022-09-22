#include <conio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
        
		string nama;
        int tugas;
        int uts;
        int uas;

        cout<<"DAFTAR NILAI MAHASISWA"<<endl;
        cout<<endl;
        cout<<"Masukan Nama : ";
        cin>>nama;
        cout<<"Masukan Nilai Tugas : ";
        cin>>tugas;
        cout<<"Masukan Nilai UTS : ";
        cin>>uts;
        cout<<"Masukan Nilai UAS : ";
        cin>>uas;

        int ntugas=0.20*tugas;
        int nuts=0.30*uts;
        int nuas=0.50*uas;

        cout<<"------------------------------------------------------"<<endl;
        cout<<"Nama        Nilai Tugas      Nilai UTS        Nilai UAS "<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<nama<<"     "<<tugas<<" x 20% = "<<ntugas<<"   "<<uts<<" x 30% = "<<nuts<<"    "<<uas<<" x 50% = "<<nuas<<" "<<endl;
        cout<<endl;
        cout<<endl;

        int total = ntugas+nuts+nuas;

        cout<<"------------------------------------------------------"<<endl;
        cout<<"Total Nilai yang di dapatkan = "<<total<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<"------------------------------------------------------"<<endl;
        if (total >=70 && total <=100)
        cout<<"Selamat Anda Lulus"<<endl;
        
        else if (total >=0 && total <=69)
        cout<<"Maaf Anda Tidak Lulus"<<endl;
        
        else 
        cout<<"Maaf, format nilai tidak sesuai"<<endl;
        
        cout<<"------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<"code improvised from internet by :"<<endl;
        cout<<"panji kurniawan"<<endl;
        cout<<"Mahasiswa UNIMAR"<<endl;
        cout<<"Jurusan Ilmu Komputer"<<endl;
        cout<<"Semester 2"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"------------------------------------------------------"<<endl;
		cout<<"TERIMA KASIH"<<endl;
        cout<<"------------------------------------------------------"<<endl;
        

        getch();

}