#include <iostream>
#include <string>

// Fizzbuzz by Norman King 05/03/2013
using namespace std;
int main()
{
  int i;
  string out;

    for ( i = 1; i <= 100; i++)
    {
        
        out = '0' + i;
        
        if (( i % 3) ==0 ) //i.e. multiple of 3
            out = "Fizz"; 
        if ((i % 5) == 0)  // i.e. multiple of 5 
            out = "Buzz";
            if ((i % 15) == 0) // Oops, forgot this
                out = "FizzBuzz";
        cout << out << endl;
        if ((i % 10 ) == 0)  //self-initative: make it neater, a bit;
            cout << endl; // an occasional newline reduces eyestrain
    //# done
    }
    cout << "." << endl;
    cout << "Task complete. Have A Nice Day!" << endl;
    system("pause");
    return(0);
}
