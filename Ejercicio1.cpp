#include "iostream"
#include "cmath"
using namespace std;

int mcd(int num1, int num2)
{
 int res;
   if(num1>num2) 
   {
      do
     {
        res = num1 % num2;
        if (res != 0) // 
        {
            num1 = num2; // num1=14 num2=2
            num2 = res;
        }
     } while (res != 0);
     cout << "Su MCD es:" << num2 << endl;
    }
    else
    {
      do
     {
        res = num2 % num1;
        if (res != 0)
        {
            num2 = num1;
            num1 = res;
        }
     } while (res != 0);
     cout << "Su MCD:" << num1 << endl;
    }
     
  
  
}



int main(void)
{
    int num1, num2, residuo;
    
    cout << "Digite su numero" << endl;
    cin >> num1;
    cout << endl << "Digite su segundo numero" << endl;
    cin >> num2;
    mcd(num1, num2);
    
    
}