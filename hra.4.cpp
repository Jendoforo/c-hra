#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int volba;
int hp;
int utok;
int mana;

int enemyhp;
int enemyutok;

int fightvolba;

int main() {

    srand(time(0));

    cout<<"------VITEJTE V JENDOVE HRE!------";
    cout<<endl;

    cout<<"Jakou postavu si vyberete sefe?";
    cout<<endl;

    cout<<"(1) ADAM RYBA!! Staty:";
    cout<<endl;
    cout<<"Zivoty 5";
    cout<<endl;
    cout<<"Utok 4";
    cout<<endl;

    cout<<"(2) ASSASIN!! Staty:";
    cout<<endl;
    cout<<"Zivoty 3";
    cout<<endl;
    cout<<"Utok 5";
    cout<<endl;

    cout<<"(3) REZNIK!! Staty:";
    cout<<endl;
    cout<<"Zivoty 8";
    cout<<endl;
    cout<<"Utok 2";
    cout<<endl;

    cin >> volba;

    if(volba == 1) {

        hp = 5;
        utok = 4;
        mana = 2;

        cout<<"Vybral jste ADAM RYBA!!";
        cout<<endl;
    }

    else if(volba == 2) {

        hp = 3;
        utok = 5;
        mana = 4;

        cout<<"Vybral jste ASSASINA!!";
        cout<<endl;
    }

    else if(volba == 3) {

        hp = 8;
        utok = 2;
        mana = 1;

        cout<<"Vybral jste REZNIKA!!";
        cout<<endl;
    }

    cout<<endl;
    cout<<"------VASE STATY------";
    cout<<endl;

    cout<<"HP: "<<hp;
    cout<<endl;

    cout<<"UTOK: "<<utok;
    cout<<endl;

    cout<<"MANA: "<<mana;
    cout<<endl;

    cout<<endl;
    cout<<"!!!!!! PROBOUZIS SE V CELE !!!!!!";
    cout<<endl;

    cout<<"Nevite jak jste se tam dostal...";
    cout<<endl;

    cout<<"Na zemi lezi mrtvy strazny.";
    cout<<endl;

    cout<<"Mozna ma u sebe klic...";
    cout<<endl;

    int celaVolba;
    int klic = 0;

    while(klic == 0) {

        cout<<endl;
        cout<<"Co chcete udelat?";
        cout<<endl;

        cout<<"(1) PROHLEDAT STRAZNEHO";
        cout<<endl;

        cout<<"(2) UKRAST KLIC DOZORCI";
        cout<<endl;

        cout<<"(3) ZKUSIT VYRAZIT DVERE";
        cout<<endl;

        cin >> celaVolba;

        if(celaVolba == 1) {

            int sance = rand() % 100;

            cout<<endl;
            cout<<"Prohledavate mrtveho strazneho...";
            cout<<endl;

            if(sance < 70) {

                cout<<"NASLI JSTE KLIC!";
                cout<<endl;

                klic = 1;
            }

            else {

                cout<<"Nic jste nenasel.";
                cout<<endl;
            }
        }

        else if(celaVolba == 2) {

            int sance = rand() % 100;

            cout<<endl;
            cout<<"Snazite se okrast dozorce...";
            cout<<endl;

            if(sance < 50) {

                cout<<"USPESNE JSTE UKRADL KLIC!";
                cout<<endl;

                klic = 1;
            }

            else {

                cout<<"DOZORCE VAS PRASTIL!";
                cout<<endl;

                hp = hp - 1;

                cout<<"Ztratil jste 1 HP!";
                cout<<endl;

                cout<<"Aktualni HP: "<<hp;
                cout<<endl;

                if(hp <= 0) {

                    cout<<endl;
                    cout<<"UMREL JSTE VE VEZENI!";
                    cout<<endl;

                    return 0;
                }
            }
        }

        else if(celaVolba == 3) {

            int sance = rand() % 100;

            cout<<endl;
            cout<<"Kopete do dveri...";
            cout<<endl;

            if(sance < 30) {

                cout<<"DVERE SE ROZPADLY!";
                cout<<endl;

                klic = 1;
            }

            else {

                cout<<"Nevyslo to.";
                cout<<endl;
            }
        }

        else {

            cout<<"Spatna volba!";
            cout<<endl;
        }
    }

    cout<<endl;
    cout<<"UTEKL JSTE Z CELY!";
    cout<<endl;

    cout<<"Ale...";
    cout<<endl;

    cout<<"!!!!!! POTKAL JSTE MONSTRUM !!!!!!";
    cout<<endl;

    enemyhp = 10;
    enemyutok = 2;

    while(enemyhp > 0 && hp > 0) {

        cout<<endl;
        cout<<"------FIGHT------";
        cout<<endl;

        cout<<"TVE HP: "<<hp;
        cout<<endl;

        cout<<"HP NEPRITELE: "<<enemyhp;
        cout<<endl;

        cout<<endl;
        cout<<"Co chces udelat?";
        cout<<endl;

        cout<<"(1) UTOCIT";
        cout<<endl;

        cout<<"(2) HEAL";
        cout<<endl;

        cin >> fightvolba;

        if(fightvolba == 1) {

            cout<<"Zautocil jste!";
            cout<<endl;

            enemyhp = enemyhp - utok;

            cout<<"Ubral jste "<<utok<<" DMG!";
            cout<<endl;
        }

        else if(fightvolba == 2) {

            if(mana > 0) {

                hp = hp + 2;
                mana = mana - 1;

                cout<<"Pouzil jste HEAL!";
                cout<<endl;

                cout<<"Dostal jste 2 HP!";
                cout<<endl;
            }

            else {

                cout<<"NEMATE MANU!";
                cout<<endl;
            }
        }

        if(enemyhp > 0) {

            cout<<endl;
            cout<<"NEPRITEL UTOCI!";
            cout<<endl;

            hp = hp - enemyutok;

            cout<<"Nepritel vam ubral "<<enemyutok<<" HP!";
            cout<<endl;
        }
    }

    cout<<endl;

    if(hp > 0) {

        cout<<"!!!!!!!! VYHRAL JSTE !!!!!!!!";
        cout<<endl;

        cout<<"Monster bylo porazeno.";
        cout<<endl;
    }

    else {

        cout<<"!!!!!!!! PROHRAL JSTE !!!!!!!!";
        cout<<endl;

        cout<<"Monstrum vam dalo na frak.";
        cout<<endl;
    }

    return 0;
}
