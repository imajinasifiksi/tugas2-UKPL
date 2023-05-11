// Muhammad Rizky Susanto - 123200145
#include <iostream>

using namespace std;

// fungsi uji
float hitung_total_harga(int kuantitas, float harga_satuan) {
    float nilai_diskon;
    if (kuantitas < 10) {
        // State 1: kuantitas < 10 (rendah)
        nilai_diskon = 0;
    } else if (kuantitas < 20) {
        // State 2: 10 <= kuantitas < 20 (sedang)
        nilai_diskon = 0.05;
    } else {
        // State 3: kuantitas >= 20 (tinggi)
        nilai_diskon = 0.1;
    }

    float total_harga = kuantitas * harga_satuan * (1 - nilai_diskon);
    return total_harga;
}

// pengujian
int main() {
    // State 1: kuantitas < 10 (rendah)
    cout << "State 1: " << hitung_total_harga(5, 100) << endl;

    // State 2: 10 <= kuantitas < 20 (sedang)
    cout << "State 2: " << hitung_total_harga(15, 100) << endl;

    // State 3: kuantitas >= 20 (tinggi)
    cout << "State 3: " << hitung_total_harga(25, 100) << endl;

    return 0;
}
