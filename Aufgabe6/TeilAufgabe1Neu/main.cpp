#include <iostream>
#include <stdexcept>

using namespace std;

class myexception :public exception
{
	virtual const char* what() const throw()
	{
		return "Meine Ausnahme wurde geworfen";
	}
}myex;


void werfeAusnahme(int nr)
{
	if (nr == 1)throw exception("meineException");
	if (nr == 2)throw  invalid_argument("invalid argument aus std");
	if (nr == 3)throw myex;
}
void teila(int i) {
	
	try {
		werfeAusnahme(i);
	}
	catch (const char* meldung)
	{
		cout << meldung << endl;
	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
}
void divdurchnull()
{
	try {// C++ Ausnahmen aktivieren bei SEH-Ausnahemen(/Ha)
		int i = 0;
		int x = 0;
		x = 7 / i;

	}
	catch (exception& e)
	{
		cout << e.what() << endl;
	}
	catch (logic_error& e)
	{
		cout << e.what() << endl;
	}
	catch (bad_alloc& e)
	{
		cout << e.what() << endl;
	}
	catch (const int e) {
		cout << e << endl;
	}
	catch (...) {
		cout << "Sonstiger Fehler: evtl. Division durch 0" << endl;
	}
}
void wrapperlog(double inp)
{
	try {

		if (inp <= 0) {

			throw invalid_argument("Falsches Argument[log(x) oder x <= 0]");
		}
		else {

			cout << log(inp)<<endl;
		}
	}
	catch(const invalid_argument& e){
		cout << "Es ist ein fehler aufgetreten: " << e.what()<<endl;
	}
}
void aufgc()
{	
	cout << log(0) << endl;//Bei negativ -nan(ind) und bei NULL : -inf
	wrapperlog(0);
}
void index0bis5(int in)
{	try{
	if(0<=in&&in<=5)
	{
		cout << "ist im index0bis5"<<endl;
	}
	else { throw Index0bis5Error(); 
	}
}
catch(const Index0bis5Error e)
{
	cout << "Fehler:  " << e.what() << endl;
}

}
void aufgd()
{
	index0bis5(0);
	index0bis5(2);
	index0bis5(5);
	index0bis5(-1);
	index0bis5(6);

}
void aufge()
{
	try {
		vector<int> myvector;
		myvector.resize(myvector.max_size() + 1);
	}
	catch (const std::length_error& e)
	{
		cout << "lengthFehler: " << e.what() << endl;
	}
}
int main()
{
	//teila(1);
	divdurchnull();
	//aufgc();
	aufgd();
	aufge();
	return 0;
}