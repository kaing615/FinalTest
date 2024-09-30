#include "Vemaybay.h"
Vemaybay::Vemaybay() {
    tenchuyen = "";
    ngaybay = "";
    giave = 0.0;
}

Vemaybay::~Vemaybay() {
    return;
}

void Vemaybay::Nhap() {
    cout << "Nhap ten chuyen bay : ";
    getline(cin, tenchuyen);
    cout << "Nhap ngay bay : ";
    getline(cin, ngaybay);
    cout << "Nhap gia ve : ";
    cin >> giave;
    cin.ignore();
}

void Vemaybay::Xuat() {
    cout << "Ten chuyen bay : " << tenchuyen << endl;
    cout << "Ngay bay : " << ngaybay << endl;
    cout << "Gia ve : " << giave << endl;
}

float Vemaybay::getGiaVe() {
    return giave;
}