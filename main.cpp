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
int XP = 0;
int level = 1;
int maxHP;
int maxEN;

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
maxHP = 100;
energie = 100;
maxEN = 100;
utok = 25;
role = "VALECNIK";

cout << "\n---- VALECNIK -----" << endl;
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
maxHP = 75;
energie = 125;
maxEN = 125;
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
maxHP = 50;
energie = 150;
maxEN = 150;
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
maxHP = 150;
energie = 50;
maxEN = 50;
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
cout << "\nZivoty: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;


int v;
while (true){
cout << "\n-----VESNICE----- " << endl;

cout << "\nHP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;
cout << "Zlato: " << zlato << endl;



cout << "\nNachazite se ve vesnici." << endl;

cout << "\n1 - leceni (+30 HP za 20 zlata)" << endl;
cout << "2 - utok (+5 utok za 30 zlata)" << endl;
cout << "3 - odejit" << endl;

int v;
cout << "Vase volba: ";
cin >> v;

if (v == 1){
if (zlato >= 20)
{
if (hp == maxHP){
cout << "Mas plne zivoty." << endl;
}
else{
zlato -= 20;
hp += 30;
if (hp > maxHP){
hp = maxHP;
}
cout << "HP doplneno." << endl;
}
}

else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v == 2){

if (zlato >= 30){
zlato -= 30;
utok += 5;

cout << "Utok zvysen" << endl;
}
else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v == 3){
cout << endl << "Odesel jsi" << endl;
break;
}
else{
cout << "Neplatny udaj, zkuste to znovu.";
continue;
}
}

cout << "KONEC VESNICE" << endl;

cout << "\n----- MONSTRUM -----" << endl;

string monstrum = "Kostra";
int monsterHP = 50;
int monsterDMG = 10;

cout << "\nNarazil jsi na monstrum: " << monstrum << endl;
cout << "CVAK, CVAK, KLIK, CHRAST." << endl;

cout << "HP monstra: " << monsterHP << endl;
cout << "Damage monstra: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstrum te zasahlo za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRUM PORAZENO!" << endl;
zlato += 20;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MONSTRUM -----" << endl;

monstrum = "Dcuh";
monsterHP = 40;
monsterDMG = 20;

cout << "\nNarazil jsi na monstrum: " << monstrum << endl;
cout << "HUUUUU...." << endl;

cout << "HP monstra: " << monsterHP << endl;
cout << "Damage monstra: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstrum te zasahlo za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRUM PORAZENO!" << endl;
zlato += 20;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MONSTRA -----" << endl;

monstrum = "Goblin a zombie";
monsterHP = 90;
monsterDMG = 20;

cout << "\nNarazil jsi na 2 monstra: " << monstrum << endl;
cout << "HEHEHEHEHE... ARGHGHGAAGH..." << endl;

cout << "HP monster: " << monsterHP << endl;
cout << "Damage monster: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monster: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstra za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstra te zasahla za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRA PORAZENY!" << endl;
zlato += 30;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MINI BOSS -----" << endl;

monstrum = "Obr";
monsterHP = 100;
monsterDMG = 10;

cout << "\nNarazil jsi na mini bosse: " << monstrum << endl;

cout << "Obr: Tamaten hnufak cufak chce nasejc zlato-sutry, majznu ho palici a hodim do gulase!" << endl;

cout << "HP mini bosse: " << monsterHP << endl;
cout << "Damage mini bosse: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

hp -= monsterDMG;
cout << endl << "Obr te uderil jako prvniho za " << monsterDMG << " dmg" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstrum te zasahlo za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMINI BOSS PORAZEN!" << endl;
zlato += 40;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}

int v2;
while (true){
cout << "\n-----VESNICE----- " << endl;


cout << "\nHP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;
cout << "Zlato: " << zlato << endl;

cout << "\nNachazite se ve vesnici." << endl;

cout << "\n1 - leceni (+30 HP za 20 zlata)" << endl;
cout << "2 - utok (+5 utok za 30 zlata)" << endl;
cout << "3 - odejit" << endl;

int v2;
cout << "Vase volba: ";
cin >> v2;

if (v2 == 1){
if (zlato >= 20){
if (hp == maxHP){
cout << "Mas plne zivoty." << endl;
}
else{
zlato -= 20;
hp += 30;
if (hp > maxHP){
hp = maxHP;
}
cout << "HP doplneno." << endl;
}
}

else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v2 == 2){

if (zlato >= 30){
zlato -= 30;
utok += 5;

cout << "Utok zvysen" << endl;
}
else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v2 == 3){
cout << endl << "Odesel jsi" << endl;
break;
}
else{
cout << "Neplatny udaj, zkuste to znovu.";
continue;
}
}
cout << "KONEC VESNICE" << endl;

