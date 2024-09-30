#include "hanhkhach.h"

hanhkhach::hanhkhach() {
    ve = nullptr;
    soLuong = 0;
}

hanhkhach::~hanhkhach() {
    delete[] ve;
}

void hanhkhach::Nhap() {
    Nguoi::Nhap();
    cout << "Nhap so luong ve : ";
    cin >> soLuong;
    cin.ignore();
    ve = new Vemaybay[soLuong];
    for (int i = 0; i < soLuong; i++) {
        cout << "Nhap thong tin ve " << i + 1 << " : " << endl;
        ve[i].Nhap();
    }
}

void hanhkhach::Xuat() {
    Nguoi::Xuat();
    for (int i = 0; i < soLuong; i++) {
        cout << "Thong tin ve " << i + 1 << " : " << endl;
        ve[i].Xuat();
    }
}

float hanhkhach::tongtien() {
    float sum = 0;
    for (int i = 0; i < soLuong; i++) {
        sum += ve[i].getGiaVe();
    }
    return sum;
}
