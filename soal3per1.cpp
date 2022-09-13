#include <iostream>
using namespace std;


int main(){
    int Upin,Ipin,Mail,Ros;
    cout<<"Masukan buah Upin"<<endl;
    cin>>Upin;
    cout<<"Masukan buah Ipin"<<endl;
    cin>>Ipin;
    cout<<"Masukan buah Mail"<<endl;
    cin>>Mail;

    if(Upin>Ipin){
        if(Mail>Upin){
            Ros = Mail;
        }else{
            Ros = Upin;
        }
        
    }else if(Ipin>Upin){
        if(Mail>Ipin){
            Ros = Mail;
        }else{
            Ros = Ipin;
        }
    }
       cout<<"Rambutan kak Ros adalah "<<Ros<<" buah";
}