#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
using namespace std;
class distance{
    private:
        int feet;
        double inches;
    public: 
        Distance(): feet(0), inches(0.0){}
        Distance(int ft, double in)int feet(ft), int inches(in){}
        void getDistance();
        void addDistance();
        void showDistance();
};
int main()
{

    Distance d1, d2;
    Distance d3(1, 2.5);

    return 0;
}
void getDistance()
{
    cout << "Insert feet and inches:"<<endl;
    cin >> feet >> inches;
}
void addDistance()
{
    
}