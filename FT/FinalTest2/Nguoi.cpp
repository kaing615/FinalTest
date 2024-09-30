#include "Nguoi.h"
Nguoi::Nguoi() {
    hoten = "";
    gioitinh = "";
    tuoi = 0;
}

Nguoi::~Nguoi() {
    return;
}

void Nguoi::Nhap() {
    cout << "\nNhap ho ten : ";
    getline(cin, hoten);
    cout << "\nNhap gioi tinh : ";
    getline(cin, gioitinh);
    cout << "Nhap tuoi : ";
    cin >> tuoi;
    cin.ignore();
}

void Nguoi::Xuat() {
    cout << "Ho ten : " << hoten << endl;
    cout << "Gioi tinh : " << gioitinh << endl;
    cout << "Tuoi : " << tuoi << endl;
}