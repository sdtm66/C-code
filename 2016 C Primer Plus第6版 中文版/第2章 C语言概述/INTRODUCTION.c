//C语言的32个关键字：
// 数据类型关键字（12个）：char;short;int;long;float;double;unsigned;signed;struct;union;enum;void;
// 控制语句关键字（12个）： if;else;switch;case;default;for;do;while;break;continue;goto;return
// 存储类关键字（5个）：auto;extern;register;static;const
// 其他关键字（3个）：sizeof;typedef;volatile
// 9种控制语句：if~else~；for ;while; do..while; continue ; break; switch;goto;return
// 34种运算符：
// 算术运算符：+ = * / % ++ --
// 关系运算符： < <= == > >= !=
// 逻辑运算符： ! && ||
// 位运算符： << >> ~ | * &
// 赋值运算符：=及其扩展
// 条件运算符：?:
// 逗号运算符： .
// 指针运算符： * &
// 求字节数： sizeof
// 强制类型转换： (类型)
// 分量运算符： []
// 其他 ： （）
// system函数:需要#include <stdlib.h>；可以打开一个外部应用程序；system函数返回值： 成功返回0，失败返回任意数字
// 常见cmd命令：calc计算器；notepad记事本；mspaint 画图;
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("hello!");
    system("calc");                        //打开计算器
    system("D:\\xmind\\XMind\\XMind.exe"); //打开一个外部应用程序;关闭该程序后，才能继续pause
    system("pause");
    return 0;
}