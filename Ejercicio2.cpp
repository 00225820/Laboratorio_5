#include <iostream>
#include <stdio.h>
#include "cmath"

using namespace std;


int hora(int h, int m, int s)
{

    if ( h >= 0 && h <= 23 && m >= 0 && m <= 59 && s >= 0 && s <= 59 )
    {
        s++;
        if ( s == 60 )
        {
            s = 0;
            m++;
            if ( m == 60 )
            {
                m = 0;
                h++;
                if ( h == 24 )
                {
                    h = 0;
                }
            }
        }
        cout << "Un segundo despues la hora es:\n" <<h<<":"<<m<<":"<<s; 
        
                
        return 0;
        
    }

}

int main()
{
    int h, m, s;

    cout << "Programa para presentar la hora un segundo despues:)"<< endl;

    cout <<"Introduzca la hora \n";
    cin >> h;
    cout << "Introduzca los minutos \n";
    cin >> m;
    cout << "Introduzca los segundos \n";
    cin >> s;
    hora(h,m,s);
    

    return 0;
}
 
