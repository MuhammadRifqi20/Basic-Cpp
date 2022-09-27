#include <iostream>
using namespace std;

int main() {
    int belanja, total, totalp, pajak;
    int kategori1, kategori2, kategori3, kategori4, kategori5;
    // int harga, jmlh_item, total;
    // int total1, total2, total3, total4, total5;
    cout << "Katergori:\n1. Bumbu Dapur \n2. Alat tulis \n3. Minuman \n4. Obat-obatan \n5. Makanan \n0. Jika tidak ada \nMasukkan kategori: ";
    cin >> kategori1;
    cout << "Masukkan kategori ke 2: ";
    cin >> kategori2;
    cout << "Masukkan kategori ke 3: ";
    cin >> kategori3;
    cout << "Masukkan kategori ke 4: ";
    cin >> kategori4;
    cout << "Masukkan kategori ke 5: ";
    cin >> kategori5;

    cout << "Total belanja: ";
    cin >> belanja;

    if (belanja >= 1000000 && kategori1 == 1 || kategori2 == 1 || kategori3 == 1 || kategori4 == 1 || kategori5 == 1) 
    {
        cout << "=================================" << endl;
        cout << "Selamat kamu dapat diskon 5%" << endl;
        total = 0.05 * belanja;
        cout << "=================================" << endl;

        if (kategori1 == 2 || kategori2 == 2 || kategori3 == 2 || kategori4 == 2 || kategori5 == 2) 
        {
            cout << "Selamat kamu dapat bonus penggaris" << endl;
            cout << "=================================" << endl;
            totalp = 0.05*belanja;
            cout << "Total belanja kamu adalah: Rp" << totalp << endl;

            if (total >= 500000)
            {
                cout << "Kamu kena pajak 10%" << endl;
                pajak = 0.10*totalp;
                cout << "Total belanja: " << pajak << endl;
            }
        
        }
        else if (total >= 500000)
        {
            cout << "Kamu kena pajak 10%" << endl;
            pajak = 0.10*total;
            cout << "Total belanja: " << pajak << endl;
        }
        else
        {
            cout << "Total belanja kamu adalah: Rp" << total << endl;
        }
    }
    else if (kategori1 == 2 || kategori2 == 2 || kategori3 == 2 || kategori4 == 2 || kategori5 == 2) 
    {
            cout << "Selamat kamu dapat bonus penggaris" << endl;
            cout << "=================================" << endl;
            cout << "Total belanja kamu adalah: Rp" << belanja << endl;
    }
    else 
    {
        cout << "=================================" << endl;
        cout << "Total belanja kamu adalah: Rp" << belanja << endl;
    }
}
    // cout << "Barang yang tersedia: \n1. Bumbu Dapur (Rp100.000) \n2. Alat tulis (Rp50.000) \n3. Minuman (Rp20.000) \n4. Obat-obatan (Rp200.000) \n5. Makanan (Rp30.000) \n0. Jika selesai" << endl;

    // do {
    //     cout << "Masukkan barang: " << endl;
    //     cin >> belanja;

    //     switch(belanja) {
    //         case 1: 
    //             cout << "Bumbu dapur" << endl;
    //             harga = 1000000;
    //             cout << "Jumlah item: " << endl;
    //             cin >> jmlh_item;
    //             total1 = harga * jmlh_item;

    //             cout << "Total: " << total1 << endl;
    //             break;
    //         case 2: 
    //             cout << "Alat tulis" << endl;
    //             harga = 50000;
    //             cout << "Jumlah item: " << endl;
    //             cin >> jmlh_item;
    //             total2 = harga * jmlh_item;

    //             cout << "Total: " << total2 << endl;
    //             break;
    //         case 3: 
    //             cout << "Minuman" << endl;
    //             harga = 20000;
    //             cout << "Jumlah item: " << endl;
    //             cin >> jmlh_item;
    //             total3 = harga * jmlh_item;

    //             cout << "Total: " << total3 << endl;
    //             break;
    //         case 4: 
    //             cout << "Obat-obatan" << endl;
    //             harga = 200000;
    //             cout << "Jumlah item: " << endl;
    //             cin >> jmlh_item;
    //             total4 = harga * jmlh_item;

    //             cout << "Total: " << total4 << endl;
    //             break;
    //         case 5: 
    //             cout << "Makanan" << endl;
    //             harga = 30000;
    //             cout << "Jumlah item: " << endl;
    //             cin >> jmlh_item;
    //             total5 = harga * jmlh_item;

    //             cout << "Total: " << total5 << endl;
    //             break;
    //         case 0:
    //             cout << "Total belanjaan anda adalah: " << total << endl;
    //             break;
    //         default: 
    //             cout << "Barang tidak tersedia" << endl;
    //             break;
    //     }
    // } while (belanja != 0);
    // {
    //     cout << "Terima kasih" << endl;
    // }
    


    

    // if (belanja >= 1000000 && kategori1 == 1 || kategori2 == 1 || kategori3 == 1 || kategori4 == 1 || kategori5 == 1) {
    //     cout << "Selamat kamu dapat diskon 5%" << endl;

    //     if (kategori1 == 1 || kategori2 == 1 || kategori3 == 1 || kategori4 == 1 || kategori5 == 1)
    //     cout << "Total belanja kamu adalah: Rp" << diskon*belanja<< endl;
    // }
    // else {
    //     cout << "Total belanja kamu adalah: Rp" << belanja << endl;
    // }

    // return 0;
