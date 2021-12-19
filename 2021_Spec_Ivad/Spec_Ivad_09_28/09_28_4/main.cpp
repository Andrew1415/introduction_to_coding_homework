#include <iostream>
using namespace std;
bool gregorian_leap_year(int);
int yty(int, int);
int months(int,int,int);
int main()
{
  int year1,month1,day1,year2,month2,day2,timeelapsed;
  cout << "First date | year month day" << endl;
  cin >> year1 >> month1 >> day1;
  cout << "Second date | year month day" << endl;
  cin >> year2 >> month2 >> day2;
  timeelapsed =  yty(year1,year2-1) - months(year1,month1,day1) + months(year2,month2,day2);
  cout << "Time elapsed since first date till second date: " << timeelapsed <<endl;
  cout << yty(year1,year2-1) <<endl;
  cout << months(year1,month1,day1) << endl;
  cout << months(year2,month2,day2) << endl;
  return 0;
}
    /*
    nd paskaiciuoti kiek liako esi pragivenes
    arba nuo vienis datos iki kitos...

    */
    /*
        algorith...
        timeelapsed =  yty(year1,year2-1) - months(year1,month1,day1) + months(year2,month2,day2);
    */
bool gregorian_leap_year(int x)
{
    return(x%400==0)||((x%100!=0) && (x%4==0));
}
int yty(int x, int y)
{
    int days=0;
    for(int i=x; i<=y; i++)
    {
        if(gregorian_leap_year(i)==0)
        {
            days+=365;
        }
        else
        {
            days+=366;
        }
    }
    return days;
}
int months(int x, int y, int z)
{
    int days=0;
    for (int i=1; i<y; i++)
    {
        switch(i)
        {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days+=31; break;
        case 4: case 6: case 9: case 11:
            days+=30; break;
        case 2:
            if(gregorian_leap_year(x)==0) {days+=28;}
            else {days+=29;};break;
        };
    }
    days+=z;
    return days;
}
/*
    wich months have how many days...
    31days: 1,3,5,7,8,10,12
    30days: 4,6,9,11
    leap year 29, other vise 28: 2
*/
