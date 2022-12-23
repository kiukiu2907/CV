#include <iostream>
using namespace std;
int main () {
    float KhoiLuong, ChieuCao;
    cin >> KhoiLuong;
    cin >> ChieuCao;
    float BMI;
    BMI = KhoiLuong / ( ChieuCao * ChieuCao );
    if (BMI < 18.5 ) cout << "THIEU CAN";
    if ((BMI >= 18.5) && (BMI <25)) cout <<"BINH THUONG";
    if ((BMI >= 25) && (BMI <30)) cout <<"THUA CAN";
    if (BMI>=30) cout << "BEO PHI";
    return 0;
}