/****************************************************
文件名：main.cpp
作者：幽光  
日期：2017/04/27
版本：1.0 
描述: 主函数，输入半径，输出圆的面积 
****************************************************/

#include <iostream>
#include "Circle.h"

using namespace std;

int main()
{
    double s,r;               //s：面积 r：半径
    
    cin >> r;                //输入半径
    s = Circle(r);           //计算面积
    cout << s << endl;       //输出面积
    return 0;
}
