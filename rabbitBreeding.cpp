#include <iostream>
/*兔子繁殖问题
斐波那契数列*/
int main()
{
    int number=100;
    unsigned int lastMonth=0,currentMonth=1;
    for (int month=1;month<=number;month++)
    {
        std::cout<<currentMonth<<' ';
        currentMonth=currentMonth+lastMonth;
        lastMonth=currentMonth-lastMonth;
    }
    return 0;
}