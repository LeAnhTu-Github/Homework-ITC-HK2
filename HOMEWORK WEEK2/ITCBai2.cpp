//bai2 ITC
#include<iostream>
#include<iomanip>
using namespace std;

class giaovien
{
	private:
		   char ht[30];
		   char bc[15];
		   char cn[20];
		   int t;
		   float bl,lcb;
	public:
		void nhapthongtin(giaovien gv[], int &n);
		void tieude();
		void xuatthongtin(giaovien gv[], int &n);
        void tinhtien(giaovien gv[], int n);
        void sapxep(giaovien gv[], int n);
        void lietke(giaovien gv[], int &n);
		
};
void giaovien::nhapthongtin(giaovien gv[], int &n)
{
    for(int i = 0 ; i < n ; i++)
    {   
        fflush(stdin);
        cout<<"giao vien thu: "<<i+1<<endl;
    	cout<<"nhap ten cua giao vien: ";
    	cin.getline(gv[i].ht,30);
    	cout<<"nhap bang cap cua giao vien: ";
    	cin.getline(gv[i].bc,15);
    	cout<<"nhap chuyen nganh cua giao vien: ";
    	cin.getline(gv[i].cn,20);
    	cout<<"nhap vao tuoi cua giao vien: ";
    	cin>>gv[i].t;
		cout<<"nhap vao bac luong cua giao vien: ";
    	cin>>gv[i].bl;
		cout<<"                                           \n";
	}
}
void giaovien::tieude()
{
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+----------------------+"<<endl; 
    cout <<"|"<<setw(15)<<"HO TEN"<<setw(10)
         <<"|"<<setw(15)<<"BANG CAP"<<setw(8)
         <<"|"<<setw(20)<<"CHUYEN NGANH"<<setw(9)
         <<"|"<<setw(8)<<"TUOI"<<setw(5)
         <<"|"<<setw(15)<<"BAC LUONG"<<setw(7)
         <<"|"<<setw(15)<<"LUONG CO BAN"<<setw(8)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+----------------------+"<<endl; 
}
void giaovien::xuatthongtin(giaovien gv[], int &n)
{
	tieude();
    tinhtien(gv,n);
	for(int i=0; i<n; i++)
	{
    cout <<"|"<<setw(15)<<gv[i].ht<<setw(10)
         <<"|"<<setw(15)<<gv[i].bc<<setw(8)
         <<"|"<<setw(20)<<gv[i].cn<<setw(9)
         <<"|"<<setw(8)<<gv[i].t<<setw(5)
         <<"|"<<setw(15)<<gv[i].bl<<setw(7)
         <<"|"<<setw(15)<<gv[i].lcb<<setw(8)
         <<"|"<<endl;
	cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+----------------------+"<<endl; 
	}
}
void giaovien::tinhtien(giaovien gv[], int n)
{
    for(int i=0; i<n; i++)
    {
        gv[i].lcb=gv[i].bl*610;
    }
}
void giaovien::sapxep(giaovien gv[], int n)
{
    cout<<"\t\t\t\t\t\tDanh sach giao vien sau khi sap xep la: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(gv[i].cn < gv[j].cn)
            swap(gv[i], gv[j]);
        }
    }
    xuatthongtin(gv,n);
}
void giaovien::lietke(giaovien gv[], int &n)
{
    tinhtien(gv,n);
    cout<<"\t\t\t\t\t\tDanh sach giao vien luong nho hon 2000 la: "<<endl;
    tieude();
    for(int i=0; i<n; i++)
    {
        if(gv[i].lcb<2000)
        {
            cout<<"|"<<setw(15)<<gv[i].ht<<setw(10)
                <<"|"<<setw(15)<<gv[i].bc<<setw(8)
                <<"|"<<setw(20)<<gv[i].cn<<setw(9)
                <<"|"<<setw(8)<<gv[i].t<<setw(5)
                <<"|"<<setw(15)<<gv[i].bl<<setw(7)
                <<"|"<<setw(15)<<gv[i].lcb<<setw(8)
                <<"|"<<endl;
	        cout <<"+------------------------+----------------------+----------------------------+------------+---------------------+----------------------+"<<endl;
        }  
    }
}
int main()
{
	int n;
	giaovien gv[100];
    do
	{
	cout << "Nhap so luong giao vien: ";
	cin >> n;
	}
    while(n<0);
	gv->nhapthongtin(gv,n);
	gv->xuatthongtin(gv,n);
    gv->lietke(gv,n);
    gv->sapxep(gv,n);
    return 0;
	
}