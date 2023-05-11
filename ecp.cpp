// Muhammad Rizky Susanto - 123200145
#include <iostream>

using namespace std;

// Fungsi Uji
string menghitung_bmi(float berat, float tinggi) {
    float bmi = berat / (tinggi * tinggi);
    if (bmi < 18.5) {
        return "Berat badan kurang";
    } else if (bmi < 25) {
        return "Berat badan normal";
    } else if (bmi < 30) {
        return "Berat badan lebih";
    } else {
        return "Obesitas";
    }
}

// Pengujian
int main() {
    // Test case 1: berat < 40, tinggi < 1.5 (rendah, rendah)
    cout << "Test case 1: " << menghitung_bmi(35, 1.4) << endl;

    // Test case 2: berat < 40, 1.5 <= tinggi < 1.8 (rendah, sedang)
    cout << "Test case 2: " << menghitung_bmi(38, 1.7) << endl;

    // Test case 3: berat < 40, tinggi >= 1.8 (rendah, tinggi)
    cout << "Test case 3: " << menghitung_bmi(39, 1.9) << endl;

    // Test case 4: 40 <= berat < 70, tinggi < 1.5 (sedang, rendah)
    cout << "Test case 4: " << menghitung_bmi(50, 1.4) << endl;

    // Test case 5: 40 <= berat < 70, 1.5 <= tinggi < 1.8 (sedang, sedang)
    cout << "Test case 5: " << menghitung_bmi(65, 1.7) << endl;

    // Test case 6: 40 <= berat < 70, tinggi >= 1.8 (sedang, tinggi)
    cout << "Test case 6: " << menghitung_bmi(68, 1.9) << endl;

    // Test case 7: berat >= 70, tinggi < 1.5 (tinggi, rendah)
    cout << "Test case 7: " << menghitung_bmi(80, 1.4) << endl;

    // Test case 8: berat >= 70, 1.5 <= tinggi < 1.8 (tinggi, sedang)
    cout << "Test case 8: " << menghitung_bmi(85, 1.7) << endl;

    // Test case 9: berat >= 70, tinggi >= 1.8 (tinggi, tinggi)
    cout << "Test case 9: " << menghitung_bmi(90, 1.9) << endl;

    return 0;
}
