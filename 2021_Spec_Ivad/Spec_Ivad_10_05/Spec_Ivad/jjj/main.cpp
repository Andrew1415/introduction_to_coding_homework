#include <iostream>

using namespace std;

int main()
{
    int SEND,MORE,MONEY;
    for(int S=0; S<=9; S++)
    {
        for(int E=0;E<=9;E++)
        {
            for (int N=0; N<=9; N++)
            {
                for(int D=0 ; D<=9; D++)
                {
                    for(int M=0 ; M<=9; M++)
                    {
                        for(int O=0; O<=9; O++)
                        {
                            for(int R=0; R<=9; R++)
                            {
                                for(int Y=0; Y<=9; Y++)
                                {
                                    SEND=S*1000+E*100+N*10+D;
                                    MORE=M*1000+O*100+R*10+E;
                                    MONEY=M*10000+O*1000+N*100+E*10+Y;
                                    if(SEND+MORE==MONEY && S!=E && S!=N && S!=D && S!=M && S!=O && S!=R && S!=Y && E!=N && E!=D && E!=M && E!=O && E!=R && E!=Y && N!=D && N!=M && N!=O && N!=R && N!=Y && D!=M && D!=O && D!=R && D!=Y && M!=O && M!=R && M!=Y && O!=R && O!=Y && R!=Y )
                                    {
                                        cout<<SEND<<endl<<MORE<<endl<<MONEY<<endl; break;

                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;

    /*
      SEND
        +
      MORE
     =======
      MONEY
            S E N D M O R Y
            S!=E && S!=N && S!=D && S!=M && S!=O && S!=R && S!=Y && E!=N && E!=D && E!=M && E!=O && E!=R && E!=Y && N!=D && N!=M && N!=O && N!=R && N!=Y && D!=M && D!=O && D!=R && D!=Y && M!=O && M!=R && M!=Y && O!=R && O!=Y && R!=Y


*/
}
