#include <iostream>
using namespace std;

// opgave 1
//int main()
  //{
	//cout << "hello world";

  //}

// oppgave 2
//int main()
//{
	//string noe;
	//cout << "Skriv noe";
	//cin >> noe;
	//cout << "Du skrev " <<noe;


/*void hallo()
{
	
	
	string hei;
	cout << "   Hei, Hva heter du \n";
	cin >>  hei;
	cout << " Det er du som heter "   << hei; 


} 
 

int main()
{
	int i = 1;
	for (i = 1; i < 5;)
	{
		hallo();
		++i;

	}
	if (i == 5);
	{
		cout << " Stop "; 
	}
	

}
*/

char olav = 'a';
int olav1 = 1;
long olav2 = 1; 
float olav3 = 2;
double olav4 = 3;
int main()
{
	cout << "stoerrelsen paa char = " << sizeof(olav) << "\n";
	cout << "stoerrelsen paa int = " << sizeof(olav1) << "\n";
	cout << "stoerrelsen paa long = " << sizeof(olav2) << "\n";
	cout << "stoerrelsen paa float = " << sizeof(olav3) << "\n";
	cout << "stoerrelsen paa double = " << sizeof(olav4) << "\n";
}