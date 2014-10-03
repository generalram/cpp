#include<iostream>
using namespace std;
// Norman King 06/07/2000
// Life Insurance premium prototype selection
// Normad Solutions, Inc. http://www.normad.com
int main()
{
	char name[20];
	int age;
	char disabled;
	double rate;
	
	for(int i = 0; i <= 5; i++)
	{
	disabled = 'n';
	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter age: " << endl;
	cin >> age;
	cout << "Is Client Disabled?: " << endl;
	cin >> disabled;

	if(age <= 25)
		rate = 227.00;
	if(age >= 35)
		rate = 307.00;
	if(age >= 45)
		rate = 327.00;
	if(age >= 55)
		rate = 355.00;
	if(age >= 65)
		rate = 377.00;
	if (disabled == 'y') 
        rate = rate + (rate * 0.30);
	cout << "Your rate: $ " << rate << endl;

	}
	cout << "NAME       AGE         PREMIUM " << endl;
	cout << " _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ " << endl;

	for(int a = 0; a <= 5; a++)
	{
	cout << name[20] << age << rate;
	}
    system("pause");
    return(0);
}
