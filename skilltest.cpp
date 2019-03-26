#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;

int main()
{
double PayRate, GrossIncome, NetIncome, SchoolAmount, BondsAmount, ClothesAmount, ParentsAmount, HoursWorked;
    
const double TotalTax = 0.14;
const double NewClothes = 0.10;
const double SchoolSupplies = 0.01;
const double SavingBonds = 0.25;
const double Parents = 0.50;
    
    cout<<"Input the following:\n";
	cout<<"Woking Hours: ";
    cin >>HoursWorked;
    cout <<"Hourly Rate in $: ";
    cin >> PayRate;
    
    GrossIncome=HoursWorked*PayRate;
    NetIncome=GrossIncome*TotalTax;
    ClothesAmount=NetIncome*NewClothes;
    SchoolAmount = NetIncome*SchoolSupplies;
    NetIncome-=(ClothesAmount+SchoolAmount);
    BondsAmount=NetIncome*SavingBonds;
    ParentsAmount=BondsAmount*Parents;
    cout << fixed << showpoint << setprecision(2);
    cout << "Your gross income is worth"<<" "<<"$"<<GrossIncome<<"."<<endl;
    cout << "Your net income is worth"<<" "<<"$"<<NetIncome<<"."<<endl;
    cout << "The money you spend on clothes and accessories is worth"<<" "<<"$"<<ClothesAmount<<"."<<endl;
    cout << "The money you spend on school supplies is worth"<<" "<<"$"<<SchoolAmount<<"."<<endl;
    cout << "The money you spend to buy savings bonds is worth"<<" "<<"$"<<BondsAmount<<"."<<endl;
    cout << "The money your parents spend to buy savings bonds for you is worth"<<" "<<"$"<<ParentsAmount<<"."<<endl;
    getch();
    return 0;
}
