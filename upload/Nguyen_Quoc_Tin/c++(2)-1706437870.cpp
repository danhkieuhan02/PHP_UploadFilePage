#include <iostream> 
#include <string> 
using namespace std;
class Sinhvien{
	private:
		int id;
		string  hoten, noisinh;
		float dtoan, dly, dhoa, dtb;
		
	public: 
		void Nhap();
		float Tinhtb();
		void Hienthi();		
};

float Sinhvien::Tinhtb() {
		return	dtb= (dtoan + dly + dhoa)/3;	
		
	}
		
void Sinhvien::Hienthi() {
		cout << hoten << ", " << id << ", " << noisinh << endl;
		cout << "Diem trung binh la: " << Tinhtb();
}

void Sinhvien::Nhap() {
	cout << "id: "; cin >> id;
	cin.ignore();
	cout << "Ho ten: "; getline(cin, hoten);
	cout << "Noi sinh: "; getline(cin, noisinh); 
	cout << "Diem toan: "; cin >> dtoan;  
	cout << "Diem ly: "; cin >> dly;  
	cout << "Diem hoa: "; cin >> dhoa;  
}

int main() {
	Sinhvien s;
	s.Nhap();
	s.Hienthi();
	s.Tinhtb();
	
	return 0;
}