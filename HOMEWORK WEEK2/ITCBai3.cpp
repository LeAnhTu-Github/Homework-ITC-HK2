#include <iostream>
#include<cmath>
using namespace std;
class Dathuc3{
	private:
		int a, b, c, d, x;
	public:
		void Nhap(){
			cout <<"NHAP CAC GIA TRI: "<<endl;
			cout <<"a = ";cin >> a;
			cout <<"b = ";cin >> b;
			cout <<"c = ";cin >> c;
			cout <<"d = ";cin >> d;	
		}
		void Xuat(){
			if (a != 0){
				cout <<""<< a <<"x^3 + "<< b <<"x^2 + "<< c <<"x + "<< d <<endl;								
			}else if(b != 0){
				cout <<""<< b <<"x^2 + "<< c <<"x + "<< d <<endl;
			}else if(c != 0){
				cout <<""<< c <<"x + "<< d <<endl;
			}else if(d != 0){
				cout <<""<< d <<endl;
			}else{
				cout <<"\nKHONG TON TAI DA THUC!. "<<endl;
			}
		}
		int geta(){
			return a;
		}
		int getb(){
			return b;
		}
		int getc(){
			return c;
		}
		int getd(){
			return d;
		}
};
int main()
{
	Dathuc3 a[2];
	cout <<"NHAP DA THUC: "<<endl;
	cout <<"DA THUC 1: ";
	a[0].Nhap();
	cout <<"DA THUC 2: ";
	a[1].Nhap();
	cout <<"XUAT DA THUC: "<<endl;
	cout <<"DA THUC 1: "<<endl;
	a[0].Xuat();
	cout <<"DA THUC 2: "<<endl;
	a[1].Xuat();
	cout <<"TINH TONG 2 DA THUC: "<<endl;
	cout << a[0].geta() + a[1].geta() <<"x^3 + "
 		 << a[0].getb() + a[1].getb() <<"x^2 + "
 	  	 << a[0].getc() + a[1].getc() <<"x + "
 		 << a[0].getd() + a[1].getd() <<endl;
	return 0;
}