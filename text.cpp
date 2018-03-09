#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<" "<<b<<" "<<c;

   cout<<endl<<endl;

	//Code Modifications
	ofstream myfile;
	myfile.open("abc.txt");	//Open the abc.txt file in write mode//
	
	if(myfile)	//If the file is opened successfully
	{
		myfile << a <<"	" << b <<" " << c << endl; 
		//outputs the three variables to the file
	}

	else //In the event the file could not be opened
	{
		cout<<"ERROR!!! FILE COULD NOT BE OPENED!" << endl;
		//Error Message
	}
	
	myfile.close();
 
   return 0;
}
