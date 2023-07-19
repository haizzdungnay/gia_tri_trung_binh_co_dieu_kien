/*Cho một dãy N các phần tử nguyên. Tính giá trị trung bình (để sau dấu phẩy đúng 3 chữ số)
Input:
Hai dòng, dòng đầu là số phần tử; dòng tiếp theo sau là dòng các phần tử
Output:
Giá trị trung bình của dãy với 3 chữ số sau dấu phảy*/
#include <iostream>
#include<cstdio>
using namespace std;
int main()
{
	int arr[100];
	int n;
	float tong = 0.000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	for (int i = 0; i < n; i++)
	{
		tong += arr[i];
	}
	printf("%.3f \n", tong / n);
	return 0;
}