//C���Ե�32���ؼ��֣�
// �������͹ؼ��֣�12������char;short;int;long;float;double;unsigned;signed;struct;union;enum;void;
// �������ؼ��֣�12������ if;else;switch;case;default;for;do;while;break;continue;goto;return
// �洢��ؼ��֣�5������auto;extern;register;static;const
// �����ؼ��֣�3������sizeof;typedef;volatile
// 9�ֿ�����䣺if~else~��for ;while; do..while; continue ; break; switch;goto;return
// 34���������
// �����������+ = * / % ++ --
// ��ϵ������� < <= == > >= !=
// �߼�������� ! && ||
// λ������� << >> ~ | * &
// ��ֵ�������=������չ
// �����������?:
// ����������� .
// ָ��������� * &
// ���ֽ����� sizeof
// ǿ������ת���� (����)
// ����������� []
// ���� �� ����
// system����:��Ҫ#include <stdlib.h>�����Դ�һ���ⲿӦ�ó���system��������ֵ�� �ɹ�����0��ʧ�ܷ�����������
// ����cmd���calc��������notepad���±���mspaint ��ͼ;
#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    printf("hello!");
    system("calc");                        //�򿪼�����
    system("D:\\xmind\\XMind\\XMind.exe"); //��һ���ⲿӦ�ó���;�رոó���󣬲��ܼ���pause
    system("pause");
    return 0;
}