#include <iostream>
using namespace std;


int volba;
int postava;
int hp;
int atack;
int mana;

int main() {
 cout<<"------VITEJTE V JENDOVE HRE!------";
 cout<<endl;
 cout<<"Jakou postavu si vyberete sefe?";
 cout<<endl;
 cout<<"PRVNI POSTAVA NA MEM UZASNEM SEZNAMU:";
 cout<<endl;
 cout<<"(1)ADAM RYBA!! Staty:";
 cout<<endl;
 cout<<"Zivoty 5";
 cout<<endl;
 cout<< "Utok 4";
 cout<<endl;
 cout<< "(2) ASSASIN!! Staty:";
 cout<< " Zivoty 3";
 cout<< endl;
 cout<< "Utok 5 ";
   cout<<"(3) REZNIK!! Staty:";
 cout<<endl;
 cout<<"Zivoty 8";
 cout<<endl;
 cout<<"Utok 2";
 cout<<endl;
 if(volba==1) {
      cout<<"Vybral jste ADAM RYBA!!, Pøipravte se na velice jednoduche dobrodruzstvi.";
 }
  else if(volba == 2) {
     cout<<"Vybral jste ASSASINA!!, Pøipravte se na nebezpecne dobrodruzstvi.";
 }
  else if(volba == 3) {
     cout<<"Vybral jste REZNIKA!!, Pøipravte se na brutalni dobrodruzstvi.";
     cout<<endl;}




    return 0;
}
