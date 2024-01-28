#include <bits/stdc++.h>
using namespace std;

class HinhChuNhat
{
	private: 
   	 int dai, rong, dt;
  	  float cv;
    
public:
   	 void Nhap();
    	void HienThi();
    	void KhoiTaoHinhChuNhat();
    	void DienTich();
    	float ChuVi();
};

void HinhChuNhat::Nhap()
{
    cout << "Nhap chieu dai: ";
    cin >> dai;
    cout << "Nhap chieu rong: ";
    cin >> rong;
}
void HinhChuNhat::HienThi()
{
    cout << "Chieu dai: " << dai << endl;
    cout << "Chieu rong: " << rong << endl;
    cout << "Dien tich: " << dt << endl;
    cout << "Chu vi: " << cv << endl;
    KhoiTaoHinhChuNhat();
}
void HinhChuNhat::KhoiTaoHinhChuNhat()
{
    for (int i = 0; i < dai; i++)
    {
        cout << "*";
    }
    cout << "\n";
    for (int i = 0; i < rong - 2; i++)
    {

        cout << "*";
        for (int j = 0; j < dai - 2; j++)
        {
            cout << " ";
        }
        cout << "*\n";
    }
    for (int i = 0; i < dai; i++)
    {
        cout << "*";
    }
}
void HinhChuNhat::DienTich()
{
    dt = dai * rong;
}
float HinhChuNhat::ChuVi()
{
    cv = (dai + rong) * 2;
}
int main()
{

    HinhChuNhat hcn;
    hcn.Nhap();
    hcn.DienTich();
    hcn.ChuVi();
    hcn.HienThi();

    return 0;
}

