/// C++ program to inpute amount of Dirhams and Cents 
// and count number needed to achieve it
#include <bits/stdc++.h>
using namespace std;


int Paperbills[8] = { 200, 100, 50, 20, 10, 5, 2, 1};// number of Dirhams bills and coins we have in Moroccan Currency
double CentimeCoins[3]= {0.1, 0.2, 0.5 };  //number of centimes coins we have since they are Double not integers



void Dmoney(int Dirhams){

	int BillCountedSet[8] = { 0 };
	cout << "Dirhams Count  is -> " << endl;
	// count notes using the Greedy approach
	for (int i = 0; i <8 ; i++) {
		if (Dirhams > BillCountedSet[i]) {
			BillCountedSet[i] = Dirhams / Paperbills[i];
			Dirhams = Dirhams - BillCountedSet[i] * Paperbills[i];
       
	}
	

        
		if (BillCountedSet[i] != 0) {
		cout << Paperbills[i] << " : " << BillCountedSet[i] << endl;
            	
		}
	}
}

void Cntmoney(double Cents)
{
	double BillCountedSet[3] = { 0 };
	
	// count the coins using same approach
	for (int i = 0; i <  3; i++) {
		if (Cents > BillCountedSet[i]) {
			BillCountedSet[i] = Cents / CentimeCoins[i];
			Cents = Cents - BillCountedSet[i] * CentimeCoins[i];
		}
	}
	cout << "Centimes Count  is -> " << endl;
	for (int i = 0; i < 3; i++) {
		if (BillCountedSet[i] != 0) {
			cout << CentimeCoins[i] << " : " << BillCountedSet[i] << endl;
		}
	}
}




int main()
{

	double Cents = 0.1;
 	int Dirhams = 6000;
	Dmoney(Dirhams);
        Cntmoney(Cents);
   

 
 
	return 0;
}
