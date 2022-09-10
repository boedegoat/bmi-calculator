#include <iostream>
#include <cmath>
using namespace std;

double hitung_bmi(double berat_kg, double tinggi_m);
string tentukan_kelompok(double bmi);

int main() {
    cout << "BMI (Body Mass Index) Calculator" << "\n";

    while (true) {
        double tinggi_cm, tinggi_m, berat_kg;

        cout << "Tinggi badan (cm) : "; cin >> tinggi_cm;
        cout << "Berat badan (kg) : "; cin >> berat_kg;

        tinggi_m = tinggi_cm / 100;
        double bmi = hitung_bmi(berat_kg, tinggi_m);
        cout << "BMI anda : " << bmi << "\n";

        string kelompok = tentukan_kelompok(bmi);
        cout << "Anda termasuk ke dalam kelompok " << kelompok << "\n";

        if (kelompok != "ideal") {
            int min_berat_ideal_kg = round(19 * pow(tinggi_m, 2));
            int max_berat_ideal_kg = round(24.5 * pow(tinggi_m, 2));
            cout << "Agar BMI anda ideal, berat badan anda harus diantara " << min_berat_ideal_kg << " - " << max_berat_ideal_kg << " kg\n";
        }

        char lanjut;
        cout << "Hitung lagi ? (y/n) "; cin >> lanjut;

        if (lanjut == 'y') {
            continue;
        } else if (lanjut == 'n') {
            break;
        }
    }
}

double hitung_bmi(double berat_kg, double tinggi_m) {
    return berat_kg / pow(tinggi_m, 2);
}

string tentukan_kelompok(double bmi) {
    string kelompok;

    if (bmi < 19) {
        kelompok = "kurus";
    } else if (bmi < 25) {
        kelompok = "ideal";
    } else if (bmi < 30) {
        kelompok = "gemuk";
    } else {
        kelompok = "obesitas";
    }

    return kelompok;
}