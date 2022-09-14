/*
Herarki Data:
1. Huruf
2. Variable : field
3. Record
4. File :: table
5. Database
*/
#include <iostream>

using namespace std;

struct tanggal{
    int tgl,bln,thn;
};

struct nilai{
    char nim[5];
    char nama[30];
    tanggal birthday;
    int nilai;
};
void  tanggalShow(tanggal a){
    switch (a.bln)
    {
    case 1:
        cout<<a.tgl<<" "<<"Januari"<<" "<<a.thn;
        break;
    case 2:
        cout<<a.tgl<<" "<<"Februari"<<" "<<a.thn;
        break;
    case 3:
        cout<<a.tgl<<" "<<"Maret"<<" "<<a.thn;
        break;
    case 4:
        cout<<a.tgl<<" "<<"April"<<" "<<a.thn;
        break;
    case 5:
        cout<<a.tgl<<" "<<"Mei"<<" "<<a.thn;
        break;
    case 6:
        cout<<a.tgl<<" "<<"Juni"<<" "<<a.thn;
        break;
    case 7:
        cout<<a.tgl<<" Juli "<<a.thn;
        break;
    case 8:
        cout<<a.tgl<<" Agustus "<<a.thn;
        break;
    case 9:
        cout<<a.tgl<<" September "<<a.thn;
        break;
    case 10:
        cout<<a.tgl<<" Oktober "<<a.thn;
        break;
    case 11:
        cout<<a.tgl<<" November "<<a.thn;
        break;
    case 12:
        cout<<a.tgl<<" Desember "<<a.thn;
        break;
    default:
        break;
    }
    
}
nilai matematika[100];
int main(){
    int i = 0;
    char jawab = 'y';
    while (jawab=='y'||jawab=='Y'){
        cout<<"Data ke-"<<i+1<<endl;
        cout<<"Inputkan NIM : ";
        cin>>matematika[i].nim;
        cout<<"Inputkan Nama : ";
        cin>>matematika[i].nama;
        cout<<"Tanggal ";
        cin>>matematika[i].birthday.tgl;
        cout<<"Bulan ";
        cin>>matematika[i].birthday.bln;
        cout<<"Tahun ";
        cin>>matematika[i].birthday.thn;
        cout<<"Inputkan Nilai : ";
        cin>>matematika[i].nilai;
        cout<<"Apakah ingin melanjutkan ? [y/t] : ";
        cin>>jawab;
        i++;
    }
    cout<<"\n===Output Semua Data===\n";
    int a=0;
    int sum=0;
    while (a<i){
        cout<<"NIM : ";
        cout<<matematika[a].nim<<" ";
        cout<<"Nama : ";
        cout<<matematika[a].nama<<" ";
        cout<<"Nama : ";
        cout<<matematika[a].nama<<" ";
        cout<<"Tanggal Lahir : ";
        tanggalShow(matematika[a].birthday);
        cout<<" Nilai : ";
        cout<<matematika[a].nilai<<endl;
        sum = sum + matematika[a].nilai;
        a++;
    }
    int avarage = sum/i;
    
    cout<<"\n===Output Mahasiswa Remidi===\n";
    a=0;
    while (a<i){
        if(matematika[a].nilai<avarage){
        cout<<"(REMIDI) ";
        cout<<"NIM : ";
        cout<<matematika[a].nim<<" ";
        cout<<"Nama : ";
        cout<<matematika[a].nama<<" ";
        cout<<"Tanggal Lahir : ";
        tanggalShow(matematika[a].birthday);
        cout<<" Nilai : ";
        cout<<matematika[a].nilai<<endl;
        }
            
        
        a++;
    }
    return 0;
}