#include <iostream>
#include <string>

using namespace std;

main()
{
	cout<<"Zapraszam do skorzystania z niniejszego programu.\nJest on prostym kalkulatorem.\nKalkulator Lukasza ver. 1.0"<<endl;
	
	double zm1, zm2;
	
	cout<<"podaj pierwsza liczbe swojego dzialania: "<<endl;
	cin>>zm1;
	cout<<"podaj druga liczbe swojego dzialania: "<<endl;
	cin>>zm2;
	
	cout<<"\njakie dzialanie chcesz wykonac?"<<endl;
	cout<<"+ dodac"<<endl;
	cout<<"- odjac"<<endl;
	cout<<"* pomnozyc"<<endl;
	cout<<"/ podzielic"<<endl;
	
	char znak;
	
	cin >> znak;
	
	switch (znak)
	{
		case '+':
		cout << zm1 << "+" << zm2 << "=" << (zm1+zm2) << endl;
		break;
		
		case '-':
		cout <<zm1 << "-" << zm2 << "=" << (zm1-zm2) << endl;
		break;
		
		case '*':
		cout<<zm1<<"*"<<zm2<<"="<<(zm1*zm2)<<endl;
		break;
		
		case '/':
		if (zm2 != 0)
		cout<<zm1<<"/"<<zm2<<"="<<(zm1/zm2)<<endl;
		else
		cout<<"nie dzielimy przez 0"<<endl;
		break;
		
		
	}
	
system("pause");
	
}