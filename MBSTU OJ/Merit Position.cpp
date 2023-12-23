#define nl '\n'
#include<bits/stdc++.h>
//22201134 Lubaba Hasan

using namespace std;

int main()
{
    short int n; cin>>n;
    string name[n];
    float mark[n];

    for(short int i=0; i<n; i++)
        cin>>name[i]>>mark[i];

    for(short int i=0; i<n; i++){
        for(short int j=0; j<n; j++){
            if(mark[i]>mark[j]){
                swap(name[i],name[j]);
                swap(mark[i],mark[j]);
            }
        }
    }

    for(short int i=0; i<n; i++){
        if(mark[i-1]==mark[i]){
            int c=1;
            while(1){
                i++;
                if(mark[i-1]==mark[i])
                    c++;
                else
                    break;
            }
            for(short int m=i-c; m<i; m++){
                for(short int n=i-c; n<i; n++){
                    if(name[n-1]>name[n])
                        swap(name[n],name[n-1]);
                }
            }
        }
    }
    short int pos=0;
    for(short int i=0; i<n; i++)
    {
        if(mark[i-1]!=mark[i])
            pos++;
        cout<<pos<<"."<<name[i]<<nl;
    }

    return 0;
}

/*
216
Olivia 4.00
Noah 3.99
Emma 3.98
Oliver 3.97
Charlotte 3.96
James 3.95
Amelia 3.94
Elijah 3.93
Sophia 3.92
William 3.91
Isabella 3.90
Henry 3.89
Ava 3.88
Lucas 3.87
Mia 3.86
Benjamin 3.85
Evelyn 3.84
Theodore 3.83
Luna 3.82
A 3.81
A 3.80
A 3.79
A 3.78
A 3.77
A 3.76
A 3.75
A 3.74
A 3.73
A 3.72
A 3.71
A 3.70
A 3.69
A 3.68
A 3.67
A 3.66
A 3.65
A 3.64
A 3.63
A 3.62
A 3.61
A 3.60
A 3.59
A 3.58
A 3.57
A 3.56
A 3.55
A 3.54
A 3.53
A 3.52
A 3.51
A 3.50
A 3.49
A 3.48
A 3.47
A 3.46
A 3.45
A 3.44
A 3.43
A 3.42
A 3.41
A 3.40
A 3.39
A 3.38
A 3.37
A 3.36
A 3.35
A 3.34
A 3.33
A 3.32
A 3.31
A 3.30
A 3.29
A 3.28
A 3.27
A 3.26
A 3.25
A 3.24
A 3.23
A 3.22
A 3.21
A 3.20
A 3.19
A 3.18
A 3.17
A 3.16
A 3.15
A 3.14
A 3.13
A 3.12
A 3.11
A 3.10
A 3.09
A 3.08
A 3.07
A 3.06
A 3.05
A 3.04
Cbarlotte 3.96
Jzmes 3.95
Ayelia 3.94
Eoijah 3.93
Skphia 3.92
Walliam 3.91
Ieabella 3.90
Hhnry 3.89
Ana 3.88
Licas 3.87
Maa 3.86
Bunjamin 3.85
Ebelyn 3.84
Tceodore 3.83
Ldna 3.82
A 3.03
A 3.02
A 3.01
A 3.00
A 2.99
A 2.98
A 2.97
A 2.96
A 2.95
A 2.94
A 2.93
A 2.92
A 2.91
A 2.90
A 2.89
A 2.88
A 2.87
A 2.86
A 2.85
A 2.84
A 2.83
A 2.82
A 2.81
A 2.80
A 2.79
A 2.78
A 2.77
A 2.76
A 2.75
A 2.74
A 2.73
A 2.72
A 2.71
A 2.70
A 2.69
A 2.68
A 2.67
A 2.66
A 2.65
A 2.64
B 2.63
B 2.62
B 2.61
B 2.60
B 2.59
B 2.58
B 2.57
B 2.56
B 2.55
B 2.54
B 2.53
B 2.52
B 2.51
B 2.50
A 2.49
A 2.48
A 2.47
A 2.46
A 2.45
A 2.44
A 2.43
A 2.42
A 2.41
A 2.40
A 2.39
A 2.38
A 2.37
A 2.36
A 2.35
A 2.34
A 2.33
A 2.32
A 2.31
A 2.30
A 2.29
A 2.28
A 2.27
A 2.26
A 2.25
A 2.24
A 2.23
A 2.22
A 2.21
A 2.20
A 2.19
A 2.18
A 2.17
A 2.16
A 2.15
A 2.14
A 2.13
A 2.12
A 2.11
A 2.10
A 2.09
A 2.08
A 2.07
A 2.06
A 2.05
A 2.04
Shawon 2.03
Shamim 2.02
Sohag 2.01
Polash 2.00
*/
