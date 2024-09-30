#pragma once
#include "Vemaybay.h"
#include "Nguoi.h"
#include <iostream>
using namespace std;

class hanhkhach : public Nguoi {
private:
    Vemaybay* ve;
    int soLuong;
public:
    hanhkhach();
    ~hanhkhach();
    void Nhap();
    void Xuat();
    float tongtien();
};

