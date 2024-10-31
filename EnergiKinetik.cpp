#include<iostream>
using namespace std;

void hitungEK(double massa, double kecepatan) {
	double EK = 0.5 * massa * kecepatan * kecepatan;
	cout << "Energi Kinetik : " << EK << "Joule" << endl;
}

int main() {
	double massaSepeda, beratBadan, kecepatan;

	cout << "Masukan massa sepeda (kg):";
	cin >> massaSepeda;
	cout << "Masukan berat badan (kg)";
	cin >> beratBadan;
	cout << "Masukan kecepatan (m/s):";
	cin >> kecepatan;

	double totalMassa = massaSepeda + beratBadan;
	hitungEK(totalMassa, kecepatan);

	return 0;
}