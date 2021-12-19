#include <iostream>

using namespace std;

int main()
{
    int OHOHO,AHAHA,AHAHAH;
    for(int O=0; O<=9; O++)
    {
        for(int H=0;H<=9;H++)
        {
            for (int A=0; A<=9; A++)
            {
                OHOHO=O*10000+H*1000+O*100+H*10+O;
                AHAHA=A*10000+H*1000+A*100+H*10+A;
                AHAHAH=A*100000+H*10000+A*1000+H*100+A*10+H;
                if(OHOHO+AHAHA==AHAHAH && A!=O && O!=H && H!=A )
                {cout<<"OHOHO: "<<OHOHO<<endl<<"AHAHA: "<<AHAHA<<endl<<"AHAHAH: "<<AHAHAH<<endl; cout<<O<<endl<<A<<endl<<H<<endl; break;}

            }
        }
    }
    return 0;
}
// OHOHO + AHAHA == AHAHAH
