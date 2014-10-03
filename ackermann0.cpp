#include <iostream>
#include <string>
// Ackermann function by Norman King 03/15/2000
// Prototype Ackerman function Normad Solutions, Inc. http://www.normad.com/
using namespace std;

double Ackermann(double m, double n)
{

   cout << "m= " << m << " n= " << n << endl;
   if (m == 0)
     {
       return(n+1);
     }
   
   if (m > 0 && n == 0)
     {
       return(Ackermann(m-1,1));
     }

   if (m > 0 && n > 0)
     {
       return(Ackermann(m-1,Ackermann(m,n-1)));
      }
}

int main()
{
    double result1;
    result1 = Ackermann(3,4);
    cout << "Ackermann(3,4) = " << result1 << endl;
    system("pause");
    return 0;
}
