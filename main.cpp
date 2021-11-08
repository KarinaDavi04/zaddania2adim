#include <iostream>
using namespace std;

class Uczen{
	public:
		string imie;
		string nazwisko;
		int rok_urodzenia;
		string klasa;
		int grupa;
		PobierzDane(){
			cout<<"Prosze podac imie: "<<endl;
			cin>>imie;
			cout<<"Prosze podac nazwisko: "<<endl;
			cin>>nazwisko;
			cout<<"Prosze podac rok urodzenia: "<<endl;
			cin>>rok_urodzenia;
			cout<<"Prosze podac klase: "<<endl;
			cin>>klasa;
			cout<<"Prosze podac grupe: "<<endl;
			cin>>grupa;
			cout<<endl;
		};
		WyswietlDane(){
			cout<<"Imie "<<imie<<" Nazwisko "<<nazwisko<<" Rok urodzenia "<<rok_urodzenia<<" Klasa "<<klasa<<" Grupa "<<grupa<<endl; 
		};
		metryczka(){
			string name = "\n\nWykonala Davydiuk Karina 3Cg";
			cout<<name;
		};
};

int main() {
	Uczen uczen;
	uczen.PobierzDane();
	uczen.WyswietlDane();
	uczen.metryczka();
}
