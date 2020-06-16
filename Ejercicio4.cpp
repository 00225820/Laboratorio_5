#include <iostream>
#include <stdio.h>
#include "cmath"

using namespace std;

void fecha(int dia, int mes, int anio)
{
  bool anio_bisiesto;
  anio_bisiesto=(anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);

  switch(mes)
   {
      case 1: 
      if (dia >=1 && dia<=30)
       {
         dia++;
        }
         else if(dia==31)
        {
         dia=1;
         mes++;
        }
        if(dia>=1 && dia<=31 && mes >=1 && mes<=12)
        {
          cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl; 
        }
        else 
        {
          cout <<"La fecha ingresada es incorrecta"<<endl;
        }
        break;
        case 3: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
       if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
       break;
       case 5: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
     
       break;
       case 7: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
       case 8: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
          dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
      
        case 10: 
       if (dia >=1 && dia<=30)
       {
         dia++;
       }
       else if(dia==31)
       {
         dia=1;
         mes++;
       }
        if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
       break;
        case 12: 
        if (dia >=1 && dia<=30)
       {
         dia++;
        }
        else if(dia==31)
        {
          dia=1;
         mes=1;
        }
         if(dia>=1 && dia<=31 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 4:
        if (dia >=1 && dia<=29)
       {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 6:
        if (dia >=1 && dia<=29)
        {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 9:
         if (dia >=1 && dia<=29)
       {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 11:
         if (dia >=1 && dia<=29)
       {
         dia++;
        }
        else if(dia==30)
        {
          dia=1;
         mes++;
        }
         if(dia>=1 && dia<=30 && mes>= 1 && mes <=12)
       {
         cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
       }
       else 
       {
         cout <<"La fecha ingresada es incorrecta"<<endl;
       }
        break;
        case 2:
        if(anio_bisiesto)
        {
          if(dia>=1 && dia<=28)
          {
            dia++;
          }
          else if(dia==29)
          {
            dia=1;
            mes++;
          }
          if (dia>=1 && dia<=29 && mes>= 1 && mes <=12)
          {
            cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
          }
          else
          {
            cout <<"La fecha ingresada es incorrecta"<< endl;
          }
          
          
        }
        else //el año no caiga bisiesto
        {
          if(dia>=1&& dia<=27)
          {
            dia++;
          }
          else if(dia==28)
          {
            dia=1;
            mes++;

          }
          if (dia>=1 &&dia<=28 &&mes>=1 &&mes<=12)
          {
            cout <<"La fecha ingresada es: " << dia << "/"<< mes <<"/"<<anio<< endl;
          }
          else
          {
            cout <<"La fecha ingresada es incorrecta"<< endl;
          }
        }
        break;
        default:
          cout <<"La fecha ingresada es incorrecta"<<endl;
          break;
  }    
}

int main(void)
{
  int dia, mes, anio;
  cout << "Introduzca su dia" << endl ;
  cin >>dia;
  cout << "Introduzca su mes" << endl;
  cin >>mes;
  cout << "Coloque el a"<<(char)164<<"o" << endl;
  cin >> anio;
  fecha(dia,mes,anio);
  return 0;
}

