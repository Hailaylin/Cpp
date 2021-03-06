/**
 * @file L0313_构造函数与析构函数.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-20
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0313        题目:构造函数与析构函数        得分：0  
  
作业提交截止时间：2021/4/21 0:00:00	 
 	
题目内容：
练习书上的例3.13，其中A的两个参数从键盘上输入。
输出时保留3位小数，方法如下：
cout<<fixed<<precision(3)<<A.abscomplex();

例：
（1）输入：1.1 2.2
输出：
Constructor called.
2.460
Destructor called.
 */

#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

class Complex{
    private:
        double real;
        double imag;
    public:
        Complex(double r=0.0, double i=0.0);
        ~Complex();
        double abscomplex();
};

Complex::Complex(double r, double i){
    real = r;
    imag = i;
    cout << "Constructor called." << endl;
}

Complex::~Complex(){
    cout << "Destructor called." << endl;
}

double Complex::abscomplex(){
    return sqrt(real*real + imag*imag);
}

int main()
{
    double r, i;
    cin >> r >> i;
    Complex A(r,i);
    cout << fixed << setprecision(3) << A.abscomplex() << endl;
}