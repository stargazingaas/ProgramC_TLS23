/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

// Mengetahui ukuran baju berdasarkan berat badan
int main()
{
    int n,b;
    cout<<" Ukuran Baju "<<endl;
    // Menentukan kategori baju (baju pria atau wanita)
    cout<<" Kategori "<<endl;
    cout<<" 1. Pria "<<endl;
    cout<<" 2. Wanita "<<endl;
    cout<<" Pilih Kategori (1/2):";
    cin>>n;
    
    // Menentukan ukuran baju pria
    if (n==1)
    { int b;
      cout<<" \n Kategori Pria \n";
      cout<<" Masukkan Berat Badan Anda (60-80) ";
      cin>>b;
     
    // Inputkan berat badan dan tampilkan ukuran baju
      if (b>=60 && b<=62)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'XS'\n"; 
       else if (b>62 && b<=65)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'S'\n";
       else if (b>65 && b<=68)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'M'\n";
       else if (b>68 && b<=71)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'L'\n";
       else if (b>71 && b<=74)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'XL'\n";
       else if (b>74 && b<=77)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda '2XL'\n";
       else if (b>77 && b<=80)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda '3XL'\n";
       else 
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda Belum Tersedia\n"; 
    }
    
    // Menentukan ukuran baju wanita
    else if (n==2)
    { int b;
      cout<<" \n Kategori Wanita \n";
      cout<<" Masukkan Berat Badan Anda (55-75) ";
      cin>>b;
      
    // Inputkan berat badan dan tampilkan ukuran baju
      if (b>=55 && b<=57)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'XS'\n";
       else if (b>57 && b<=60)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'S'\n";
       else if (b>60 && b<=63)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'M'\n";
       else if (b>63 && b<=66)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'L'\n";
       else if (b>66 && b<=69)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda 'XL'\n";
       else if (b>69 && b<=72)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda '2XL'\n";
       else if (b>72 && b<=75)
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda '3XL'\n";
       else
        cout<<" Berat Badan= "<<b<<" kg."<<" Ukuran Baju Anda Belum Tersedia\n";
    }
    else
     cout<<" Kategori Tidak Ditemukan.\n";
     cout<<" Terima Kasih!\n";
     
    return 0;
}
