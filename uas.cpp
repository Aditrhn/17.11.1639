#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
using namespace std;

class LOGIN
{
  public:
    string username;
    string password;
    bool Login()
    {
      system("cls");
      char ch;
      int loop = 1;
      initiateLogin:
      bool isLogin;
      cout << "========LOGIN=========" << endl;
      cout << "username: "; cin >> username;
      cout << "password: "; ch = getch();
      while(ch != 1 && loop <=6)
      {
        password.push_back(ch);
        cout << '*';
        ch = getch();
        loop++;
      }
      cout << "======================" << endl;
      (username == "AMIKOM" && password == "amikom") ? isLogin = true: isLogin = false;
      return isLogin;
    }
};

class Data{
    public:
      int NIM[70];
      string nama[70];
      int nim;

      void SetNIM()
      {
        nim = 1602;
        for(int i = 0; i < 33; i++)
        {
          NIM[i] = nim;
          nim++;
        }
        NIM[33] = 1636;
        NIM[34] = 1638;
        nim = 1639;
        for(int i = 35; i < 65; i++)
        {
          NIM[i] = nim;
          nim++;
        }
      }

      void SetNama()
      {
        nama[0] = "Maulana Addurunnafis";
        nama[1] = "Ario Dwi Laksono";
        nama[2] = "Hanif Rizki Akbar";
        nama[3] = "Rizal Almuchtadibillah";
        nama[4] = "Rahudin";
        nama[5] = "Cendy Oktari";
        nama[6] = "Muh Amir Fadlhurrahman Ranggong";
        nama[7] = "Nur Hidayah";
        nama[8] = "Taufik Abdullah";
        nama[9] = "Azis Dwi Aminudin";
        nama[10] = "Trimukti Angga Sias";
        nama[11] = "Huda Fatkhur Rahman";
        nama[12] = "I Putu Wibina Karsa Gumi";
        nama[13] = "Abadi Arkam";
        nama[14] = "Tatit Pakuwojo Jati";
        nama[15] = "Surtiko Barkah Ramadhan";
        nama[16] = "Amiruddin Istiqomah";
        nama[17] = "Renggatama Putra Waluya";
        nama[18] = "Atika Rahmawati";
        nama[19] = "Fransiscus Marcel Ekana Setiawan";
        nama[20] = "Cita Dwi Prabowo";
        nama[21] = "Abdullah Ulmi Hidhayat";
        nama[22] = "Octafian Guntur Fernanda";
        nama[23] = "Yudi Seno";
        nama[24] = "M. Ibang Fatyan";
        nama[25] = "Said Al Akhyar";
        nama[26] = "Mahatir Muhammad";
        nama[27] = "Muhammad Saiful Ihsan";
        nama[28] = "Nurrahman";
        nama[29] = "Muhammad Yoga Fariqi";
        nama[30] = "Aqsa Fiqhi Suparman";
        nama[31] = "Isti Wulandari";
        nama[32] = "Bayu Setyo Pangestu";
        nama[33] = "Jian Eka Permadi";
        nama[34] = "Ataka Badru Duja";
        nama[35] = "Aditiya Rahman";
        nama[36] = "Yoggy Jumantara";
        nama[37] = "Ardi Mahardika";
        nama[38] = "Wahidin Aji";
        nama[39] = "Muhammad Luthfi Pratama";
        nama[40] = "Yunaz Adhitya Kristanto";
        nama[41] = "Ari Chandra";
        nama[42] = "Ramdhani Yaka Wali";
        nama[43] = "David Lambert Siallagan";
        nama[44] = "Teresa Safitri";
        nama[45] = "Fadhil Rahmant";
        nama[46] = "Sagiyan Dimas Agusti";
        nama[47] = "Said Yuslam Dahda";
        nama[48] = "Kukuh Setyo Budi";
        nama[49] = "Rizky Rosyid Hidayat";
        nama[50] = "Muhammad Ramadani";
        nama[51] = "Ganesha Wijaya Kusuma";
        nama[52] = "Marianus Tri Angelo Nggadung";
        nama[53] = "Meilana";
        nama[54] = "Ivan Daniel Parlindungan Hasibuan";
        nama[55] = "Faisal Makruf";
        nama[56] = "Adytyo Wahyu Nugroho";
        nama[57] = "Refan Krismono Aji";
        nama[58] = "Lukman Fabian Aziz";
        nama[59] = "Fahmi Ardiansah";
        nama[60] = "Yahya Sugandi.Y";
        nama[61] = "Diviky Cordias Lubuk";
        nama[62] = "Bima Tirta Lumban Toruan";
        nama[63] = "Titah Mufti Fathurohmah";
        nama[64] = "Ahmad Topaz Tektonika";
      }
};

