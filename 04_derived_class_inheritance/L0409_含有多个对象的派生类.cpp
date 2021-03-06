/**
 * @file L0409_含有多个对象的派生类.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-02
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0409        题目:含有多个对象的派生类        得分：0  
  
作业提交截止时间：2021/7/2 0:00:00	 
 	
题目内容：
练习书上的例4.9，掌握含有多个对象的派生类的构造析构函数的执行顺序。
程序运行如下图所示：

 请注意，main()函数必须按如下所示编写：
int main()
{
    UStudent stu(2001,"Zhang_Zhi",95,3001,"Wang_Da",70,3002,"Li_San",76,"IOT Engineering");
    stu.print();
    stu.print_auditor1();
    stu.print_auditor2(); 
        
    return 0;
} 

请将调试好的程序源代码（除main函数外的其余部分）复制到以下文本框，然后再点击“提交”按钮。                     
 */

#include<iostream>
#include<string>
using namespace std;

class Student {
    protected:
        int number;
        string name;
        float score;
    public:
        Student(int number1, string name1, float score1):number(number1), name(name1), score(score1) {}
        void print() {
            cout << "No:" << number << endl;
            cout << "Name:" << name << endl;
            cout << "Score:" << score << endl;
        }
};

class UStudent:public Student {
    private:
        string major;
        Student auditor1;
        Student auditor2;
    public:
        UStudent(int number1, string name1, float score1, int number2, string name2, float score2, int number3, string name3, float score3, string major1)
        : Student(number1, name1, score1), auditor1(number2, name2, score2), auditor2(number3, name3, score3) {
            major = major1;
        }
        void print() {
            cout << "Student:" << endl;
            Student::print();
            cout << "Major:" << major << endl;
        }
        void print_auditor1() {
            cout << "auditor:" << endl;
            auditor1.print();
        }
        void print_auditor2() {
            cout << "auditor:" << endl;
            auditor2.print();
        }
};

int main()
{
    UStudent stu(2001,"Zhang_Zhi",95,3001,"Wang_Da",70,3002,"Li_San",76,"IOT Engineering");
    stu.print();
    stu.print_auditor1();
    stu.print_auditor2(); 
        
    return 0;
} 