#include <iostream>
using namespace std;
const int MAX = 50;
struct MATRAN
{
	int list[MAX][MAX];
	int n;
	int m;
};

void Nhap_MaTran(MATRAN& a)
{
	cout << "\n Nhap So Dong: "; cin >> a.n;
	cout << "\n Nhap So Cot: "; cin >> a.m;
	for (int i = 0; i < a.n; i++)
		for (int j = 0; j < a.m; j++)
		{
			cout << "\n a[" << i << "]" << "[" << j << "]=";
			cin >> a.list[i][j];
		}
}

void Xuat_MaTran(MATRAN a)
{
	for (int i = 0; i < a.n; i++)
	{
		cout << endl;
		for (int j = 0; j < a.m; j++)
			cout << " " << a.list[i][j];
	}
}

int Tong_MaTran(MATRAN a)
{
	int tong = 0;
	for (int i = 0; i < a.n; i++)
		for (int j = 0; j < a.m; j++)
		{
			tong += a.list[i][j];
		}
	return tong;
}

int Min_Duong(MATRAN a)
{
	int min = 0;

	for (int i = 0; i < a.n; i++)
		for (int j = 0; j < a.m; j++)
		{
			if (a.list[i][j] > 0)
			{
				min = a.list[i][j];
				break;
			}
		}
	if (min != 0)
	{
		for (int i = 0; i < a.n; i++)
			for (int j = 0; j < a.m; j++)
			{
				if (a.list[i][j] > 0 && a.list[i][j] < min)
				{
					min = a.list[i][j];
				}
			}
		return min;
	}

	//int min = 0, flag = 0;
	//for (int i = 0; i < a.n; i++)
	//	for (int j = 0; j < a.m; j++)
	//		if (a.list[i][j] > 0)
	//			if (!flag) {
	//				min = a.list[i][j];
	//				flag = 1;
	//			}
	//			else
	//				if (a.list[i][j] < min)
	//					min = a.list[i][j];
	//return min;
	return -1;
}


int main()
{
	MATRAN a;
	Nhap_MaTran(a);
	cout << "\n Xuat Ma Tran: ";
	Xuat_MaTran(a);
	cout << "\n Tong Ma Tran: " << Tong_MaTran(a);
	cout << "\n Gia Tri Duong Nho Nhat Trong Mang: " << Min_Duong(a);
	return 0;

}