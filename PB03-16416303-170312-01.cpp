// NIM/Nama : 16416303 / M. Qodir Ibrahim Jayakusuma
// Nama file : PB03-16416303-170312-01.cpp
// Tanggal : 12-03-2017
// Deskripsi : program penghitung golden age


#include <iostream>
using namespace std;

    //deklarasi variabel
    typedef struct {
        int hari, bulan, tahun;
    }tanggal;
    tanggal lahir;
    tanggal sekarang;

    //deklarasi fungsi
    int umur(tanggal lahir, tanggal sekarang){
        int x,y,a,b,c;

        lahir.bulan = lahir.bulan*30;
        sekarang.bulan = sekarang.bulan*30;
        c = (sekarang.tahun - lahir.tahun)*360;
        b = lahir.bulan + lahir.hari;
        a = sekarang.bulan + sekarang.hari;
        x = c - b + a;
        cout << "Bebek tersebut berumur " << x << " hari" << endl;
        if(x <= 150 && x>= 100){
            cout << "Bebek tersebut enak bila digoreng." << endl;
        }else{
            cout << "Bebek tersebut tidak enak bila digoreng" << endl;
        };
    };

int main(){
    int x, i;

    //input
    cout << "masukkan tanggal : ";
    cin >> sekarang.hari;
    cout << "masukkan bulan : ";
    cin >> sekarang.bulan;
    cout << "masukkan tahun : ";
    cin >> sekarang.tahun;
    cout << "masukkan jumlah bebek :";
    cin >> x;

    //looping bebek
    for(i=1;i<=x;i++){
        cout << "Masukan tanggal lahir bebek " << i << " : ";
        cin >> lahir.hari;
        cout << "Masukan bulan lahir bebek " << i << " : ";
        cin >> lahir.bulan;
        cout << "Masukan tahun lahir bebek " << i << " : ";
        cin >> lahir.tahun;

        //penggunaan fungsi
        umur(lahir, sekarang);
    };


return 0;
}
