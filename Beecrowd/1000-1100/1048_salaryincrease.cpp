#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float og_sal,n_sal;
    cin>>og_sal;
    if(og_sal<=400.00)
        n_sal = 1.15*og_sal;
    else if(og_sal<=800.00)
        n_sal = 1.12*og_sal;
    else if(og_sal<=1200.00)
        n_sal = 1.1*og_sal;
    else if(og_sal<=2000.00)
        n_sal = 1.07*og_sal;
    else
        n_sal = 1.04*og_sal;

    cout<<"Novo salario: "<<fixed<<setprecision(2)<<n_sal<<'\n';
    cout<<"Reajuste ganho: "<<fixed<<setprecision(2)<<n_sal-og_sal<<'\n';
    cout<<"Em percentual: "<<setprecision(0)<<((n_sal-og_sal)/og_sal)*100<<" %"<<'\n';


    return 0;
}
