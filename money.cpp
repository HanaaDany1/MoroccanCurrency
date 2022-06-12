// C++ program to accept an amount
// and count number of notes
#include <bits/stdc++.h>
using namespace std;



//int Paperbills[8] = { 200, 100, 50, 20,10, 5, 2, 1};
double CentimeCoins[3]= {0.1, 0.2, 0.5 };





void Dmoney(int Dirhams, int y, int MyDirhams){

	int BillCountedSet[y] = { 0 };

	
	// count notes using Greedy approach
	for (int i = 0; i < y ; i++) {
		if (Dirhams > BillCountedSet[i]) {
			//BillCountedSet[i] = Dirhams / Paperbills[i];
		//	Dirhams = Dirhams - BillCountedSet[i] * Paperbills[i];
        BillCountedSet[i] = Dirhams / MyDirhams[i];
            Dirhams = Dirhams - BillCountedSet[i] * MyDirhams[i];
		}
	}
	cout << "Dirhams Count  is -> " << endl;
	for (int i = 0; i < y; i++) {
		if (BillCountedSet[i] != 0) {
		//	cout << Paperbills[i] << " : " << BillCountedSet[i] << endl;
            	cout << MyDirhams[i] << " : " << BillCountedSet[i] << endl;
		}
	}
}

void Cntmoney(double Cents)
{

	double BillCountedSet[3] = { 0 };
	
	// count notes using Greedy approach
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

// Driver function
int main()
{



   
//double MyCentimes[10];
cout << "Please enter the number of Dirhams bills/coins you have on you"<< endl;
int numBills;

cin >> numBills;

  int *MyDirhams = new int[numBills] ;
  int total;
for (int x = 0; x < numBills; i++) {
    cout << "Enter each Bill/Coin seperatly" << endl;
    cin >> MyDirhams[x];
    total += MyDirhams[x];    
}


	double Cents = 0.7;
    int Dirhams = 190;
	
  //  Cntmoney(Cents);
    Dmoney(Dirhams, numBills);

 
   int numBills;
//double MyCentimes[10];
cout << "Please enter the number of Dirhams bills/coins you have on you"<< endl;

    cin >> numBills;

  int *MyDirhams = new int[numBills] ;
  int total;
for (int i = 0; i < numBills; i++) {
    cout << "Enter each Bill/Coin seperatly" << endl;
    cin >> MyDirhams[i];
    total += MyDirhams[i];    
}


//cout << "Please enter the centimes you have on you"<< endl;
//cin >> MyCentimes[10];


    //cout<< MyCentimes;
   
    
	return 0;
}
