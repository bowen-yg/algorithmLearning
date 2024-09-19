/*计算a+aa+aaa+...+a...a的值
最后有n个a*/
#include <iostream>
#include <cmath>
using namespace std;
int yeildNumber(int a,int count);
int main()
{
    
    unsigned int a, n,count,sum=0;
    cout<<"输入a: ";
    cin>>a;
    cout<<"输入n: ";
    cin>>n;
    count=n;
    for(int i=0;i<n;i++)//将这些数进行累加
    {
        sum+=yeildNumber(a,count);
        count=count-1;
    }
    
    cout<<"结果为: "<<sum;
    return 0;
}
//计算出每个单独的数,a,aa,aaa...
int yeildNumber(int a,int count)
{
    unsigned int num=0;
    for(int i=0;i<count;i++)
    {
        num+=a*pow(10,i);
    }
    return num;
}