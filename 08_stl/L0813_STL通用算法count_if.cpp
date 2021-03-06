/**
 * @file L0813_STL通用算法count_if.cpp
 * @author HailayLin (hailay@qq.com)
 * @version 0.1
 * @date 2021-05-23
 * 
 * @copyright Copyright (c) 2021  Hailay.site & Xihe.ai
 * 题号：L0813        题目:STL通用算法count_if()        得分：0  
  
作业提交截止时间：2021/7/19 0:00:00	 
 	
题目内容：
先练习书上例8.13，在例8.12的基础上修改程序，统计及格人数。
 */

#include<iostream>
#include<list>
#include<algorithm>
using namespace std;

bool score_pass(int a){
    return a>=60 ? true:false;
}

int main(){
    int num;
    cout << "Number of students:";
    cin >> num;
    cout << "Please input the scores:" << endl;
    list<int> score;
    int sc;
    for (int i=0; i<num; i++){
        cin >> sc;
        score.insert(score.begin(), sc); 
    }
    cout << "Number of pass is " << count_if(score.begin(), score.end(), score_pass) << endl;
}