cout << "\n----- MONSTRUM -----" << endl;

monstrum = "Nemrtvi";
monsterHP = 70;
monsterDMG = 5;

cout << "\nNarazil jsi na monstrum: " << monstrum << endl;

cout << "ARGHHAAHGHSHHHSHS" << endl;

cout << "HP monstra: " << monsterHP << endl;
cout << "Damage monstra: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstrum te zasahlo za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRUM PORAZENO!" << endl;
zlato += 20;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MONSTRA -----" << endl;

monstrum = "Kostra a nestvura";
monsterHP = 90;
monsterDMG = 20;

cout << "\nNarazil jsi na 2 monstra: " << monstrum << endl;
cout << "CVAK, CLIK, CHRAST.... RARRR.." << endl;

cout << "HP monster: " << monsterHP << endl;
cout << "Damage monster: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monster: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstra za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstra te zasahla za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRA PORAZENY!" << endl;
zlato += 30;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MONSTRA -----" << endl;

monstrum = "Hadi";
monsterHP = 100;
monsterDMG = 15;

cout << "\nNarazil jsi na 2 monstra: " << monstrum << endl;
cout << "SHSHHHSHASSSSS" << endl;

cout << "HP monster: " << monsterHP << endl;
cout << "Damage monster: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monster: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstra za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstra te zasahla za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRA PORAZENY!" << endl;
zlato += 30;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MINI BOSS -----" << endl;

monstrum = "Talkien";
monsterHP = 100;
monsterDMG = 10;

cout << "\nNarazil jsi na mini bosse: " << monstrum << endl;

cout << "Talkien: Cekal jsem tu na tebe, tebe, tebe... Jakmile ti seberu oko vedeni, znicim cely svcet!" << endl;

cout << "HP mini bosse: " << monsterHP << endl;
cout << "Damage mini bosse: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

hp -= monsterDMG;
cout << endl << "Talkien te uderil jako prvniho za " << monsterDMG << " dmg" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstrum te zasahlo za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMINI BOSS PORAZEN!" << endl;
zlato += 50;

XP += 20;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}

int v3;
while (true){
cout << "\n-----VESNICE----- " << endl;


cout << "\nHP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;
cout << "Zlato: " << zlato << endl;

cout << "\nNachazite se ve vesnici." << endl;

cout << "\n1 - leceni (+30 HP za 20 zlata)" << endl;
cout << "2 - utok (+5 utok za 30 zlata)" << endl;
cout << "3 - odejit" << endl;

int v3;
cout << "Vase volba: ";
cin >> v3;

if (v3 == 1){
if (zlato >= 20){
if (hp == maxHP){
cout << "Mas plne zivoty." << endl;
}
else{
zlato -= 20;
hp += 30;
if (hp > maxHP){
hp = maxHP;
}
cout << "HP doplneno." << endl;
}
}

else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v3 == 2){

if (zlato >= 30){
zlato -= 30;
utok += 5;

cout << "Utok zvysen" << endl;
}
else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v3 == 3){
cout << endl << "Odesel jsi" << endl;
break;
}
else{
cout << "Neplatny udaj, zkuste to znovu.";
continue;
}
}
cout << "KONEC VESNICE" << endl;

cout << "\n----- MONSTRA -----" << endl;

monstrum = "Netopyri";
monsterHP = 60;
monsterDMG = 25;

cout << "\nNarazil jsi na 2 monstra: " << monstrum << endl;
cout << "SQUEAK, SQUEAK!" << endl;

cout << "HP monster: " << monsterHP << endl;
cout << "Damage monster: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monster: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstra za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstra te zasahla za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRA PORAZENY!" << endl;
zlato += 30;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- MONSTRA -----" << endl;

monstrum = "Kanec a minotaur";
monsterHP = 100;
monsterDMG = 20;

cout << "\nNarazil jsi na 2 monstra: " << monstrum << endl;
cout << "UIIII,... Kurvakh as-shamba thenak min charkath..." << endl;

cout << "HP monster: " << monsterHP << endl;
cout << "Damage monster: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monster: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstra za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstra te zasahla za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRA PORAZENY!" << endl;
zlato += 30;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
cout << "\n----- 3 MONSTRA -----" << endl;

monstrum = "Phoenix, drak a pterodaktil";
monsterHP = 130;
monsterDMG = 15;

cout << "\nNarazil jsi na 2 monstra: " << monstrum << endl;
cout << "WHOOSH, WHOOSH..." << endl;

cout << "HP monster: " << monsterHP << endl;
cout << "Damage monster: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monster: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstra za " << utok << " dmg." << endl;
}

if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Monstra te zasahla za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nMONSTRA PORAZENY!" << endl;
zlato += 30;

