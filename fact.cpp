#include <iostream>
#include <string>
// Factorial by Norman King 01/21/2012
using namespace std;

double factorial(int number1)
{
   int i;
   double sum=1;
   if (number1>0)
    for (i=1 ; i<number1+1 ; ++i)
     sum*=i;
  if (number1==0)
   sum=1;
 return(sum);
}

main()
{
 string ch;
 int number2;
 double fact;
 cout << "Do you want to compute a factorial (y/n) ?" << endl;
  cin >> ch;
  if ( (ch[0]=='y')||(ch[0]=='Y') )
   {
     cout << "Enter a integer number on the line below." << endl;
      cin >> number2;
       fact=factorial(number2);
        cout << "The factorial of " << number2 << " is " << fact << endl;
   }
   else
   cout << "Then why did you run this program?" << endl;
    return 0;
}
