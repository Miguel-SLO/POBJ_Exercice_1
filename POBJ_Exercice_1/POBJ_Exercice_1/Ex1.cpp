// Caneva Ex1 SL228_POBJ language C++ 
// Visual Studio 2015
// 11.11.2016 C. Huber

#include <iostream>

using namespace std;

int main (void)
{
	char UserAnswer;
	int ValA, ValB;
	// Variables pour test A et B
	short i;
	short ValB1;
	double ValB2;

	/*printf("Exercice 1 : Huber Christian \n");*/
	/*printf("Solution en C a trandformer en C++ \n");*/
	cout << "Exercice 1 : Huber Christian" << endl;
	cout << "Solution en C à transformer en C++" << endl;

	do {
		/*printf("Test A ou B, Q pour Quitter \n");*/
		cout << "Test A ou B, Q pour Quitter" << endl << flush;

		/*scanf_s("%c%*c", &UserAnswer, 2);*/
		cin >> UserAnswer;
		
		switch (UserAnswer) {
			case 'A':
			case 'a':

				/*printf("TestA: entrez un nombre entre 1 et 9 \n");*/
				cout << "TestA : entrez un nombre entre 1 et 9" << endl << flush;
				
				/*scanf_s("%d%*c", &ValA);*/
				cin >> ValA;

				if (ValA > 9)
				{
					ValA = 9;
					/*printf("TestA: ValA limitee a 9 \n");*/
					cout << "TestA: ValA limitee a 9 " << endl;
				}
				else if (ValA == 0)
				{
					ValA = 1;
					/*printf("TestA: ValA forcee a 1 \n");*/
					cout << "TestA: ValA forcee a 1" << endl;
				}
				else if (ValA > 0 )  
				{
					/*printf("%d ", ValA);*/
					cout << ValA;

					for (i=0; i < ValA ; i++)
						cout << "*";
					
					cout << endl; // saut de ligne
				}
				else 
				{
					/*printf("TestA: ValA est negatif ! \n");*/
					cout << "TestA: ValA est negatif !" << endl;
				}
				break;

			case 'B':
			case 'b':
				//printf("TestB: entrez une valeur entre 0 et 9 \n");
				//scanf_s("%d%*c", &ValB);
				cout << "TestB : entrez une valeur entre 0 et 9" << endl;
				cin >> ValB;
				
				if (ValB >= 0 && ValB <=9 )
				{
					for (i=0; i < ValB; i++) { 
						ValB1 = 100 + (10 * i);
						ValB2 = ValB1 / 10000.0;
						//printf("TestB: i= %d ValB1 = %d ValB2 = %lf \n", i, ValB1, ValB2);
						cout << "TestB: i = " << i << " ValB1 = " << ValB1 << " ValB2 = " << ValB2 << endl;
					}
				}
				else
				{
					//printf("TestB: ValB n'est pas entre 0 et 9 ! \n");
					cout << "TestB: ValB n'est pas entre 0 et 9 !" << endl;
				}
				break;

		} // end switch
	
	} while (!(UserAnswer == 'Q' || UserAnswer == 'q'));

	return (0);
}