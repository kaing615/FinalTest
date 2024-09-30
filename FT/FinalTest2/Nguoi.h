#pragma once
#include <iostream>
#include <string>
using namespace std;

class Nguoi {
private:
    string hoten;
    string gioitinh;
    int tuoi;
public:
    Nguoi();
    ~Nguoi();
    void Nhap();
    void Xuat();
};

