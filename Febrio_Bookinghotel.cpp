/*
Febrio 140110210011
Aldi Hermawan 140110210004
Linda Damayanti Putri 140110210013
Siti Nur Hikmah 140110210036
Indah Dewi Maelowati 140110210052
Veronica Clasrissa Putrie 140110210055
*/
//Booking hotel
#include<iostream>
#include<istream>
#include<fstream>
#include<stdlib.h>
#include<string.h>
#include<iomanip>
#include<windows.h>
using namespace std;
// struct untuk menyimpan data yang diperlukan
struct pesan{
    //nama hotel
int hotel;
//banyaknya kamar yang dipesan
int banyak_kamar;
//Jenis kamar yang dipilih
int jenis_kamar;
//harga tiap pemesanan kamar
int subharga;
//check out Date,Month,Year
int D,M,Y;
//dalam malam
int durasi;
//nohp
string nohp;
//banyak fasilitas
int jumlah_fasilitas;
int jenis_fasilitas;
};
//record
typedef pesan data[100];
data pesan;
//untuk garis
void garis();
void garis1();
void garis2();
void garis3();
//login akun
void login();
//menu login
void menu();
void regis();
//registrasi
//sambutan setelah login
void warna();
void welcome();
void logo();
void delay();
void posisixy();
void loading();
//gambar
void gambar();
//exit
void thankyou();
//main menu hotel
void mainmenu(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]);
//menu 1 info hotel
void infohotel(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]);
//menu 2 ketersediaan
void ketersediaan(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]);
//menu 3 pemesanan
void pemesanan(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]);
//milih metode
void metode(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
//cash
void cash(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
//transfer
void transfer(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
//struk
void struk(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama,int booking,float diskon);
//registb
void regis_tb(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
//akuntb
void akun_tb(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
//travelinbank
void travelinbank(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
void alfamartindomaret(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama);
void Fasilitas_Tambahan0();
void Fasilitas_Tambahan1();
void Fasilitas_Tambahan2();
int fasilitas0[5]={50000,30000,75000,50000,25000};
string nfasilitas0[5]={"Bunga di kolam renang","Antar jemput Bandara"," Dekorasi Kamar  ","Floating Breakfast","Game Zone for Kids "};
int fasilitas1[5]={150000,35000,75000,100000,25000};
string nfasilitas1[5]={"Tour Guide ","Antar jemput Bandara"," Dekorasi Kamar  "," Spa","Sauna"};
int fasilitas2[5]={200000,40000,75000,100000,75000};
string nfasilitas2[5]={"Spa","Antar jemput Bandara ","Dekorasi Kamar","Bar","Onsen "};
string fasil;
string lagi;
int b=-1;
int c=0;
main(){
//untuk bayar
int harga1=0;
int bayar=0;
//nama hotel
string hotel[3]={"IBIS", "THE TRANS", "HILTON"};
//jenis kamar
string tipe[3]= {"Standar Room", "Deluxe Room", "Suite"};
//harga kamar dari hotel
int harga[3][3]={{2500000,4500000,6000000},
                {4350000,5750000,6500000},
                {5000000,6250000,7750000}};
//untuk bisa update kapasitas
int tersedia[3][3]={{50,30,20},{70,85,90},{40,90,60}};
int sisa[3][3]={{0,0,0},{0,0,0},{0,0,0}};
int pesen[3][3]={{0,0,0},{0,0,0},{0,0,0}};
menu();
loading();
welcome();
mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);

}
//memberi warna
void warna(unsigned short color) {
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}
void garis(){
warna(8);
cout<<"====================================================="<<endl;
warna(15);
}
void garis3(){
    warna(8);
    cout<<"-----------------------------------------------------"<<endl;
    warna(15);
}
void garis1(){
    cout<<"\t\t============================================================================================================================================"<<endl;
}
void garis2(){
    cout<<"\t\t        =========================================================================================================================="<<endl;
}
//login
void login (){
int count;
//untuk username dan pass
string username,pass,u,p;
cout<<"\nUsername : ";cin>>username;
cout<<"Password : ";cin>>pass;
//file menyimpan pass dan username
ifstream input("memori.txt");
//membaca file
while(input>>u>>p){
    if(u==username&&p==pass){
        count=1;
        system("cls");
    }
}
if(count==1){
    cout<<"Selamat datang di travelin "<<endl;
    system("PAUSE");
    system("cls");
}
else{
    cout<<"Maaf username dan password tidak tersedia silahkan buat akun "<<endl;
    menu();
}
}
//registrasi
void regis(){
cout<<"Buat akun "<<endl;
//untuk username dan pass
string usregis,passregis;
string ur,pr;
system("cls");
cout<<endl<<endl;
garis();
cout<<"\t\tMEMBUAT AKUN BARU" <<endl;
garis();
cout<<"\nMasukan username baru : ";cin>>usregis;
cout<<"Masukan password baru : ";cin>>passregis;
ofstream reg("memori.txt",ios::app);
reg<<usregis<<' '<<passregis<<endl;
cout<<"\nRegistrasi berhasil "<<endl;
system("PAUSE");
system("cls");
menu();



}
//menu login
void menu(){
    logo();
//untuk menu memilih
int milih;
garis();
cout<<" "<<setw(10)<<"\tSELAMAT DATANG DI APLIKASI TRAVELIN "<<endl<<endl;
cout<<"Apakah anda sudah memiliki akun : "<<endl;
cout<<"1. Belum"<<endl;
cout<<"2. Sudah "<<endl;
garis();
cout<<"Masukan pilihan : ";cin>>milih;
switch(milih){
case 1:
    regis();
    break;
case 2:
    login();
    break;
default:
    system("PAUSE");
    system("cls");
    menu();
    break;


}

}

//sambutan awal setelah login
void welcome(){
    cout<<endl<<endl;
    warna(11);
    cout<<"\t\t\t\t\t _    _    _    ________    _           ________   ________   ____________    _______     "<<endl;
    cout<<"\t\t\t\t\t| |  | |  | |  |  ______|  | |         |  ______| |  ____  |  |  __   __  |  |  ______|    "<<endl;
    cout<<"\t\t\t\t\t| |  | |  | |  | |         | |         | |        | |    | |  | |  | |  | |  | |           "<<endl;
    cout<<"\t\t\t\t\t| |  | |  | |  | |______   | |         | |        | |    | |  | |  | |  | |  | |_____      "<<endl;
    cout<<"\t\t\t\t\t| |  | |  | |  |  ______|  | |         | |        | |    | |  | |  | |  | |  |  ______|    "<<endl;
    cout<<"\t\t\t\t\t| |  | |  | |  | |         | |         | |        | |    | |  | |  | |  | |  | |           "<<endl;
    cout<<"\t\t\t\t\t| |__| |__| |  | |______   | |______   | |______  | |____| |  | |  | |  | |  | |______     "<<endl;
    cout<<"\t\t\t\t\t|___________|  |________|  |________|  |________| |________|  |_|  |_|  |_|  |________|    "<<endl;
    warna(8);
    garis1();
    garis2();
    cout << endl<<endl;
    gambar();

}
//gambar
void gambar(){

    warna(15);
    cout << "\t\t\tTERIMA KASIH TELAH MEMILIH TRAVELIN                                     *                    "<< endl<<endl;
    cout << "\t\t\tTEMUKAN HOTEL IMPIANMU DENGAN SUPER MUDAH!!!                                                 "<<endl<<endl;
    cout << "\t\t\tNIKMATI KEMUDAHAN DALAM BOOKING HOTEL                                                     * "<<endl;
    cout << "                                                              *                                                     *   "<<endl;
    cout << "                      *                         *                                                                     "<<endl;
    cout << "                                                                       *             *                                 "<<endl;
    cout << "                                        *                                                                        *     "<<endl;
    cout << "                            *                                                                *                       "<<endl;
    cout << "                                                                                                                          "<<endl;
    cout << "                                                                                  *                                      "<<endl;
    cout << "                       *                               *                                                               "<<endl;
    cout << "                                                                                                                          "<<endl;
    cout << "                                                  *                                                              *           "<<endl;
    cout << "                               *                                        *                                                    "<<endl;
    cout << "                                                                                             *                              "<<endl;
    cout << "                                                                                                                               "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t             _____                                      "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t            |_____|          *                            "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t        _____|___|______                        *        "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t       |  o        o    |                                "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t       |       o        |                                "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t       |                |_______                        "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t ===== |   o       o    |=======|                       "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|  o  ||       __       | o     |                       "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t| o   ||   o  |..|      |    o  |                       "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t|_____||______|  |______|_______|                      N E X T ---> "<<endl;
    cout << "\t\t\t\t\t\t\t\t\t\t================================                                     "<<endl;
    system("PAUSE");
    system("CLS");

}
//thankyou
void thankyou(){
    cout<<endl<<endl;
    warna(11);
    cout <<"\t\t\t\t ___________    _       _    ________    ________    _    _          _         _    ________    _       _   "<<endl;
    cout <<"\t\t\t\t|____   ____|  | |     | |  | ______ |  |  _____ |  | |  / /        | |       | |  |  _____ |  | |     | |  "<<endl;
    cout <<"\t\t\t\t     | |       | |     | |  | |    | |  | |    | |  | | / /         | |_______| |  | |    | |  | |     | |  "<<endl;
    cout <<"\t\t\t\t     | |       | |_____| |  | |____| |  | |    | |  | |/ /_         |____   ____|  | |    | |  | |     | |  "<<endl;
    cout <<"\t\t\t\t     | |       |  _____  |  | _____  |  | |    | |  |  __  |             | |       | |    | |  | |     | |  "<<endl;
    cout <<"\t\t\t\t     | |       | |     | |  | |    | |  | |    | |  | |  | |             | |       | |    | |  | |     | |  "<<endl;
    cout <<"\t\t\t\t     | |       | |     | |  | |    | |  | |    | |  | |  | |             | |       | |____| |  | |_____| |  "<<endl;
    cout <<"\t\t\t\t     |_|       |_|     |_|  |_|    |_|  |_|    |_|  |_|  |_|             |_|       |________|  |_________|  "<<endl;
    warna(9);
    garis1();
    garis2();
    cout << endl<<endl;
    gambar();

}
//logo
void logo(){

    cout<< endl << endl;
    warna(9);
    cout<<"       _______               "<<endl;
    cout<<"      |__   __|            "<<endl;
    warna(11);
    cout<<"         | |             "<<endl;
    cout<<"         | |            "<<endl;
    warna(15);
    cout<<"         |_| R A V E L I N          "<<endl<<endl;
}

void delay(void){
    int delay;
    delay=1;
    while(delay<10000000){
        delay++;
    }
}
//menentukan posisi
void posisixy(int x, int y){
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}
//muncul loading
void loading(){
    int i, j;
    logo();

    for(i=50; i<=80; i++){
        posisixy(i,20);
        printf("-");
        delay();
        posisixy(i,22);
        printf("-");
        delay();
    }
    for(i=1; i<=100; i++){
        posisixy(50,21);
        cout<<"L O A D I N G  "<<i<<" %";
        delay();
    }
    system("CLS");
}

void loading_pemesanan(){
    int i, j;
    logo();
    for(i=50; i<=100; i++){
        posisixy(i,20);
        printf("-");
        delay();
        posisixy(i,22);
        printf("-");
        delay();
    }
    for(i=1; i<=100; i++){
        posisixy(50,21);
        cout<<"P R O S E S  P E M E S A N A N  "<<i<<" %";
        delay();
    }
    system("CLS");
}
void note(){

    garis();
    garis3();
    cout<<" TRAVELIN menyediakan lebih dari 500 kamar "<<endl;
    cout<<" Menyediakan hotel terbaik "<<endl;
    cout<<"     0) IBIS"<<endl;
    cout<<"     1) THE TRANS"<<endl;
    cout<<"     2) HILTON"<<endl;
    cout<<" Dengan 3 tipe kamar yang dapat kamu pilih!!!"<<endl;
    cout<<"     0) Standar Room"<<endl;
    cout<<"     1) Deluxe Room"<<endl;
    cout<<"     2) Suite"<<endl;
    garis3();
    garis();

}

void mainmenu(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]){
int pilihan;
logo();

cout<<" "<<setw(10)<<"\tTEMUKAN HOTEL IMPIANMU DENGAN SUPER MUDAH!!!"<<endl;
cout<<"\tNIKMATI KEMUDAHAN DALAM BOOKING HOTEL DENGAN TRAVELIN AJA"<<endl<<endl;

cout<<"Nikmati fasilitas yang kami berikan : "<<endl;
garis();
cout<<"1. Info Hotel "<<endl;
cout<<"2. Harga dan ketersediaan hotel "<<endl;
cout<<"3. Pemesanan Hotel "<<endl;
cout<<"4. Keluar "<<endl;
garis();
cout<<"Apa yang bisa kami bantu : ";cin>>pilihan;
if(pilihan==1){
system("PAUSE");
system("cls");
infohotel(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);

}
else if(pilihan==2){
system("PAUSE");
system("cls");
ketersediaan(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);

}
else if(pilihan==3){
system("PAUSE");
system("cls");
pemesanan(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
}
else if(pilihan==4){
system("PAUSE");
system("cls");
thankyou();
gambar();
exit(0);
}
else {
cout<<"Pilihan tak tersedia "<<endl;
system("PAUSE");
system("cls");
mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);


}

}
void infohotel(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]){
    int x,balik;
    garis();
    cout<<"\t\tD A F T A R   H O T E L "<<endl;
    garis();
    for(int i=0;i<3;i++){
        cout<<i+1<<". "<<setw(5)<<hotel[i]<<endl;
    }
    cout<<"4. Kembali ke menu sebelumnya "<<endl;
    garis();
    cout<<"Pilih : ";cin>>x;
     switch(x){
    case 1:
        system("PAUSE");
        system("cls");
        cout<<"I N F O R M A S I   H O T E L";
        logo();
        cout<<"\t\t\t\t\t\t\t\t\t HOTEL "<<hotel[0]<<endl;
        warna(3);
        garis1();
        warna(15);
        cout<<"\t\t\t\t\t\tJl. Soekarno-Hatta No.425, Cimenerang, Kec. Gedebage, Kota Bandung, Jawa Barat 40294\n";
        warna(3);
        garis2();
        warna(15);
        cout<<"\t\t\tFasilitas Hotel\t: Free Wi-Fi, Smart TV berlayanan Netflix, Restoran, Kolam Renang, Outdoor, dan Lahan Parkir yang Luas\n";
        cout<<"\t\t\tTema Hotel\t: Konsep Eropa Modern dan Mewah\n";
        cout<<"\t\t\tKelebihan Hotel\t: \n";
        cout<<"\t\t\t- Restoran yang tersedia lengkap dengan hidangan barat dan nusantara\n";
        cout<<"\t\t\t- Resepsionis 24 jam\n";
        cout<<"\t\t\t- Nuansa Eropa dapat dirasakan ketika memasuki hotel. Hal tersebut tergambar dari desain lobby, restoran dan lorong kamar hotel\n";
        cout<<endl;
        warna(3);
        garis1();
        warna(15);
        break;
    case 2:
        system("PAUSE");
        system("cls");
        cout<<"I N F O R M A S I   H O T E L";
        logo();
        cout<<"\t\t\t\t\t\t\t\t\t HOTEL "<<hotel[1]<<endl;
        warna(3);
        garis1();
        warna(15);
        cout<<"\t\t\t\t\tJl. Jenderal Sudirman No.20, Kec. Bukit Kecil, Kota Palembang, Sumatera Selatan 30129\n";
        warna(3);
        garis2();
        warna(15);
        cout<<"\t\t\tFasilitas Hotel\t: Free Wi-Fi, AC, Cafe, Kamar Mandi Lengkap dengan Shower serta Bathup, dan Pusat Kebugaran\n";
        cout<<"\t\t\tTema Hotel\t: Konsep Hotel Bernuansa Alam\n";
        cout<<"\t\t\tKelebihan Hotel\t: \n";
        cout<<"\t\t\t- Kamar minimalis, lengkap dengan furnitur kayu dan dinding dihiasi dengan mural alam yang indah sehingga terkesan instagramable\n";
        cout<<"\t\t\t- Lokasi Strategis dekat Tempat Hiking yaitu Gunung Dempo\n";
        cout<<"\t\t\t- Cukup Hijau karena dihiasi berbagai tanaman segar\n";
        cout<<"\t\t\t- Terdapat Chill Zone yang sangat nyaman yaitu Balkon yang cukup luas dengan pemandangan kota Palembang yang indah\n";
         warna(3);
        garis1();
        warna(15);
        break;
    case 3:
        system("PAUSE");
        system("cls");
        cout<<"I N F O R M A S I   H O T E L";
        logo();
        cout<<"\t\t\t\t\t\t\t\t\t HOTEL "<<hotel[2]<<endl;
        warna(3);
        garis1();
        warna(15);
        cout<<"\t\t\t\t\tJl. Asia Afrika No.8, Gelora, Kec. Tanah Abang, Kota Jakarta Pusat, DKI Jakarta 10270\n";
        warna(3);
        garis2();
        warna(15);
        cout<<"\t\t\tFasilitas Hotel\t: Free Wi-Fi, AC, Onsen(Pemandian Air Panas Alami),Cafe, Bar, dan Spa \n";
        cout<<"\t\t\tTema Hotel\t: Konsep Micro Apartment Ala Jepang\n";
        cout<<"\t\t\tKelebihan Hotel\t: \n";
        cout<<"\t\t\t- Lokasi Strategis dekat Mall Jakarta Town Square dan Bandara Soekarno-Hatta\n";
        cout<<"\t\t\t- Tempat tidur didesain seperti futon gaya tempat tidur tradisional Jepang yang nyaman\n";
        cout<<"\t\t\t- Cafe menyediakan berbagai macam masakan khas jepang yang lezat\n";
        warna(3);
        garis1();
        warna(15);
        break;
    case 4:
        system("PAUSE");
        system("cls");
        mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
    default :
        cout<<"\tInfo tidak tersedia \n";
        system("PAUSE");
        system("cls");
        infohotel(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
        break;
    }
    warna(12);
    cout<<"\n\n\t\t-------------------------------------------------------------------------";
    warna(15);
    cout<<"\n\t\t| JANGAN LUPA UNTUK TETAP MENAATI PROTOKOL KESEHATAN YA. \t\t|";
    cout<<"\n\t\t| PAKAI SELALU MASKER, JAGA JARAK, DAN CUCI TANGAN SECARA BERKALA.\t| ";
    cout<<"\n\t\t| STAY SAFE SELALU, YA!\t\t\t\t\t\t\t|\n";
    warna(12);
    cout<<"\t\t-------------------------------------------------------------------------\n\n";
    warna(15);
do{

    cout<<"\t\t1. Kembali ke main menu "<<endl;
    cout<<"\t\t2. Kembali ke menu sebelumnya "<<endl;
    cout<<"\n\t\tMasukan Pilihan : ";cin>>balik;
    if(balik==1){
system("PAUSE");
system("cls");
        mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
    }
    else if(balik==2){
system("PAUSE");
system("cls");
        infohotel(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
    }
    else{
         cout<<"\t\tPilihan tidak tersedia"<<endl;
system("PAUSE");
    }
}while(balik<1||balik>2);
}
//ketersediaan
void ketersediaan(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]){
int balik;
 cout <<"\t    .`.`.`.`.`H  ~  O  ~  T  ~  E  ~  L`.`.`.`.`."<<endl;
    cout <<"\t                I B I S Bondung Hotel            "<<endl;
    cout <<"\t              The T R A N S Luxury Hotel         "<<endl;
    cout <<"\t             H I L T O N Hotels & Resorts        "<<endl;
    cout <<"\t                                                 "<<endl;
    for(int i=0;i<=2;i++)
        {
        for(int j=0;j<=2;j++)
            {
                sisa[i][j]=tersedia[i][j]-pesen[i][j];
            }
        }
    cout <<"======================================================================"<<endl;
    cout <<"|               |                    R I N C I A N                   |"<<endl;
    cout <<"|   H O T E L   |----------------------------------------------------|"<<endl;
    cout <<"|               |   Tipe Kamar   |   Harga/malam   |  Kamar Tersedia |"<<endl;
    cout <<"|--------------------------------------------------------------------|"<<endl;

    for(int i=0;i<=2;i++)
        {
        for(int j=0;j<=2;j++)
            {
                cout<<"|   "<<setiosflags(ios::left)<<setw(12)<<hotel[i]<<"|  ";
                cout<<setiosflags(ios::left)<<setw(14)<<tipe[j]<<"|    ";
                cout<<"Rp"<<setiosflags(ios::left)<<setw(11)<<harga[i][j]<<"|       ";
                cout<<setiosflags(ios::left)<<setw(10)<<sisa[i][j]<<"|"<<endl;
        }
        cout <<"|--------------------------------------------------------------------|"<<endl;
    }
    cout <<"======================================================================"<<endl;



do{
    cout<<"1. Kembali ke main menu "<<endl;
    cout<<"2. Kembali ke menu sebelumnya "<<endl<<endl;
    cout<<"Masukan Pilihan : ";cin>>balik;
    if(balik==1){
system("PAUSE");
system("cls");
        mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
    }
    else if(balik==2){
system("PAUSE");
system("cls");
        mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
    }
    else{
        cout<<"\nPilihan tidak tersedia"<<endl;
        system("PAUSE");
    }
}while(balik<1||balik>2);
}
//hotel 0
void Fasilitas_Tambahan0(){
    cout<<"\n=============================================================\n";
    cout<<"|| Selamat Datang Di Pilihan Fasilitas Tambahan Hotel IBIS ||\n";
    cout<<"|| --------------------------------------------------------||\n";
    cout<<"|| 1. Bunga di kolam renang : Rp.50.000/1 kali             ||\n";
    cout<<"|| 2. Antar jemput Bandara  : Rp.30.000/Km                 ||\n";
    cout<<"|| 3. Dekorasi Kamar        : Rp.75.000/1 kali             ||\n";
    cout<<"|| 4. Floating Breakfast    : Rp.50.000/1 kali             ||\n";
    cout<<"|| 5. Game Zone for Kids    : Rp.25.000/jam                ||\n";
    cout<<"=============================================================\n";
}
//hotel 1
void Fasilitas_Tambahan1(){
    cout<<"\n=================================================================\n";
    cout<<"|| Selamat Datang Di Pilihan Fasilitas Tambahan Hotel THE TRANS ||\n";
    cout<<"|| -------------------------------------------------------------||\n";
    cout<<"|| 1. Tour Guide            : Rp.150.000/1 kali                 ||\n";
    cout<<"|| 2. Antar jemput Bandara  : Rp.35.000/Km                      ||\n";
    cout<<"|| 3. Dekorasi Kamar        : Rp.75.000/1 kali                  ||\n";
    cout<<"|| 4. Spa                   : Rp.100.000/1 kali                 ||\n";
    cout<<"|| 5. Sauna                 : Rp.25.000/jam                     ||\n";
    cout<<"=================================================================\n";
}
//hotel 2
void Fasilitas_Tambahan2(){
    cout<<"\n===============================================================\n";
    cout<<"|| Selamat Datang Di Pilihan Fasilitas Tambahan Hotel HILTON ||\n";
    cout<<"|| ----------------------------------------------------------||\n";
    cout<<"|| 1. Spa                   : Rp.200.000/1 kali              ||\n";
    cout<<"|| 2. Antar jemput Bandara  : Rp.40.000/Km                   ||\n";
    cout<<"|| 3. Dekorasi Kamar        : Rp.75.000/1 kali               ||\n";
    cout<<"|| 4. Bar                   : Rp.100.000/1 kali              ||\n";
    cout<<"|| 5. Onsen                 : Rp.75.000/jam                  ||\n";
    cout<<"===============================================================\n";
}
//pemesanan
void pemesanan(data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3]){
//waktu
int tahun,bulan,tanggal;
int jumlahtanggal[12];
int jumlahtanggal1[12];
//menu pesanan
int balik,n;
string nama;

cout<<"P E M E S A N A N";
logo();
cout <<"\n\t    .`.`.`.`.`H  ~  O  ~  T  ~  E  ~  L`.`.`.`.`."<<endl;
    cout <<"\t                I B I S Bondung Hotel            "<<endl;
    cout <<"\t              The T R A N S Luxury Hotel         "<<endl;
    cout <<"\t             H I L T O N Hotels & Resorts        "<<endl;
    cout <<"\t                                                 "<<endl;
    for(int i=0;i<=2;i++)
        {
        for(int j=0;j<=2;j++)
            {
                sisa[i][j]=tersedia[i][j]-pesen[i][j];
            }
        }
    cout <<"======================================================================"<<endl;
    cout <<"|               |                    R I N C I A N                   |"<<endl;
    cout <<"|   H O T E L   |----------------------------------------------------|"<<endl;
    cout <<"|               |   Tipe Kamar   |   Harga/malam   |  Kamar Tersedia |"<<endl;
    cout <<"|--------------------------------------------------------------------|"<<endl;

    for(int i=0;i<=2;i++)
        {
        for(int j=0;j<=2;j++)
            {
                cout<<"|   "<<setiosflags(ios::left)<<setw(12)<<hotel[i]<<"|  ";
                cout<<setiosflags(ios::left)<<setw(14)<<tipe[j]<<"|    ";
                cout<<"Rp"<<setiosflags(ios::left)<<setw(11)<<harga[i][j]<<"|       ";
                cout<<setiosflags(ios::left)<<setw(10)<<sisa[i][j]<<"|"<<endl;
        }
        cout <<"|--------------------------------------------------------------------|"<<endl;
    }
    cout <<"======================================================================"<<endl;
cout<<endl;
note();
warna(3);
cout <<"\n======================================================================"<<endl;
warna(15);
cout <<"                          P E M E S A N A N"<<endl;
warna(3);
cout <<"======================================================================"<<endl<<endl;
warna(15);
cout<<"Atas Nama : ";cin.ignore();getline(cin,nama);
cout<<"No Telepon: ";cin>>pesan[0].nohp;
//nohp
cout<<"Ingin memesan berapa banyak Hotel : ";cin>>n;
do{
    cout<<"Masukan tahun pemesanan           : ";cin>>tahun;
    if(tahun<2022){
        cout<<"Tahun sudah berlalu "<<endl;
    }

}while(tahun<2022);

if(tahun%4==0&&tahun%100!=0||tahun%400==0){
    int jumlahtanggal1[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    for(int i=0;i<12;i++){
    jumlahtanggal[i]=jumlahtanggal1[i];
}
}
else{
   int jumlahtanggal1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   for(int i=0;i<12;i++){
    jumlahtanggal[i]=jumlahtanggal1[i];
}
}

do{
    cout<<"Masukan bulan Pemesanan           : ";cin>>bulan;
    if(bulan>12){
        cout<<"Bulan tak tersedia "<<endl;
    }
}while(bulan>12);

do{
    cout<<"Masukan tanggal Pemesanan         : ";cin>>tanggal;
    if(tanggal>jumlahtanggal[bulan-1]){
        cout<<"Tanggal tak tersedia"<<endl;
    }
}while(tanggal>jumlahtanggal[bulan-1]);
int count;
for(int i=0;i<n;i++){
        cout<<endl;
    garis();
    warna(11);
    cout<<"Pesanan ke- "<<i+1<<endl;
    garis();
    warna(15);
    do{
    cout<<"Hotel(0/1/2) : ";cin>>pesan[i].hotel;
    if(pesan[i].hotel>2){
        cout<<"\nPilihan tak tersedia silahkang ulang kembali "<<endl;
    }
    }while(pesan[i].hotel>2);


    cout<<"Apakah ingin memesan fasilitas tambahan(y/t) ? : ";cin>>fasil;
    if(fasil=="y"||fasil=="Y"){
        if(pesan[i].hotel==0){
                Fasilitas_Tambahan0();

        }
    else if(pesan[i].hotel==1){
    Fasilitas_Tambahan1();
    }
    else{
    Fasilitas_Tambahan2();

    }
       do{
                do{
                garis3();
                cout<<"Pilih fasilitas yang diingin kan : ";cin>>pesan[c].jenis_fasilitas;
                if(pesan[c].jenis_fasilitas>5){
                    cout<<"Pilihan tak tersedia "<<endl;
                }
                }while(pesan[i].jenis_fasilitas>5);
                cout<<"Berapa lama/banyak yang diinginkan : ";cin>>pesan[c].jumlah_fasilitas;
                cout<<"\nApakah ingin memesan fasilitas lagi (y/t)? : ";cin>>lagi;
                b++;
                c++;
                }while(lagi=="y"||lagi=="Y");
    cout<<endl;
    }
    else if (fasil=="t"||fasil=="T"){
        cout<<endl;
    }

    cout<<"Pesan Berapa banyak kamar : ";cin>>pesan[i].banyak_kamar;
    for(int j=0;j<pesan[i].banyak_kamar;j++){
            do{
            int sum1=0,sum=0;
            garis();
        cout<<"Kamar ke-"<<j+1<<endl;
        do{
        cout<<"Pilih jenis kamar : ";cin>>pesan[j].jenis_kamar;
        if(pesan[j].jenis_kamar>2){
            cout<<"Pilihan tak tersedia silahkang ulang kembali "<<endl;
        }
        }while(pesan[j].jenis_kamar>2);
        do{
        cout<<"Tahun Check out   : ";cin>>pesan[j].Y;
        if(pesan[j].Y<tahun){
            cout<<"Tahun Eror "<<endl;
        }
        }while(pesan[j].Y<tahun);
        do{
        cout<<"Bulan Check out   : ";cin>>pesan[j].M;
        if(pesan[j].M<bulan){
            cout<<"Bulan Eror "<<endl;
        }
        }while(pesan[j].M<bulan);

         do{
        cout<<"Tanggal Check out : ";cin>>pesan[j].D;
        if(pesan[j].D<tanggal){
            cout<<"Tanggal Eror "<<endl;
        }
        }while(pesan[j].D<tanggal);
        for(int k=0;k<(pesan[j].M-bulan);k++){
            sum1+=jumlahtanggal[bulan-1];
        }
        for(int k=0;k<(pesan[j].Y-tahun);k++){
            for(int l=0;l<12;l++){
                sum+=jumlahtanggal[l];
            }
        }
        pesan[j].durasi=(pesan[j].D-tanggal)+(sum1)+(sum);
        cout<<"Durasi pesanan ke-"<<j+1<<" :"<<pesan[j].durasi<<"Hari"<<endl;
        pesen[pesan[i].hotel][pesan[j].jenis_kamar]+=1;
        if(pesen[pesan[i].hotel][pesan[j].jenis_kamar]>tersedia[pesan[i].hotel][pesan[j].jenis_kamar]){
            cout<<"Kamar yang dipesan tidak tersedia "<<endl;
        }
            }while(pesen[pesan[i].hotel][pesan[j].jenis_kamar]>tersedia[pesan[i].hotel][pesan[j].jenis_kamar]);
            pesan[j].subharga=pesan[j].durasi*harga[pesan[i].hotel][pesan[j].jenis_kamar];
            bayar+=pesan[j].subharga;


    }

}
//untuk metode
int a;
metode(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}

//metode pembayaran
void metode(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
 system("PAUSE");
    system("cls");
    cout<<"P E M E S A N A N"<<endl;
    logo();

garis();
cout<<"\tM E T O D E   P E M B A Y A R A N "<<endl;
garis();
cout<<"1. Cash"<<endl;
cout<<"2. Transfer Bank"<<endl;
cout<<"3. Travelin Bank"<<endl;
cout<<"4. Alfamart atau indomaret"<<endl;
garis();
cout<<"Pilih metode Pembayaran yang diinginkan : ";cin>>a;
switch(a){

case 1:
    system("PAUSE");
    system("cls");
   cash(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
    break;
case 2:
    system("PAUSE");
    system("cls");
     transfer(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
    break;
case 3:
    system("PAUSE");
    system("cls");
    travelinbank(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);

case 4:
    system("PAUSE");
    system("cls");
    alfamartindomaret(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
    break;

default:
    cout<<"Pilihan tidak tersedia "<<endl;
    system("PAUSE");
    system("cls");
   metode(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
    break;
}

}
//cash
void cash(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
int booking=(0.4*bayar);
float diskon;
string yakin;

cout<<" \nApakah ingin menganti metode pembayaran ?(Y/T): ";cin>>yakin;
if(yakin=="y"||yakin=="Y"){
        system("PAUSE");
        system("cls");
      metode(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);

}
else if(yakin=="t"||yakin=="T"){
bool login=true;
char voc1[20]={"TRAVELINAJA"}, voc2[20];
string lagi;
cout<<"\nMetode yang Anda gunakan adalah metode cash"<<endl;
cout<<"Selamat anda mendapatkan voucher pembayaran. Masukan kode (TRAVELINAJA)"<<endl;
   do{
        cout<<"\nMasukkan kode voucher : ";cin>>voc2;
        cout<<endl;
            if(strcmp(voc1, voc2)==0)
                {
                    cout<<"Voucher berhasil digunakan!!!"<<endl;
                    cout<<"Anda berhasil menggunakan voucher dan mendapatakan potongan 10%"<<endl<<endl;
                    diskon=0.1;
                    login=false;
                }
                else
                {
                    cout<<"Voucher salah"<<endl;
                    cout<<"Apakah Ingin coba lagi?(y/t) : ";cin>>lagi;
                    if(lagi=="t"||lagi=="T"){
                    diskon=0;
                    login=false;
                    }
                }
            }while(login==true);

}
else{
    cout<<"Pilihan tidak tersedia "<<endl;
    cash(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}
struk(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama,booking,diskon);

}
//transfer
void transfer(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
string bank[3]={"Toktok pay","BukaToko","Grabpedia"};
int pilih;
int booking=0;
float diskon;
string yakin;
cout<<" \nApakah ingin mengganti metode pembayaran ?(Y/T): ";cin>>yakin;
if(yakin=="y"||yakin=="Y"){
        system("PAUSE");
        system("cls");
      metode(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);

}
else if(yakin=="t"||yakin=="T"){
cout<<endl;
garis();
cout<<"Silahkan pilih platform pembayaran yang disediakan : "<<endl;
garis();
cout<<"1. Toktok Pay"<<endl;
cout<<"2. BukaToko"<<endl;
cout<<"3. Tokocapein"<<endl;
cout<<"4. BayarNtar"<<endl;
garis();
cout<<"\nPilihan : ";cin>>pilih;
if(pilih==1){
diskon==0.5;
cout<<"\nKarena kamu memilih Toktok Pay, selamat kamu mendapatkan diskon 50%"<<endl;
cout<<"Nikmati kemudahan dalama bertransaksi di TRAVELIN"<<endl;
}
else if(pilih==2){
diskon==0.4;
cout<<"\nKarena kamu memilih BukaToko, selamat kamu mendapatkan diskon  40%"<<endl;
cout<<"Nikmati kemudahan dalama bertransaksi di TRAVELIN"<<endl;
}
else if(pilih==3){
diskon==0.3;
cout<<"\nKarena kamu memilih Tokocapein, selamat kamu mendapatkan diskon 30%"<<endl;
cout<<"Nikmati kemudahan dalama bertransaksi di TRAVELIN"<<endl;
}
else if(pilih==4){
diskon==0.7;
cout<<"\nKarena kamu memilih BayarNtar, selamat kamu mendapatkan diskon 70%"<<endl;
cout<<"Nikmati kemudahan dalama bertransaksi di TRAVELIN"<<endl;
}
else{
  cout<<"\nPilihan tidak tersedia "<<endl;
    system("PAUSE");
    system("cls");
    transfer(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}
struk(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama,booking,diskon);
}
else{
    cout<<"\nPilihan tidak tersedia "<<endl;
    system("PAUSE");
    system("cls");
    transfer(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}

}
//akun
void akun_tb(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
int count;
int booking;
float diskon;
//untuk username dan pass
string nama_tb,pass1,u1,p1;
cout<<endl;
garis();
cout<<"\t T R A V E L I N  B A N K"<<endl;
garis();
cout<<"\n\nTerima kasih telah memilih layanan kami, silahkan masukkan password dibawah ini";
cout<<"\nPassword : ";cin>>pass1;
//file menyimpan pass dan username
ifstream input1("travelin.txt");
//membaca file
while(input1>>p1){
    if(p1==pass1){
        count=1;
        system("cls");
    }
}
if(count==1){
    cout<<"\nSelamat anda mendapatkan potongan harga 25% dengan emnggunakan TravelinBank "<<endl;
    diskon=0.25;
    booking=0;
   system("PAUSE");
    system("cls");
    struk(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama,booking,diskon);
}
else{
    cout<<"\nMaaf username dan password tidak tersedia silahkan buat akun "<<endl;
    system("PAUSE");
    system("cls");
   travelinbank(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}

}
//regis
void regis_tb(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
logo();
cout<<"Buat akun "<<endl;
string nama_tb,pass_tb,notelp_tb;
string ntb,ptb;
system("cls");
logo();
garis();
cout<<"\t T R A V E L I N  B A N K"<<endl;
garis();
cout<<"\nMasukan nama       : ";cin>>nama_tb;
cout<<"Masukan no telepon : ";cin>>notelp_tb;
cout<<"Masukan password   : ";cin>>pass_tb;
ofstream reg1("travelin.txt",ios::app);
reg1<<nama_tb<<' '<<notelp_tb<<' '<<pass_tb<<endl;
cout<<"\nRegistrasi berhasil "<<endl<<endl;
system("PAUSE");
system("cls");
travelinbank(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}
//travelin bank
void travelinbank(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
    string yakin;
    string tb;
logo();
cout<<" \nApakah ingin ganti metode pembayaran ?(Y/T): ";cin>>yakin;
if(yakin=="y"||yakin=="Y"){
        system("PAUSE");
        system("cls");
      metode(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);

}else if(yakin=="t"||yakin=="T"){
     cout<<"\nMetode yang kamu pilih adalah menggunakan TravelinBank"<<endl<<endl;
    cout<<"Apakah kamu sudah memiliki akun travelinbank? (Y/T) : "; cin>> tb;
    if(tb=="y"||tb=="Y"){
            system("PAUSE");
        system("cls");
       akun_tb(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
    }else if(yakin=="t"||yakin=="T"){
        system("PAUSE");
        system("cls");
        regis_tb(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
    }
}

}
//alfamart
void alfamartindomaret(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama){
 string yakin;
 int booking;
 float diskon;
logo();
cout<<" \nApakah ingin ganti metode pembayaran ?(Y/T): ";cin>>yakin;
if(yakin=="y"||yakin=="Y"){
        system("PAUSE");
        system("cls");
      metode(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);

}
else if(yakin=="t"||yakin=="T"){
        booking=0;
        diskon=0;

        cout<<"\nMetode yang Anda gunakan adalah melalui Alfamart atau Indomaret"<<endl<<endl;
        cout<<"Cara Pembayaran: "<< endl;
        cout<<"1. Datang ke gerai Alfamart atau indomaret pada jam operasional"<< endl;
        cout<<"2. Minta Bantuan kasir."<<endl;
        cout<<"3. Beritahu nomor HP yang kamu pakai dalam aplikasi travelin."<<endl;
        cout<<"4. Lakukan pembayaran kamu ke kasir(plus biaya admin Rp2.500)."<<endl;
        cout<<"5. Simpan tanda terimanya sebagai bukti pembayaran sah."<<endl;
        system("PAUSE");
        struk(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama,booking,diskon);

}else{
    cout<<"Pilihan tidak tersedia "<<endl;
    system("PAUSE");
    system("cls");
    alfamartindomaret(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama);
}


}
//struk
void struk(int& a,int n,data& pesan,int tersedia[][3],int sisa[][3],int pesen[][3],int& harga1,int& bayar,string hotel[],string tipe[],int harga[][3],int tanggal,int bulan ,int tahun,string nama,int booking,float diskon){
string lagi;
loading_pemesanan();
system("cls");
system("PAUSE");

logo();
garis();
cout<<"\tR I N C I A N   P E M B A Y A R A N"<<endl;
cout<<" \t\tT R A V E L I N"<<endl;

if(a==1){

    garis();
    cout<<"METODE PEMBAYARAN : CASH "<<endl;
    garis();
    cout<<"Nama Pemesan  : "<<nama<<endl;
    cout<<"Nomor telepon : "<<pesan[0].nohp<<endl;
    for(int i=0;i<n;i++){
       garis();
        warna(11);
        cout<<"Pesanan ke -"<<i+1<<endl;
        warna(15);
        cout<<"Nama Hotel : "<<pesan[i].hotel<<endl;
        for(int j=0;j<pesan[i].banyak_kamar;j++){
        garis();
            cout<<"Kamar ke-"<<j+1<<endl;
            cout<<pesan[j].jenis_kamar<<" : RP."<<pesan[j].subharga<<endl;
            cout<<"Durasi : "<<pesan[j].durasi<<"malam"<<endl;
            cout<<"Harga : "<<pesan[j].durasi<<"x"<<harga[pesan[i].hotel][pesan[j].jenis_kamar]<<": RP."<<pesan[j].subharga<<endl;

        }
    }
 garis();
cout<<"Biaya Dari pemesanan             : RP."<<bayar<<endl;
cout<<"Pajak 10%                        : RP."<<int(bayar*0.1)<<endl;
cout<<"Diskon                           : RP."<<int(bayar*diskon)<<endl;
cout<<"Biaya total                      : Rp."<<int(bayar+(bayar*0.1))-int(bayar*diskon)<<endl;
cout<<"Biaya booking yang harus dibayar : RP."<<booking<<endl;
garis();
}
else if(a==2){

           garis();
    cout<<"METODE PEMBAYARAN : TRANSFER"<<endl;
    garis();
    cout<<"Nama Pemesan   : "<<nama<<endl;
     cout<<"Nomor telepon : "<<pesan[0].nohp<<endl;
    for(int i=0;i<n;i++){
            garis();
            warna(11);
        cout<<"Pesanan ke -"<<i+1<<endl;
        warna(15);
        cout<<"Nama Hotel : "<<pesan[i].hotel<<endl;
        for(int j=0;j<pesan[i].banyak_kamar;j++){
                garis();
            cout<<"Kamar ke-"<<j+1<<endl;
            cout<<pesan[j].jenis_kamar<<" : RP."<<pesan[j].subharga<<endl;
            cout<<"Durasi : "<<pesan[j].durasi<<"malam"<<endl;
            cout<<"Harga  : "<<pesan[j].durasi<<"x"<<harga[pesan[i].hotel][pesan[j].jenis_kamar]<<": RP."<<pesan[j].subharga<<endl;

        }
    }
    garis();
cout<<"Biaya Dari pemesanan             : RP."<<bayar<<endl;
cout<<"Pajak 10%                        : RP."<<int(bayar*0.1)<<endl;
cout<<"Diskon                           : RP."<<int(bayar*diskon)<<endl;
cout<<"Biaya total                      : Rp."<<int(bayar+(bayar*0.1)-(bayar*diskon))<<endl;
cout<<"Biaya booking yang harus dibayar : RP."<<booking<<endl;
garis();

}
if(a==3){


           garis();
    cout<<"METODE PEMBAYARAN : TRAVELINBANK"<<endl;
    garis();
    cout<<"Nama Pemesan   : "<<nama<<endl;
     cout<<"Nomor telepon : "<<pesan[0].nohp<<endl;
    for(int i=0;i<n;i++){
            garis();
            warna(11);
        cout<<"Pesanan ke -"<<i+1<<endl;
        warna(15);
        cout<<"Nama Hotel : "<<pesan[i].hotel<<endl;
        for(int j=0;j<pesan[i].banyak_kamar;j++){
                garis();
            cout<<"Kamar ke-"<<j+1<<endl;
            cout<<pesan[j].jenis_kamar<<" : RP."<<pesan[j].subharga<<endl;
            cout<<"Durasi : "<<pesan[j].durasi<<"malam"<<endl;
            cout<<"Harga  : "<<pesan[j].durasi<<"x"<<harga[pesan[i].hotel][pesan[j].jenis_kamar]<<": RP."<<pesan[j].subharga<<endl;

        }
    }
    garis();
cout<<"Biaya Dari pemesanan             : RP."<<bayar<<endl;
cout<<"Pajak 10%                        : RP."<<int(bayar*0.1)<<endl;
cout<<"Diskon                           : RP."<<int(bayar*diskon)<<endl;
cout<<"Biaya total                      : Rp."<<int(bayar+(bayar*0.1)-(bayar*diskon))<<endl;
cout<<"Biaya booking yang harus dibayar : RP."<<booking<<endl;
garis();


}
if(a==4){


           garis();
    cout<<"METODE PEMBAYARAN : Alfamart/indomart"<<endl;
    garis();
    cout<<"Nama Pemesan : "<<nama<<endl;
     cout<<"Nomor telepon"<<pesan[0].nohp<<endl;
    for(int i=0;i<n;i++){
            garis();
            warna(11);
        cout<<"Pesanan ke -"<<i+1<<endl;
        warna(15);
        cout<<"Nama Hotel : "<<pesan[i].hotel<<endl;
        for(int j=0;j<pesan[i].banyak_kamar;j++){
                garis();
            cout<<"Kamar ke-"<<j+1<<endl;
            cout<<pesan[j].jenis_kamar<<" : RP."<<pesan[j].subharga<<endl;
            cout<<"Durasi : "<<pesan[j].durasi<<"malam"<<endl;
            cout<<"Harga  : "<<pesan[j].durasi<<"x"<<harga[pesan[i].hotel][pesan[j].jenis_kamar]<<": RP."<<pesan[j].subharga<<endl;

        }
    }
    garis();
cout<<"Biaya Dari pemesanan             : RP."<<bayar<<endl;
cout<<"Pajak 10%                        : RP."<<int(bayar*0.1)<<endl;
cout<<"Diskon                           : RP."<<int(bayar*diskon)<<endl;
cout<<"Biaya total +admin               : Rp."<<int(bayar+(bayar*0.1)-(bayar*diskon)+2500)<<endl;
cout<<"Biaya booking yang harus dibayar : RP."<<booking<<endl;
garis();



}
int total=0;
if(b<0){
    cout<<endl;
}
else if(b>=0){
cout<<endl;
for(int i=0;i<c;i++){
    if(pesan[i].hotel==0){
     cout<<"Fasilitas hotel    : "<<hotel[pesan[i].hotel]<<endl;
     cout<<"Fasilitas tambahan : "<<nfasilitas0[pesan[i].jenis_fasilitas-1]<<endl;
     cout<<"Lama/Banyaknya : "<<pesan[i].jumlah_fasilitas<<endl;
     cout<<"Biaya tambahan : "<<int(fasilitas0[pesan[i].jenis_fasilitas-1]*pesan[i].jumlah_fasilitas)<<endl;
     garis3();
    }
     else if(pesan[i].hotel==1){
     cout<<"Fasilitas hotel    : "<<hotel[pesan[i].hotel]<<endl;
     cout<<"Fasilitas tambahan : "<<nfasilitas1[pesan[i].jenis_fasilitas-1]<<endl;
     cout<<"Lama/Banyaknya : "<<pesan[i].jumlah_fasilitas<<endl;
     cout<<"Biaya tambahan : "<<int(fasilitas1[pesan[i].jenis_fasilitas-1]*pesan[i].jumlah_fasilitas)<<endl;
     garis3();

    }
    else if(pesan[i].hotel==2){
     cout<<"Fasilitas hotel    : "<<hotel[pesan[i].hotel]<<endl;
     cout<<"Fasilitas tambahan : "<<nfasilitas2[pesan[i].jenis_fasilitas-1]<<endl;
     cout<<"Lama/Banyaknya : "<<pesan[i].jumlah_fasilitas<<endl;
     cout<<"Biaya tambahan : "<<int(fasilitas2[pesan[i].jenis_fasilitas-1]*pesan[i].jumlah_fasilitas)<<endl;
     garis3();

    }
total+=int(fasilitas2[pesan[i].jenis_fasilitas-1]*pesan[i].jumlah_fasilitas);
}
}
cout<<"Total biata fasilitas tambahan : "<<total<<endl;
garis();
cout<<"\nApakah ingin menggunakan aplikasi lagi ? (y/t): ";cin>>lagi;
if(lagi=="y"||lagi=="Y"){
    system("PAUSE");
    system("cls");
    mainmenu(pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga);
}
else if(lagi=="t"||lagi=="T"){
system("PAUSE");
system("cls");
thankyou();
gambar();
exit(0);
}
else{
     struk(a,n,pesan,tersedia,sisa,pesen,harga1,bayar,hotel,tipe,harga,tanggal,bulan,tahun,nama,booking,diskon);
}
}


