// LinJiangHu.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//毕业设计【麟江湖】

#include <iostream>
#define dVersion "v1.0"//麟江湖版本
#define dWeb "http://edoyun.ke.qq.com/"//麟江湖官网
int main()
{
    //控制台载入游戏界面
    std::cout << "=============================================================="<<std::endl << std::endl ;
    std::cout << "                   麟江湖 “控制台”版" << dVersion << std::endl<<std::endl << std::endl;
    std::cout << "                      正在加载游戏……"<<std::endl;
    std::cout << "                        进度[8/100]"<<std::endl<<std::endl << std::endl;
    std::cout << "             官方网站  "<<dWeb<<std::endl;
    std::cout << "==============================================================" <<std::endl;

    system("pause");
    system("cls");
   
    //麟江湖激活游戏
    std::cout << "==============================================================" << std::endl << std::endl;//展示控制台
    std::cout << "                   麟江湖 “控制台”版" << dVersion << std::endl << std::endl << std::endl;
    std::cout << "             请输入您的个人信息，以用于激活游戏："<<std::endl;
    unsigned long long birthYear{};//出生年份
    long double weight{};//体重（单位kg）
    long double height{};//身高（单位cm）
    unsigned short sex{};//性别（0女 1男）
    unsigned long long phoneNum{};//手机号码

    std::cout << "                 出生年份：";
    std::cin >> birthYear;
    std::cout << "                 体重(单位kg)：";
    std::cin >> weight;
    std::cout << "                 身高(单位cm)：";
    std::cin >> height;
    std::cout << "                 性别(0男 1女)：";
    std::cin >> sex;
    std::cout << "                 手机号码：";
    std::cin >> phoneNum;
    
    unsigned long long actCode{};
    actCode = (phoneNum / 2 + birthYear * 10000000 +  static_cast<unsigned long long>(weight * weight / height)) * 10 + sex;//激活码加密算式
    std::cout << std::endl << std::endl << "                您的激活码是："<<actCode<<std::endl << std::endl << std::endl;
    std::cout << "             官方网站  " << dWeb << std::endl;
    std::cout << "==============================================================" << std::endl;
}