#pragma once
#include <string>
#include <iostream>
using namespace std;

class Vemaybay {
private:
    string tenchuyen;
    string ngaybay;
    float giave;
public:
    Vemaybay();
    ~Vemaybay();
    void Nhap();
    void Xuat();
    float getGiaVe();
};

