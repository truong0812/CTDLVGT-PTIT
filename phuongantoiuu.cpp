#include<iostream>
using namespace std;
int xopt[100], fopt=-1;
int x[100], d[100];
int n, b, a[100], c[100];
bool kiemTraDieuKien()
{
	int tong=0;
	for(int i=1; i<=n; i++)
	{
		if(x[i]==1)
		{
			tong+=a[i];
		}
		if(tong > b) 
			return false;
	}
	return true;
}
int tinhGiaTriSuDung()
{
	int tongGiaTriSuDung=0;
	for(int i=1; i<=n; i++)
	{
		if(x[i]==1)
		{
			tongGiaTriSuDung+=c[i];
		}
	}
	return tongGiaTriSuDung;
}
void capNhat(int value)
{
	fopt=value;
	for(int i=1; i<=n; i++)
		xopt[i]=x[i];
}
void Try(int i)
{
	for(int j=0; j<2; j++)
	{
		x[i]=j;
		if(i==n)
		{
			if(kiemTraDieuKien())
			{
				int value=tinhGiaTriSuDung();
				if(fopt < value)
				{
					capNhat(value);
				}
			}
		}
		else Try(i+1);
	}
}
void in()
{
	cout << fopt << endl;
	for(int i=1; i<=n; i++)
	{
		cout << xopt[i] << " ";
    }
	
}
int main()
{
	cin >> n >> b;
	for(int i=1; i<=n; i++)
	{
		cin >> c[i];
	}
	for(int i=1; i<=n; i++)
	{
		cin >> a[i];
	}
	Try(1);
	in();
	return 0;	
}
