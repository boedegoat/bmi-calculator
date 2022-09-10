#include <cmath>
#include <string>
#include <tuple>
using namespace std;

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

tuple<int, int> hitung_berat_ideal(double tinggi_m) {
    int min_berat_ideal_kg = round(19 * pow(tinggi_m, 2));
    int max_berat_ideal_kg = round(24.5 * pow(tinggi_m, 2));
    return {min_berat_ideal_kg, max_berat_ideal_kg};
}