#define nl '\n'
#include<iostream>
//22201134 Lubaba Hasan

using namespace std;

int main()
{
    unsigned short int t; cin>>t;
    while(t--){
        short int date, month, year;
        cin>>date>>month>>year;
        //short int m_day[12] = {31,59,90,120,151,181,212,243,273,304,334,365};
        short int m_day[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
        short int bm_day[12] = {31,31,31,31,31,30,30,30,30,30,30,30};

        if(year>2018){
            bm_day[6]++;
            bm_day[11]--;
        }

        if(year%400==0 || year%4==0 && year%100!=0){
            m_day[2]++;
            bm_day[11]++;
        }

        switch(month){
            case 1:
                if(date>=15){
                    cout<<date-14;
                    cout<<" Magh 10 ";
                }
                else{
                    cout<<date+16;
                    cout<<" Poush 9 ";
                }
            case 2:                         //
                if(date>=14){               //
                    cout<<date-13           //
                    cout<<" Falgun 11 ";    //
                }                           //
                else{                       //
                    cout<<date+17           //
                    cout<<" Magh 10 ";      //
                }

            case 3:                          //
                if(date>=15){                //
                    cout<<date-14            //
                    cout<<" Choitra 12 ";    //
                }                            //
                else {                       //
                    cout<<date+              //
                    cout<<" Falgun 11 ";     //
                }
            case 4:
                if(date>=14){
                    cout<<date-13
                    cout<<" Boishakh 1 ";
                }
                else {
                    cout<<date+16
                    cout<<" Choitra 12 ";
                }
            case 5:
                if(date>=15) {
                    cout<<date-14
                    cout<<" Joistha 2 ";
                }
                else {
                    cout<<date+17
                    cout<<" Boishakh 1 ";
                }
            case 6:
                if(date>=15) {
                    cout<<date-14
                    cout<<" Ashar 3 ";
                }
                else {
                    cout<<date+17
                    cout<<" Joistha 2 ";
                }
            case 7:
                if(date>=16){
                    cout<<date-15
                    cout<<" Srabon 4 ";
                }
                else{
                    cout<<date+16
                    cout<<" Ashar 3 ";
                }
            case 8:
                if(date>=16){
                    cout<<date-15
                    cout<<" Vadro 5 ";
                }
                else{
                    cout<<date+16
                    cout<<" Srabon 4 ";
                }
            case 9:                         //
                if(date>=16){               //
                    cout<<" Ashwin 6 ";     //
                }                           //
                else{                       //
                    cout<<" Vadro 5 ";      //
                }
            case 10:                        //
                if(date>=17){               //
                    cout<<" Kartik 7 ";     //
                }                           //
                else{                       //
                    cout<<" Ashwin 6 ";     //
                }                           //
            case 11:
                if(date>=16){
                    cout<<date-15
                    cout<<" Agrahoyon 8 ";
                }
                else{
                    cout<<date+15
                    cout<<" Kartik 7 ";
                }
            case 12:
                if(date>=16){
                    cout<<" Poush 9 ";
                }
                else{
                    cout<<" Agrahoyon 8 ";
                }
        }

        if(month<4 || (month=4 && date<14)){
            cout<<year-594<<nl;
        }
        else {
            cout<<year-593<<nl;
        }
    }
}
