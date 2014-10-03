#include <iostream>
#include <string>
// Upcase by Norman King 01/21/2012
using namespace std;
main()
{
int count,lenstring;
string word;
cout << "Enter a character string up to 40 characters on the next line:" << endl;
cin >> word;
count=0;
lenstring = word.length();

while(count < lenstring)
 {
   if(word[count]>='a' && word[count]<='z')
   word[count]-=' '; /* Subtract 32 from word, ascii code for ' ' is 32 */
   count+=1;
 }
cout << "Here is your text back in upercase form: " << word << endl;

    
return 0;
}
