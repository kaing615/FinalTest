#include <iostream>
#include <string>
#include <algorithm>
#include "hanhkhach.h"
using namespace std;

int main() {
    int n;
    cout << "Nhap so hanh khach : ";
    cin >> n;
    cin.ignore();

    hanhkhach* Hanhkhach = new hanhkhach[n];

    for (int i = 0; i < n; i++) {
        cout << "Nhap thong tin hanh khach thu " << i + 1 << " : " << endl;
        Hanhkhach[i].Nhap();
    }

    sort(Hanhkhach, Hanhkhach + n, [](hanhkhach& a, hanhkhach& b) {
        return a.tongtien() > b.tongtien();
        });

    cout << "Danh sach hanh khach theo tong tien giam dan : " << endl;
    for (int i = 0; i < n; i++) {
        cout << "Hanh khach " << i + 1 << " : " << endl;
        Hanhkhach[i].Xuat();
        cout << "Tong tien phai tra : " << Hanhkhach[i].tongtien() << endl;
    }

    delete[] Hanhkhach;

    return 1;
}
