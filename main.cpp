#include <iostream>
using namespace std;

int main() {

int volba;
bool potvrzeno = false;

int hp;
int energie;
int utok;
string role;
int zlato = 100;

cout << "\nVitejte! Vyberte si typ Vasi postavy:" << endl;

while (!potvrzeno) {

cout << "\n---VYBER ROLE-----" << endl;
cout << "\nValecnik = 1" << endl;
cout << "Lovec = 2" << endl;
cout << "Mag = 3" << endl;
cout << "Tank = 4" << endl;
cout << "Vase volba: ";
cin >> volba;

if (volba == 1) {

hp = 100;
energie = 100;
utok = 25;
role = "VALECNIK";

cout << "\n--- VALECNIK-----" << endl;
cout << "\nStatistiky: " << endl;
cout << "Zivoty: 100" << endl;
cout << "Energie: 100" << endl;
cout << "Utok: 25" << endl;

cout << "\n-----Schopnosti-----" << endl;
cout << "\nSEK MECEM - 25 DMG" << endl;
cout << "TORNADO - zatoci mecem a vsem priseram da 50 DMG za 50 energie" << endl;
cout << "SLAM - znici monstrum pod 100 HP za 75 energie" << endl;
}

else if (volba == 2) {

hp = 75;
energie = 125;
utok = 25;
role = "LOVEC";

cout << "\n----- LOVEC -----" << endl;
cout << "\nStatistiky: " << endl;
cout << "Zivoty: 75" << endl;
cout << "Energie: 125" << endl;
cout << "Utok: 25" << endl;

cout << "\n-----Schopnosti-----" << endl;
cout << "\nSTRELA LUKEM - 25 DMG" << endl;
cout << "OHNIVY SIP - po dobu 3 kol ubira automaticky 20 DMG za 50 energie" << endl;
cout << "SIP OSUDU - dalsi kolo znici priseru za 100 energie" << endl;

}

else if (volba == 3) {

hp = 50;
energie = 150;
utok = 25;
role = "MAG";

cout << "\n----- MAG -----" << endl;
cout << "\nStatistiky: " << endl;
cout << "Zivoty: 50" << endl;
cout << "Energie: 150" << endl;
cout << "Utok: 25" << endl;

cout << "\n-----Schopnosti-----" << endl;
cout << "\nKOUZLO HOLE - 25 DMG" << endl;
cout << "ZMRAZENI - zastavi priseru na jedno kolo za 50 energie" << endl;
cout << "BLESK - zasahne az 3 prisery po 75 DMG za 125 energie" << endl;

}

else if (volba == 4) {

hp = 150;
energie = 50;
utok = 25;
role = "TANK";

cout << "\n----- TANK -----" << endl;
cout << "\nStatistiky: " << endl;
cout << "Zivoty: 150" << endl;
cout << "Energie: 50" << endl;
cout << "Utok: 25" << endl;

cout << "\n-----Schopnosti-----" << endl;
cout << "\nPEST - 25 DMG" << endl;
cout << "STIT - zredukuje DMG dalsi kolo o 50% za 25nergie" << endl;
cout << "SKOK - skoci na max. 3 prisery za 50 DMG a 50 energie" << endl;

}

else {
cout << "\nNeplatna volba, zadejte cislo mezi 1 a 4." << endl;
continue;
}

cout << "\nPrejete si tuto roli zvolit?\n" << endl;
cout << "1 = ano" << endl;
cout << "2 = ne" << endl;
cout << "Vase volba: ";
int potvrzeni;
cin >> potvrzeni;

if (potvrzeni == 1) {
potvrzeno = true;
cout << "\nRole zvolena! ";
}

else if (potvrzeni == 2) {
cout << "\nZnovu zvolte roli." << endl;
}

else {
cout << "\nNeplatny udaj!\n" << endl;
}
}

cout << "Hra zacina!" << endl;

cout << "\n-----TVE AKTUALNI STATISTIKY-----" << endl;

cout << "\nRole: " << role << endl;
cout << "\nZivoty: " << hp << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n-----VESNICE----- " << endl;


cout << "\nHP: " << hp << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;
cout << "Zlato: " << zlato << endl;

cout << "\nNachazite se ve vesnici." << endl;

cout << "\n1 - leceni (+30 HP za 20 zlata)" << endl;
cout << "2 - utok +5 (30 zlata)" << endl;
cout << "3 - odejit" << endl;

int v;
cout << "Vase volba: ";
cin >> v;

if (v == 1)
{
if (zlato >= 20)
{
zlato -= 20;
hp += 30;
cout << "HP doplneno" << endl;}
else
{
cout << "Nemas dost zlata" << endl;
}
}
else if (v == 2)
{
if (zlato >= 30)
{
zlato -= 30;
utok += 5;

cout << "Utok zvysen" << endl;
}
else
{
cout << "Nemas dost zlata" << endl;
}
}
else
{
cout << endl << "Odesel jsi" << endl;
}


cout << "KONEC VESNICE" << endl;

cout << "\n----- MONSTRUM -----" << endl;

string monstrum = "Kostra";
int monsterHP = 50;
int monsterDMG = 10;

cout << "\nNarazil jsi na monstrum: " << monstrum << endl;

cout << "HP monstra: " << monsterHP << endl;
cout << "Damage monstra: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0)
{
cout << "\nTvoje HP: " << hp << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK")
{
cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC")
{
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG")
{
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK")
{
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1)
{
monsterHP -= utok;
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
}

if (monsterHP > 0)
{
hp -= monsterDMG;
cout << endl << "Monstrum te zasahlo za " << monsterDMG << " dmg." << endl;
}
}
while (monsterHP > 0 && hp > 0)
{

}

if (hp > 0)
{
cout << "\nMONSTRUM PORAZENO!" << endl;
zlato += 20;
}
else
{
cout << "\nPROHRAL JSI..." << endl;
}
return 0;

}