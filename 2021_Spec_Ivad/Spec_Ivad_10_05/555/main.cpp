#include <iostream>
using namespace std;
bool gregorain_leap_year;
int diay(int, int);//days in a year
int diam(int, int, int);// days in a month
string stringmonth = "  ";
int main()
{
int years1;
int years2;
int months1;
int months2;
int days1;
int days2;
int daysnumber;
cout<<" Please enter the first date, example (year/month/day): "; //enter the first prefered date
cin >> years1 >> months1 >> days1;// the comamnd imputs that will be made by the person
cout<<" Please enter the second date example (year/month/day): ";
cin>>years2>>months2>>days2;//the second date
cout<<" The first date: "<<years1<<""<<months1<<""<<days1<<endl;
cout<<" The second date: "<< years2<<""<<months2<<""<<days2<<endl;
daysnumber = diay(years1,years2) + diam(years2,months2,days2) - diam(years1,months1,days1);
cout<<"days"<<daysnumber<<"since"<<years1<<"/"<<months1<<"/"<<days1<<"/"<<" - "<<years2<<"/"<<months2<<"/"<<days2<<endl;

    return 0;
}
bool gregorian_leap_year(int year)
{
   return(year%400==0)||((year%100!=0) && (year%4==0));
}
//int month,year,days;
int diam(int x, int y ,int z) // days in a year  // negali tesiok palikt tusciu int kai jau rasai pacia funkcija
{

int  daysnumber = 0;//days that have passed
for(int i = 1;i<y;i++)  // turi ideti ne month o ta vieneta kuri apsibrezi kaip menesio nr funkcijos apsirasime, siuo atveju "y"
{
switch (i)
{
case 1:    stringmonth = "january";daysnumber+=31;break;  // nepamirsk kokius intus naudoji, pradzio pasirasei daysnumber o paskui naudojai days, taip negalima naudog kuri apsirasai is pirmo, siuo atveju daysnumber o ne days
    case 3:    stringmonth = "march";daysnumber+=31;break;
        case 5:   stringmonth = "may";daysnumber+=31;break;
          case 7:    stringmonth = "june";daysnumber+=31;break;
            case 8:        stringmonth = "august"; daysnumber+=31;break;
                case 10:         stringmonth = "october";daysnumber+=31;break;
                    case 12:           stringmonth = "november";daysnumber+=31;break;
daysnumber+=31;break;
case 4:case 6:case 9:case 11:
daysnumber+= 30;break;
case 2:
if (gregorian_leap_year(x)!=0) daysnumber += 29;  //pamirsai nelygu nuliui "if" saligoje
else daysnumber+= 28;break;
};

}
return daysnumber;
} //pamirsai uzdaryti int diam funkcija
