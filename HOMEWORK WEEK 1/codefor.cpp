// vong lap for (bai 2)
#include <iostream>
using namespace std;
// tinh P= 2*4*6*...*2n
void tinhtong()
{
    int n,p=0;
    cout<<"Nhap vao so n: ";
    cin>>n;
    for(int i= 1; i<=n; i++)
    {
        p = p + (2*i);
    }
    cout<<"Tong P= 2*4*6*...*2n = "<<p<<endl;
}
// ve tam giac chieu cao n
void tamgiac()
{
    int n;
    cout<<"Nhap vao chieu cao tam giac: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
int main()
{
    int n;
    tinhtong();
    tamgiac();
    return 0;
}