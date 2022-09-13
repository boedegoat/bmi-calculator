#include <iostream>
#include "bmi.hpp"
using namespace std;

int main() {
    cout << "BMI (Body Mass Index) Calculator" << "\n";

    while (true) {
        double tinggi_cm, tinggi_m, berat_kg;

        cout << "\n" << "Tinggi badan (cm) : "; cin >> tinggi_cm;
        cout << "Berat badan (kg) : "; cin >> berat_kg;

        tinggi_m = tinggi_cm / 100;
        double bmi = hitung_bmi(berat_kg, tinggi_m);
        cout << "\n" << "BMI anda : " << bmi << "\n";

        string kelompok = tentukan_kelompok(bmi);
        cout << "Anda termasuk ke dalam kelompok " << kelompok << "\n";

        if (kelompok != "ideal") {
            auto [min_berat_ideal_kg, max_berat_ideal_kg] = hitung_berat_ideal(tinggi_m);
            cout << "Agar BMI anda ideal, berat badan anda harus diantara " << min_berat_ideal_kg << " - " << max_berat_ideal_kg << " kg\n";
        }

        char lanjut;
        cout  << "\n" << "Hitung lagi ? (y/n) "; cin >> lanjut;

        if (lanjut == 'y') {
            continue;
        } else if (lanjut == 'n') {
            break;
        }
    }
}

