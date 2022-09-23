#include<iostream>

using namespace std;

int const maxsize = 5;

struct paket
{
    string jenisBrg;
    int berat;
    string kota;
};

paket kirim[100];


void tambahData(int x){
    if(x>maxsize){
        cout<<"Sorry Stack is Full"<<endl;
    }else{
        cout<<"Masukan Barang ke-"<<x<<endl<<endl;
        cout<<"Masukan Jenis Barang :";
        cin>>kirim[x].jenisBrg;
        cout<<"Masukan Berat Barang :";
        cin>>kirim[x].berat;
        cout<<"Masukan Kota :";
        cin>>kirim[x].kota;
        cout<<"=============="<<endl;
    }
}

void tampilData(int a){
    cout<<"Tampilan Data"<<endl<<endl;
    for(int i=1;i<a;i++){
        cout<<i<<" "<<kirim[i].jenisBrg<<" "<<kirim[i].berat<<" "<<kirim[i].kota<<endl;
    }
    cout<<"=============="<<endl;
}

void hapusData(int b){
    cout<<"Data Terhapus \n"<<kirim[b-1].jenisBrg<<" "<<kirim[b-1].berat<<" "<<kirim[b-1].jenisBrg<<endl;
}

int main(){
    int pilih;
    int datake=1;
    do
    {
        cout<<"=============="<<endl;
        cout<<"MENU UTAMA"<<endl;
        cout<<"1. Tambah Data"<<endl;
        cout<<"2. Tampil Data"<<endl;
        cout<<"3. Hapus Data Terakhir"<<endl;
        cout<<"9. Keluar"<<endl;
        cout<<"Pilihan Anda(1-9) : ";
        cin>>pilih;
        cout<<"=============="<<endl;
        if(pilih==1){
            tambahData(datake);
            datake++;
        }else if(pilih==2){
            tampilData(datake);
        }else if(pilih==3){
            hapusData(datake);
            datake--;
        }else if (pilih==9){
            cout<<"Terimakasih telah berkunjung ";
        }
    } while (pilih!=9);

    
}