XP += 10;

cout << "Ziskal jsi 10 XP" << endl;

if (XP >= 20){
level++;
XP = 0;
hp += 20;
utok += 5;
maxHP += 20;

cout << "\nLEVEL UP!" << endl;
cout << "Novy level: " << level << endl;
cout << "Dosahli jste noveho levelu, +20 stavajicich HP, +5 utok a +20 MAX. HP" << endl;
}
}
else{
cout << "\nPROHRAL JSI..." << endl;
return 0;
}
int v4;
while (true){
cout << "\n-----VESNICE----- " << endl;


cout << "\nHP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;
cout << "Zlato: " << zlato << endl;

cout << "\nNachazite se ve vesnici." << endl;

cout << "\n1 - leceni (+30 HP za 20 zlata)" << endl;
cout << "2 - utok (+5 utok za 30 zlata)" << endl;
cout << "3 - odejit" << endl;

int v4;
cout << "Vase volba: ";
cin >> v4;

if (v4 == 1){
if (zlato >= 20){
if (hp == maxHP){
cout << "Mas plne zivoty." << endl;
}
else{
zlato -= 20;
hp += 30;
if (hp > maxHP){
hp = maxHP;
}
cout << "HP doplneno." << endl;
}
}

else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v4 == 2){

if (zlato >= 30){
zlato -= 30;
utok += 5;

cout << "Utok zvysen" << endl;
}
else{
cout << "Nemas dost zlata" << endl;
}
}
else if (v4 == 3){
cout << endl << "Odesel jsi" << endl;
break;
}
else{
cout << "Neplatny udaj, zkuste to znovu.";
continue;
}
}
cout << "KONEC VESNICE" << endl;


int kolo = 1;

cout << "\n----- FINAL BOSS -----" << endl;

monstrum = "Thornhost";
monsterHP = 180;
monsterDMG = 25;

cout << "\nNarazil jsi na final bosse: " << monstrum << endl;

cout << "Thornhost: Pojd bliz, a seznam se s mymi trny..trny...trny!" << endl;

cout << "HP mini bosse: " << monsterHP << endl;
cout << "Damage final bosse: " << monsterDMG << endl;

cout << "\n----- TVE STATISTIKY -----" << endl;

cout << endl << "Role: " << role << endl;
cout << "HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << "Utok: " << utok << endl;

cout << "\n----- BOJ ZACINA -----" << endl;

hp -= monsterDMG;
cout << endl << "Thornhost te uderil jako prvniho za " << monsterDMG << " dmg" << endl;

while (monsterHP > 0 && hp > 0){

cout << "\nTvoje HP: " << hp << "/" << maxHP << endl;
cout << "Energie: " << energie << endl;
cout << endl << "HP monstra: " << monsterHP << endl;


if (role == "VALECNIK"){

cout << endl << "1 - Sek mecem" << endl;
cout << "2 - Tornado (50 energie)" << endl;
cout << "3 - Slam (75 energie)" << endl;
}
else if (role == "LOVEC"){
cout << endl << "1 - Strela lukem" << endl;
cout << "2 - Ohnivy sip (50 energie)" << endl;
cout << "3 - Sip osudu (100 energie)" << endl;
}
else if (role == "MAG"){
cout << endl << "1 - Kouzlo hole" << endl;
cout << "2 - Zmrazeni (50 energie)" << endl;
cout << "3 - Blesk (125 energie)" << endl;
}
else if (role == "TANK"){
cout << endl << "1 - Pest" << endl;
cout << "2 - Stit (25 energie)" << endl;
cout << "3 - Skok (50 energie)" << endl;
}

int akce;
cout << "Vase volba: ";
cin >> akce;

if (akce == 1){
monsterHP -= utok;
cout << endl << "-----BOJ-----\n";
cout << endl << "Zasahl jsi monstrum za " << utok << " dmg." << endl;
monsterHP -= utok;
hp -= utok / 3;
cout << "Thornhorst ti odrazil poskozeni za " << utok / 3 << " " << endl;
}
if (kolo % 2 == 0){
cout << "Thornhost vypustil trny do vsech sneru." << endl;
hp -= 20;
}
if (monsterHP <= 54){
cout << "Trnovy vybuch!";

monsterHP -= 10;
hp -= 10;
}
if (monsterHP > 0){
hp -= monsterDMG;
cout << endl << "Thornhorst te zasahl za " << monsterDMG << " dmg." << endl;
}
}


if (hp > 0){
cout << "\nFINAL BOSS PORAZEN!";
cout << "\nGratulujeme k vitezstvi!!!";

}
else{
cout << "\nPROHRAL JSI..." << endl;
cout << "\nTak blízko :(";
return 0;
}

return 0;

}