#include<iostream>
using namespace std;
class SP 
{
	float T;
	float A; 
public:
	friend istream & operator>>(istream & x,SP & y); 
	friend ostream & operator<<(ostream & x,SP & y); 
	SP operator+(SP y);
	SP operator-(SP y); 
	SP operator*(SP y); 
	SP operator/(SP y);
	SP(); // constructor 
	SP(float, float);
};

istream & operator>>(istream & x,SP & y)
{
	cout<<"Phan thuc: ";
	x>>y.T; 
	cout<<"Phan ao: ";
	x>>y.A;
	return x;
}

ostream & operator<<(ostream & x,SP & y)
{
	x<<y.T<<"+"<<y.A<<"*i"; 
	return x;
}
SP::SP(){
		T=A=0;
	}
SP::SP(float x1, float x2){
		T=x1;A=x2;
	}

SP SP::operator+(SP y) // ham tong
{
	SP z; 
	z.T=T+y.T; 
	z.A=A+y.A;
	return z;
}

SP SP::operator-(SP y) // ham hieu
{
	SP z;
	z.T=T-y.T; 
	z.A=A-y.A;
	return z;
}
SP SP::operator*(SP y) // ham nhan
{
	SP z;
	z.T=T*y.T;
	z.A=A*y.A;
	return z;
}


int main()
{

	SP x,y,z, z1, z2;
	cout<<"SP x: \n";
	cin>>x; 
	cout<<x<<endl; 
	cout<<"SP y: \n";
	cin>>y; 
	cout<<y<<endl;
	z=x+y;
	cout<<"Cong sp: "<<x<<" + "<<y<<" = "<<z<<endl; 
	z=x-y;
	cout<<"Tru sp: "<<x<<" - "<<y<<" = "<<z<<endl; 
	z=z1*z2;
	cout << "Nhan sp: "<<x<<" * "<<y<< " = " <<z<<endl;
	return 0;
}
