#include <iostream>
using namespace std;
int main()

//正负数数量统计

{
//初始化变量
int a = 0;
int b = 0;
int i = 0;

while (1)
{
    //输入一个数
    cout << "Please enter your number here % ";
    std::cin >> i;

    //判断过程
    if(i > 0)
    {
        ++a;
    }
    else if(i < 0)
    {
        ++b;
        }
    else     
    {
    //统计结果
    cout << "Totlal numbers > 0:" << a <<endl;
    cout << "Totlal numbers < 0:" << b <<endl;
    //end    
    return 0;
    }
}

}