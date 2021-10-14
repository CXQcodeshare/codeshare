#include <iostream>
using namespace std;
int revert_plus(int x)
{
    //cout << x;
    char serial[6] = {0,0,0,0,0,0};
    int j = 1;
    int p = x;

    //输出数位数组
    for (int i = 0; i < 6; i++)
    {
        serial[i] = p%10;
        p = p/10;
    }

    //读取相加
    for (int i = 5; i >= 0; i--)
    {
        if (serial[i] != 0)
        {
        x += (serial[i]*j);
        j = j*10;
        }
    }

    //检验
    //cout << "x + revert(x) = " << x << endl;

    return x;
}

int main()
{
    int yournumber = 0;
    int solution = 0;
    cout << "Please enter your number here : ";
    cin >> yournumber;
    //输入数字

    for (int i = 0; i<100000; i++)
    {
        if (revert_plus(i) == yournumber)
        {
            ++solution;
        }
    }
    //遍历查找

cout << solution << endl;
    return 0;
}
