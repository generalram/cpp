#include <iostream>
// Fibonacci sequence by Norman King 01/21/2012
using namespace std;
main()
{
   int counter; // The counting variable.
   int bucket1,bucket2,totalnum; // The bucket mixers and the total
   int temp; // tempoary storage

    counter=0;
     bucket1=0;
     bucket2=0;
        cout << "Enter two numbers to compute a Fibonacci sequence." << endl << endl;
	cout << "Enter the first number:";
	cin >> bucket1;
	cout << endl;
	cout << "Enter the second number:";
	cin >> bucket2;
	cout << endl;
       totalnum=0;
       cout << "And now the Fibbonaci Sequence." << endl << bucket1 << " " << bucket2;
       while ( ++counter <= 10 )
         {
           temp=bucket2;
           bucket2=bucket1+bucket2;   // bucket2 now holds contents of both buckets
           totalnum=totalnum+bucket2; // Add contents of bucket2 to total
           cout << " " << bucket2;
           bucket1=temp; // Refill bucket1 with value of old bucket2
         }
          cout << endl << "sum = " << totalnum << endl;
          system("pause");

    return 0;
}
