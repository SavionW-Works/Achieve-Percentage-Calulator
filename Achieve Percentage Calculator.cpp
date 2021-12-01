#include <iostream> 
#include <iomanip> 
#include <string> 
#include <cstdlib> 
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;



int main()
{
	int attempts, i; 
	double score,  fills, ans, wrong;
	char choice, repeat;
	
	repeat = 'y';
	
	cout << "(Program by Savion E. Watson -- Version: 1.0 -- Last Updated: 11/3/2020) \n \n";
	cout << "Welcome to the Achieve Homework Question Percentage Calculator! \n"; 
	cout << "This program will help you find the score for an INDIVIDUAL question in an Achieve assignment. \n \n";  
	cout << "This is important because: \n";
	cout << "  -The AVERAGE of your individual question scores determines your FINAL GRADE for the assignment \n"; 
	cout << "  -Every failed attempt makes your individual question score LOWER. \n"; 
	cout << "  -It gives you an idea of when to get help to get a GOOD SCORE \n \n";  
	cout << "If you have not already, please read the INSTRUCTION GUIDE given in the Macaulay Discord Server. \n";
	cout << "\n"; 
	
	
	while (repeat == 'y' || repeat == 'Y') {

		cout << "\n";
		cout << "Would you like to: ";
		cout << "(C)alculate your individual question score OR ";
		cout << "(F)ind out what the score formula is? \n"; 
		cin >> choice;
		if (choice == 'C' || choice == 'c') {
			fills = -1; 
			wrong = 0;
			ans = 0;

			while (fills < 0) {
				cout << "How many FILL-INS are in this question? \n";
				cin >> fills;
			}

			cout << "How many INCORRECT attempts do you have for this question? \n";
			cin >> attempts;
			cout << "\n";

			
			if (fills == 1) {
				wrong = attempts;
			}
			
			
			else {
				i = 1;
				while (i < (attempts + 1)) {
					cout << "How many fill-ins did you get wrong in attempt number: " << i << " ? \n";
					cout << "Incorrect fill-ins are NOT attempts. \n";
					cout << "Count how many boxes have RED outlines accross all of your attempts. \n";
					cin >> ans;

					if (ans > fills) {
						cout << "\n";
						cout << "You've enter a number GREATER than the number of fill-ins. Try again. \n \n";
					}

					else {
						wrong += ans;
						cout << "\n";
						i++;
					}


				}
			}

			score = 100 - (5 * (wrong / fills));
			
			if (score < 0) {
				cout << "You current score is: 0 \n"; 
				cout << "Getting this question right won't give you credit anymore. \n"; 
				cout << "Click the Give-Up button on Achieve to see the solution. \n";
			}
			
			else {
				cout << "Your current score is: " << score << "\n";
				cout << "Get your next attempt right to earn this score!";
			}

		}
		
		else if (choice == 'F' or choice == 'f') {
			cout << "\n";
			cout << "\n";
			cout << "Use the equation below if you don't feel like using the program: \n";
			cout << "a = total number of incorrect fill-ins \n";
			cout << "f = fill-ins for the question \n";
			cout << "Score = 100 - 5(a/f) \n";

		}

		cout << "\n \n";
		cout << "Would you like to restart the program? You can calculate another score. (Y)es or (N)o."; 
		cin >> repeat;  
		cout << "---------------------------------------------------------------------------------------------";
		cout << "\n \n";

	
	}
	return 0;
} 

	




	 





	
