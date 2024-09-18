#include <iostream>
#include <cmath>
//找出100~1000的水仙花数
int main()
{
    //拆分
    //取余得到个位，对10取余
    //整除得到十位，百位
    using namespace std;
    for (int num=100;num<1000;num++){
        if (num==pow(num%10,3)+pow(num/10%10,3)+pow(num/100,3)){
            cout<<num<<"是水仙花数"<<endl;
        }
        
    }
    return 0;
}