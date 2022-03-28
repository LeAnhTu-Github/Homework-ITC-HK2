//btvn bai 3
#include <iostream>
#include <iomanip>
using namespace std;
class khachhang
{
    private:
        char ht[30];
        char cmt[10];
        char hokhau[50];
        struct{
            int ngay, thang, nam;
        };
    public:
        void nhapthongtin(khachhang kh[], int &n);
        void tieude();
        void xuatthongtin(khachhang kh[], int n);
        void sapxep(khachhang kh[], int n);
        void lietke(khachhang kh[], int &n);
};
void khachhang::tieude()
{
	cout<<"+------------------------+---------------------------+---------------------+---------------------------------+"<<endl; 
    cout <<"|"<<setw(15)<<"HO TEN"<<setw(10)
         <<"|"<<setw(20)<<"NGAY-THANG-NAM"<<setw(8)
         <<"|"<<setw(15)<<"SO CMT"<<setw(7)
         <<"|"<<setw(20)<<"HO KHAU"<<setw(14)
         <<"|"<<endl;
	cout<<"+------------------------+---------------------------+---------------------+---------------------------------+"<<endl; 
}
void khachhang::nhapthongtin(khachhang kh[], int &n)
{
    for(int i = 0 ; i < n ; i++)
    {   
        fflush(stdin);
        cout<<"khachhang thu: "<<i+1<<endl;
    	cout<<"Nhap ten cua khachhang: ";
    	cin.getline(kh[i].ht,30);
        cout<<"Nhap ngay sinh cua khachhang: "<<endl;
        cout<<"Nhap ngay : "; cin>>kh[i].ngay;
        cout<<"Nhap thang: "; cin>>kh[i].thang;
        cout<<"Nhap nam  : "; cin>>kh[i].nam;
        fflush(stdin);
    	cout<<"Nhap so cmt cua khachhang: ";
    	cin.getline(kh[i].cmt,10);
    	cout<<"Nhap ho khau cua khachhang: ";
    	cin.getline(kh[i].hokhau,50);
		cout<<"                                           \n";
	}
}
void khachhang::xuatthongtin(khachhang kh[], int n)
{
    tieude();
    for(int i=0; i<n; i++)
    {
        cout<<"|"<<setw(15)<<kh[i].ht<<setw(10)
            <<"|"<<setw(10)<<kh[i].ngay<<"/"<<kh[i].thang<<"/"<<kh[i].nam<<setw(11)
            <<"|"<<setw(15)<<kh[i].cmt<<setw(7)
            <<"|"<<setw(25)<<kh[i].hokhau<<setw(9)
            <<"|"<<endl;
	    cout<<"+------------------------+---------------------------+---------------------+---------------------------------+"<<endl;
    }
}
void khachhang::sapxep(khachhang kh[], int n)
{
    cout<<"\n\t\t\t\tDANH SACH KHACH HANG SAU KHI SAP XEP: "<<endl;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<=n; j++)
        {
            if(kh[i].ht > kh[j].ht)
            swap(kh[i], kh[j]);
        }
    }
    xuatthongtin(kh,n);
}
void khachhang::lietke( khachhang kh[], int &n)
{
    cout<<"\n\t\t\t\tDANH SACH KHACH HANG SINH THANG 12 LA: "<<endl;
    tieude();
    for(int i=0; i<n; i++)
    {
        if(kh[i].thang == 12)
        {
            cout<<"|"<<setw(15)<<kh[i].ht<<setw(10)
                <<"|"<<setw(10)<<kh[i].ngay<<"/"<<kh[i].thang<<"/"<<kh[i].nam<<setw(11)
                <<"|"<<setw(15)<<kh[i].cmt<<setw(7)
                <<"|"<<setw(25)<<kh[i].hokhau<<setw(9)
                <<"|"<<endl;
	        cout<<"+------------------------+---------------------------+---------------------+---------------------------------+"<<endl;
        }
    }
}
int main()
{
    int n;
	khachhang kh[100];
    do
	{
	cout << "Nhap so luong khachhang: ";
	cin >> n;
	}
    while(n<0);
	kh->nhapthongtin(kh,n);
    cout<<"\t\t\t\t\t\tDANH SACH KHACH HANG"<<endl;
	kh->xuatthongtin(kh,n);
    kh->sapxep(kh,n);
    kh->lietke(kh,n);
    return 0;
}