/*
	题号：B0104        题目:传说中的百度面试题        得分：0  
  
作业提交截止时间：2021/3/21 0:00:00	 
 	
题目内容：
依序遍历0到100闭区间内所有的正整数，如果该数字能被3整除，则输出该数字及‘*’标记；如果该数字能被5整除，则输出该数字及‘#’标记；如果该数字既能被3整除又能被5整除，则输出该数字及‘*#’标记。

输出：
3*
5#
6*
9*
10#
12*
15*#
......

思路：
先一个函数计算能被3整除，输出*；然后计算它能否被5整除，输出#；输出\n (算法是不对的，解决不了这个问题)
*/

#include <iostream>

using namespace std;

int main()

{
    for (int i = 0; i <= 100; ++i)
    {
        if (i == 0)
            continue;
        if (i % 3 == 0 && (i % 5 == 0))

            cout << i << "*#" << endl;

        else if (i % 3 == 0)

            cout << i << "*" << endl;

        else if (i % 5 == 0)

            cout << i << "#" << endl;
    }

    return 0;
}
