#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;


void Question_1(void){
	int nums[4];

	cout << "Enter 4 numbers : \n";
	cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];


	//Somme
	cout << "\n\nSum : " << (nums[0] + nums[1] + nums[2] + nums[3]);

	//Moyenne
	cout << "\n\nAverage : " << ((nums[0] + nums[1] + nums[2] + nums[3]) /4);

	//Produit
	cout << "\n\nProduct : " << (nums[0] * nums[1] * nums[2] * nums[3]);

	//Max
	int max = nums[0];

	for (int i = 0; i < 4; i++){
		max = (max >= nums[i]) ? max : nums[i];
	}

	cout << "\n\nMax : " << max ;

	//Min
	int min = nums[0];

	for (int i = 0; i < 4; i++) {
		min = (min <= nums[i]) ? min : nums[i];
	}

	cout << "\n\nMin : " << min << "\n\n";

}
void Question_2(void) {
	float r;
	float Pi = 3.14159;

	//Entrez le rayon d'un cercle (r)
	cout << "Entrez le rayon du cercle : \n";
	cin >> r;

	//Affiche diamètre (D = 2r)
	cout << "\n\nDiametre : " << (r * 2);

	//Affiche circonférence (C = 2*Pi*r)
	cout << "\n\nCirconference : " << (2*Pi*r);

	//Affiche l'air (A = Pi*r^2)
	cout << "\n\nAire : " << (Pi * (r * r)) << "\n\n";
}

void Question_3(void) {
	string name; 

	//Entrez nom
	cout << "Nom? : ";
	getline(cin, name);

	//Affiche message + nom
	cout << "\n\nBienvenue " << name << endl;

}

int main(int argc, char** argv) {
	
	//Question_1();
	//Question_2(); 
	//Question_3();

}