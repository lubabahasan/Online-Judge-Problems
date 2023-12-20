#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float salary;

    cin>>salary;

    int money=salary;
    float coin=salary-money;

    if(salary>4500.00)
        cout<<"R$ "<<fixed<<setprecision(2)<<(350+(money-4500)*0.28)+coin*0.28<<'\n';
    else if(salary<=4500.00 && salary>3000.00)
        cout<<"R$ "<<fixed<<setprecision(2)<<(80+(money-3000)*0.18)+coin*0.18<<'\n';
    else if(salary<=3000.00 && salary>2000.00)
        cout<<"R$ "<<fixed<<setprecision(2)<<(money-2000)*0.08+coin*0.08<<'\n';
    else
        cout<<"Isento\n";
}
