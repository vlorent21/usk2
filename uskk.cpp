#include <iostream>

using namespace std;

int main()
{ 
 // Deklarasi variabel
 int CC, SP, L, M, TK;
 float Minuman, Stat, Disc, FixMinuman, FixStat;
 
 // Menampilkan daftar harga
 cout<<"\n\t\t=== Daftar minuman beserta harganya ==="<<endl;
 cout<<"\t\t| Coca-cola      : Rp 70.000,00   |"<<endl;
 cout<<"\t\t| Sprite         : Rp 90.000,00   |"<<endl;
 cout<<"\t\t| Larutan        : Rp  80.000,00  |"<<endl;
 cout<<"\t\t| Mizone         : Rp  100.000,00 |"<<endl;
 cout<<"\t\t| Teh Kotak      : Rp  50.000,00  |"<<endl;
 cout<<"\t\t======================================\n"<<endl;
 
 // Memasukkan jumlah barang yang dibeli
 cout<<"Masukkan jumlah Coca-cola yang dibeli       : "; cin>>CC;
 cout<<"Masukkan jumlah Sprite yang dibeli          : "; cin>>SP;
 cout<<"Masukkan jumlah Larutan yang dibeli         : "; cin>>L;
 cout<<"Masukkan jumlah Mizone yang dibeli          : "; cin>>M;
 cout<<"Masukkan jumlah Teh Kotak yang dibeli       : "; cin>>TK;
 cout<<"\n"<<endl;
 
 // Menampilkan customer's bill
 cout<<"\t========================== Customer's BILL =========================="<<endl;
 cout<<"\t| Jumlah \tDeskripsi \t\tHarga Satuan \tTotal Harga |"<<endl;
 cout<<"\t| ------ \t--------- \t\t------------ \t----------- |"<<endl;
 cout<<"\t|   "<<CC<<"\t\tCoca-cola         \t7000 \t\t"<<CC*70000<<"\t    |"<<endl;
 cout<<"\t|   "<<SP<<"\t\tSprite   \t\t9000 \t\t"<<SP*90000<<"\t    |"<<endl;
 cout<<"\t|   "<<L<<"\t\tLarutan \t\t8000 \t\t"<<L*80000<<"\t    |"<<endl;
 cout<<"\t|   "<<M<<"\t\tMizone            \t10000 \t\t"<<M*100000<<"\t    |"<<endl;
 cout<<"\t|   "<<TK<<"\t\tTeh Kotak \t\t5000 \t\t"<<TK*50000<<"\t    |"<<endl;
 cout<<"\t| ----------------------------------------------------------------- |"<<endl;
 Minuman = CC*70000+SP*90000;
 Disc = 0.1*Minuman;
 Stat = L*80000+M*100000+TK*50000; 
 cout<<"\t|\t\t\tHarga Total Belanja \t: "<<Minuman<<"\t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Minuman-Disc<<"\t    |"<<endl;
 FixMinuman = Minuman-Disc;
 Disc = 0.1*Stat;
 cout<<"\t|\t\t\tHarga Total Stationary \t: "<<Stat<<"  \t    |"<<endl;
 cout<<"\t|\t\t\tPotongan Harga \t\t: "<<Disc<<"   \t    |"<<endl;
 cout<<"\t|\t\t\tHarga Setelah Diskon \t: "<<Stat-Disc<<"            |"<<endl;
 FixStat = Stat-Disc;
 cout<<"\t|\t\t\t------------------------------------------- |"<<endl;
 cout<<"\t|\t\t\tTotal Pembayaran \t: "<<FixMinuman+FixStat<<"\t    |"<<endl;
 cout<<"\t====================================================================="<<endl;
}
