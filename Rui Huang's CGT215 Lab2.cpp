// Rui Huang's CGT215 Lab2.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>

using namespace std;
int main()
{
	float A;
	float B;
	float X;
	cout << "Hello, my name is Rui Huang and I'm going to solve the equation:\nAB + X = 0\nfor B\n\nPlease enter a value for A: ";
	cin >> A;
	
	cout << "Please enter a value for X: ";
	cin >> X;
	
	B = (-X)/ A;
	cout << "\nSolving " << A << "B+" << X << "=0 For B...\n\nThe answer is :" << endl;
	cout <<"B=" << B << endl;
}
