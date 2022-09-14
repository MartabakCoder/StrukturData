#include <iostream>

using namespace std;

struct tanggal{
    int tgl,bln,thn;
};

tanggal today;
void  tanggalSekarang(tanggal a){
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

void hariX(tanggal b, int x){
    b.tgl = b.tgl+ x;
    tanggalSekarang(b);
}
int main(){
    today.tgl =14;
    today.bln = 1;
    today.thn = 2022;
    cout<<"Hari ini: ";
    tanggalSekarang(today);
    cout<<endl;
    hariX(today, -10);

}