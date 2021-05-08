/**
 * @file L0414_多重继承情况下的构造与析构.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-07
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 	题号：L0414        题目:多重继承情况下的构造与析构        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.14，掌握多重继承情况下构造函数与析构函数的调用顺序。
修改构造函数，使程序运行的结果如下所示：

 请注意，main()函数必须按如下所示编写：
int main()
{
    Z obj(2,4,6);
    int ma=obj.getX();
    cout<<"a="<<ma<<endl;
    int mb=obj.getY();
    cout<<"b="<<mb<<endl;
    int mc=obj.getZ();
    cout<<"c="<<mc<<endl;
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。  
 */

#include<iostream>
using namespace std;

class X{
    private:
        int a;
    public:
        X(int sa):a(sa) {}
};

int main()
{
    Z obj(2,4,6);
    int ma=obj.getX();
    cout<<"a="<<ma<<endl;
    int mb=obj.getY();
    cout<<"b="<<mb<<endl;
    int mc=obj.getZ();
    cout<<"c="<<mc<<endl;
    return 0;
} 