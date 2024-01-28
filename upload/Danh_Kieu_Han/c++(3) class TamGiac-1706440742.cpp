#include <iostream>
using namespace std;

class TamGiac {
	private: 
		double canhA, canhB, canhC;
	public: 
		TamGiac(double=0, double=0, double=0);
		void Nhap();
		void Xuat();
		int hopLe(); 
		void phanLoai();
		double tinhChuVi();
		double tinhDienTich();
};

TamGiac::TamGiac(double a, double b, double c) {
	canhA= a;
	canhB= b;
	canhC= c;
}
//
//void TamGiac::Nhap() {
//	cout << "Nhap a= "; cin >> a;
//	cout << "b= "; cin >> b;
//	cout << "c= "; cin >> c;

int TamGiac::hopLe() {
	if(((canhA + canhB) > canhC) && (canhA + canhC) > canhB && (canhB + canhC) > canhA) 
		return 1; 
	else 
		return 0; 
}

void TamGiac::phanLoai() {
	if((canhA!=canhB) && (canhA!=canhC) || (canhB!=canhA) && (canhB!=canhC) || (canhC!=canhB) && (canhC!=canhA)) {
		if((canhA==canhB) || (canhB==canhC) || (canhC==canhA)) 
			cout << "Day la tam giac can!" << endl; 
		else if((canhA*canhA==canhB*canhB + canhC*canhC) || (canhB*canhB== canhA*canhA + canhC*canhC) || (canhC*canhC== canhA*canhA + canhB*canhB)) {
			cout << "Day la tam giac vuong!" << endl;
		else 
		cout << "Day la tam giac thuong" << endl; 
		 else 
			cout << "Day la tam giac deu!" << endl;
}

int main() {
	cout << "Bai thuc hanh so 5" << endl;
	TamGiac t;
	t.
	return 0;
}