Data mhs;
void mainMenu();
void cekMhs();
void cari();
int logout();
void linetopbot();
void linemid();

int main()
{
    LOGIN lgn;
    initiate:
    if(lgn.Login()){
        mainMenu();
    }else{
        system("cls");
        cout << "something wrong" << endl;
        goto initiate;
    }
}

void linetopbot()
{
  for(int i = 0; i < 49; i++)
  {
    cout << "=";
  }
  cout << endl;
}

void linemid()
{
  for(int i = 0; i < 49; i++)
  {
    cout << "-";
  }
  cout << endl;
}

void mainMenu(){
    system("cls");
    mhs.SetNIM();
    mhs.SetNama();
    int choice;
    cout << "======================" << endl;
    cout << "=== INFORMATIKA 11 ===" << endl;
    cout << "======================" << endl;
    cout << "1.Cek Daftar Mahasiswa" << endl;
    cout << "2.Cari Mahasiswa" << endl;
    cout << "3.Logout" << endl;
    cout << "======================" << endl;
    cout << "pilihan: "; cin >> choice;
    switch(choice){
        case 1:
            cekMhs();
            break;
        case 2:
            cari();
            break;
        case 3:
           logout();
            break;
        default:
        mainMenu();
        break;
    }
}

void cekMhs(){
    system("cls");
    char b;
    linetopbot();
    cout << setiosflags(ios::left) << setw(11) << "     NIM"; cout << " | ";
    cout << setiosflags(ios::left) << setw(25) << "\t\t    Nama"; cout << " | " << endl;
    for(int i = 0; i < 65; i++)
    {
      linemid();
      cout << setiosflags(ios::left) << " 17.11." << setw(4) << mhs.NIM[i]; cout << " | ";
      cout << setiosflags(ios::left) << setw(33) << mhs.nama[i]; cout << " | " << endl;
    }
    linetopbot();
    cout << endl;
    cout << "\nTekan B untuk Kembali" << endl;
    cin >> b;
    if(b == 'b' || b == 'B'){
        mainMenu();
    }
}

void cari(){
    char b, validation;
    int nim;
    cari:
    system("cls");
    cout << "===========================" << endl;
    cout << "4 Digit NIM terakhir : ";
    cin >> nim;
    cout << "[y] yes [c] cancel : ";
    cin >> validation;
    if(validation == 'y' || validation == 'Y'){
      cout << endl;
      linetopbot();
      cout << setiosflags(ios::left) << setw(11) << "     NIM"; cout << " | ";
      cout << setiosflags(ios::left) << setw(25) << "\t\t    Nama"; cout << " | " << endl;
      linemid();

      int awal = 0, akhir = 65, tengah;

      while(awal <= akhir)
      {
        tengah = (awal + akhir)/2;
        if(nim > mhs.NIM[tengah])
        {
          awal = tengah + 1;
        }else if(nim < mhs.NIM[tengah])
        {
          akhir = tengah - 1;
        }else{
          awal = akhir + 1;
        }
      }

      if(nim == mhs.NIM[tengah])
      {
        cout << setiosflags(ios::left) << " 17.11." << setw(4) << mhs.NIM[tengah]; cout << " | ";
        cout << setiosflags(ios::left) << setw(33) << mhs.nama[tengah]; cout << " | " << endl;
        linetopbot();
      }else{
        cout << "Data Tidak Ditemukan";
      }

    }else if(validation == 'c' || validation == 'C'){
        goto cari;
    }
    cout << "\nTekan B untuk kembali" << endl;
    cin >> b;
    if(b == 'b' || b == 'B'){
        mainMenu();
    }
}

int logout(){
    system("cls");
    return 0;
}
