/**
 * @file L1_04-强迫症.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-04-30
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 7-4 强迫症 (10 分)
小强在统计一个小区里居民的出生年月，但是发现大家填写的生日格式不统一，
例如有的人写 199808，有的人只写 9808。
有强迫症的小强请你写个程序，把所有人的出生年月都整理成 年年年年-月月 格式。
对于那些只写了年份后两位的信息，我们默认小于 22 都是 20 开头的，其他都是 19 开头的。

输入格式：
输入在一行中给出一个出生年月，为一个 6 位或者 4 位数，题目保证是 1000 年 1 月到 2021 年 12 月之间的合法年月。

输出格式：
在一行中按标准格式 年年年年-月月 将输入的信息整理输出。

输入样例 1：
9808
输出样例 1：
1998-08
输入样例 2：
0510
输出样例 2：
2005-10
输入样例 3：
196711
输出样例 3：
1967-11
 */

//学习string类的使用，结合题目
#include<iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main(){
    string str;
    cin >> str;
    string month, year;
    unsigned int strlong = str.length();
    //cout << "lenth =" << strlong << endl;
    //cout << "Day=" << str.substr(2,2) << endl;
    if (strlong == 4) {
        month = str.substr(2,2);
        year = str.substr(0,2);
        if (stoi(year)>=22){
            year.insert(0,"19");
        }
        else year.insert(0,"20");
    }
    else {
        year = str.substr(0,4);
        month = str.substr(4,2);
    }
    cout << year << "-" << month << endl;
}