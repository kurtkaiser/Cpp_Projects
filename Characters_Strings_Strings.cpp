/*
- Write a function that receives a string as an argument. The function should 
count the number of vowels in the string and return that number.
- Write another function that receives a string as an argument. The function 
should count the number of consonants in the string and return that number. 
*/

#include <iostream>
//Required for funcations that take any c-strings as arguments
#include <cstring>
#include <cstdlib>
using namespace std;

/*Declare functions for counting number of vowels and consonants
 - Use a pointer for the char, denoted by the asterisk
 - Many different representations of pointers to strings, such as:
    - string literal "Hello all!"
    - pointer to a character, char *pnt
    - array of characters, char myString[10]
*/
int vowelCount(char *str);
int consonantCount(char *str);

//Start main
int main() {
	//Declare required variables
	const int LENGTH = 100;
	char choice = '0';
	char line[LENGTH];
	//Output need information
	cout << "This program counts the number of vowels (a,e, i, o, u) and the "
		<< "number of consonants appearing in a string.\n" << endl;
	//Ask user to input a string
	cout << "Enter a string: ";
	//getline will take all text inputtted, cin stops at spaces
	cin.getline(line, LENGTH);
	//Ask user what function they want to run
	cout << "\nA) Count the vowels in the string.\n"
		<< "B) Count the consonants in the string.\n"
		<< "C) Exit.\n\n";
	cin >> choice;
	//Use a while loop to check if the user wishes to continue to run the program
	while (choice != 'c' && choice != 'C')
    {
    	if (choice == 'a' || choice == 'A')
    	{
    		//Call the function needed to count the vowels
    		cout << "The string has " << vowelCount(line) << " vowels.\n" << endl;
    	}else if (choice == 'b' || choice == 'B')
    	{
    		//Call the function needed to count consonants
    		cout << "The string has "<< consonantCount(line)<< " consonants, not counting the period.\n" << endl;
        }
        cout << "A) Count the vowels in the string.\n"
		<< "B) Count the consonants in the string.\n"
		<< "C) Exit.\n\n";
	    cin >> choice;
	}
	cout << "Program terminated";
	cout << "\n\n\n";
	system("pause");
	return 0;
}
//Declare the vowel function, use for loop to compare each char in the array
int vowelCount(char *str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		// tolower converts a letter to lowercase
		str[i] = tolower(str[i]);
		/* - The pointer to char, str, the parameter, is used as an array of
		     a char to iterate through each character
		   - Also an array name can be used as a pointer to a char */
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' ||
			str[i] == 'u')
		{
			count++;
		}
	}
	return count;
}

//Declare the consonant function, use for loop to compare each char in the array
int consonantCount(char *str)
{
	int count = 0;
	for (int i = 0; str[i] != '\0'; i++)
	{
		/*The pointer to char, str, is my parameter, I then use the c-string as
		   an array and iterate through each character to count the vowels */
		str[i] = tolower(str[i]);
		if (str[i] == 'b' || str[i] == 'c' || str[i] == 'd' || str[i] == 'f' ||
			str[i] == 'g' || str[i] == 'h' || str[i] == 'j' || str[i] == 'k' || 
			str[i] == 'l' || str[i] == 'm' || str[i] == 'n' || str[i] == 'p' ||
			str[i] == 'q' || str[i] == 'r' || str[i] == 's' || str[i] == 't' ||
			str[i] == 'v' || str[i] == 'w' || str[i] == 'x' || str[i] == 'y' ||
			str[i] == 'z')
		{
			count++;
		}
	}
	return count;
}
