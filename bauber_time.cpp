#include<iostream>
#include<cstdio>
using namespace std;

/*Crazy nested loop to display time in minutes and seconds from 00:00:00 to 23:59:59*/

int main()
{
    int h0, h1, m0, m1, s0, s1;

    while (h0 <= 2)
    {
        h1 = 0;

        while (h1 <= 3)
        {
            m0 = 0;

            while (m0 < 6)
            {
                m1 = 0;

                while (m1 < 10)
                {
                    s0 = 0;

                    while (s0 < 6)
                    {
                        s1 = 0;

                        while (s1 < 10)
                        {
                            printf("%d%d:%d%d:%d%d\n", h0, h1, m0, m1, s0, s1);

                            s1++;
                        }

                        s0++;
                    }
                    
                    m1++;
                }

                m0++;
            }

            h1++;
        }

        h0++;
    }

    return 0;
}